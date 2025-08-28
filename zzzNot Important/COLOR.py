import cv2
import numpy as np

# ✅ 1. Load the Pre-trained Model (Update these paths!)
prototxt_path = r"C:\Users\R15010624\Desktop\colorization_model\colorization_deploy_v2.prototxt"
model_path = r"C:\Users\R15010624\Desktop\colorization_model\colorization_release_v2.caffemodel"
points_path = r"C:\Users\R15010624\Desktop\colorization_model\pts_in_hull.npy"

# Load the model
net = cv2.dnn.readNetFromCaffe(prototxt_path, model_path)

# Load cluster centers for A/B channels
pts_in_hull = np.load(points_path)

# ✅ 2. Update Model Layers for AB Prediction
class8 = net.getLayerId("class8_ab")
conv8 = net.getLayerId("conv8_313_rh")

# Reshape pts_in_hull to match the expected input
pts_in_hull = pts_in_hull.transpose().reshape(2, 313, 1, 1)
net.getLayer(class8).blobs = [pts_in_hull.astype("float32")]
net.getLayer(conv8).blobs = [np.full([1, 313], 2.606, dtype="float32")]

# ✅ 3. Load the Input Black & White Image
image_path = r"C:\Users\R15010624\Desktop\Target.jpg"
image = cv2.imread(image_path)

# Check if image is loaded
if image is None:
    raise FileNotFoundError(f"Error: Unable to load image at {image_path}")

# Convert to LAB color space (OpenCV uses BGR by default)
image_lab = cv2.cvtColor(image, cv2.COLOR_BGR2LAB)

# Extract Luminance (L channel) and resize for model input
L = image_lab[:, :, 0]  # Only L Channel
L_resized = cv2.resize(L, (224, 224))  # Model expects 224x224 input
L_resized = L_resized.astype("float32") - 50  # Mean-center L channel

# ✅ 4. Pass L Channel Through the Model
net.setInput(cv2.dnn.blobFromImage(L_resized))
ab_output = net.forward()[0, :, :, :].transpose((1, 2, 0))  # Extract A/B channels

# Resize AB channels to match original image size
ab_output = cv2.resize(ab_output, (image.shape[1], image.shape[0]))

# Merge L and predicted AB channels
colorized_lab = np.concatenate((L[:, :, np.newaxis], ab_output), axis=2)

# ✅ 5. Convert Back to BGR for Display
colorized_image = cv2.cvtColor(colorized_lab.astype("uint8"), cv2.COLOR_LAB2BGR)

# ✅ 6. Fix Faded Colors by Increasing Saturation
colorized_image = cv2.addWeighted(colorized_image, 1.2, image, 0, 0)

# ✅ 7. Save & Display the Colorized Image
output_path = r"C:\Users\R15010624\Desktop\colorized_image.jpg"
cv2.imwrite(output_path, colorized_image)
cv2.imshow("Colorized Image", colorized_image)
cv2.waitKey(0)
cv2.destroyAllWindows()

print(f"Colorized image saved at: {output_path}")
