# Import statements
import numpy as np
import cv2
import os

# Correct directory path where the model files are located
DIR = r"C:\Users\R15010624\Desktop\colorization_model\model"

# Full paths to the model files
PROTOTXT = os.path.join(DIR, r"colorization_deploy_v2.prototxt")
POINTS = os.path.join(DIR, r"pts_in_hull.npy")
MODEL = os.path.join(DIR, r"colorization_release_v2.caffemodel")

# Check if the model files exist
if not os.path.exists(PROTOTXT):
    print(f"Error: Prototxt file not found at {PROTOTXT}")
    exit()

if not os.path.exists(MODEL):
    print(f"Error: Caffe model file not found at {MODEL}")
    exit()

if not os.path.exists(POINTS):
    print(f"Error: Points file not found at {POINTS}")
    exit()

# Hardcoded image path
image_path = r"C:\Users\R15010624\Desktop\Target.jpg"

# Load the Model
print("Load model")
net = cv2.dnn.readNetFromCaffe(PROTOTXT, MODEL)
pts = np.load(POINTS)

# Load centers for ab channel quantization used for rebalancing.
class8 = net.getLayerId("class8_ab")
conv8 = net.getLayerId("conv8_313_rh")
pts = pts.transpose().reshape(2, 313, 1, 1)
net.getLayer(class8).blobs = [pts.astype("float32")]
net.getLayer(conv8).blobs = [np.full([1, 313], 2.606, dtype="float32")]

# Load the input image
image = cv2.imread(image_path)
if image is None:
    print(f"Error: Unable to load image at {image_path}")
    exit()

scaled = image.astype("float32") / 255.0
lab = cv2.cvtColor(scaled, cv2.COLOR_BGR2LAB)

resized = cv2.resize(lab, (224, 224))
L = cv2.split(resized)[0]
L -= 50

print("Colorizing the image")
net.setInput(cv2.dnn.blobFromImage(L))
ab = net.forward()[0, :, :, :].transpose((1, 2, 0))

ab = cv2.resize(ab, (image.shape[1], image.shape[0]))

L = cv2.split(lab)[0]
colorized = np.concatenate((L[:, :, np.newaxis], ab), axis=2)

colorized = cv2.cvtColor(colorized, cv2.COLOR_LAB2BGR)
colorized = np.clip(colorized, 0, 1)

colorized = (255 * colorized).astype("uint8")

# Display the images
cv2.imshow("Original", image)
cv2.imshow("Colorized", colorized)
cv2.waitKey(0)
cv2.destroyAllWindows()


