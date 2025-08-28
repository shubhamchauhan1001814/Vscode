#include <iostream>
#include <vector>

void displayVector(const std::vector<int>& v) {
    std::cout << "[ ";
    for (int num : v) std::cout << num << " ";
    std::cout << "]\n";
}

int main() {
    // 1️⃣ Creating a vector using different constructors
    std::vector<int> v1; // Empty vector
    std::vector<int> v2(5, 10); // Vector with 5 elements, all initialized to 10
    std::vector<int> v3 = {1, 2, 3, 4, 5}; // Initializer list

    std::cout << "v2 (5 elements of 10): ";
    displayVector(v2);

    std::cout << "v3 (initialized list): ";
    displayVector(v3);

    // 2️⃣ Adding elements
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    std::cout << "After push_back(1,2,3) on v1: ";
    displayVector(v1);

    // 3️⃣ Removing elements
    v1.pop_back(); // Removes last element
    std::cout << "After pop_back() on v1: ";
    displayVector(v1);

    // 4️⃣ Accessing elements
    std::cout << "First element of v3: " << v3.front() << "\n";
    std::cout << "Last element of v3: " << v3.back() << "\n";
    std::cout << "Element at index 2 of v3: " << v3.at(2) << "\n";

    // 5️⃣ Inserting elements
    v3.insert(v3.begin() + 1, 99); // Insert 99 at index 1
    std::cout << "After inserting 99 at index 1 in v3: ";
    displayVector(v3);

    // 6️⃣ Erasing elements
    v3.erase(v3.begin() + 2); // Remove element at index 2
    std::cout << "After erasing element at index 2 in v3: ";
    displayVector(v3);

    // 7️⃣ Resizing vector
    v3.resize(7, 100); // Resize to 7 elements, fill new spaces with 100
    std::cout << "After resizing v3 to 7 elements with 100: ";
    displayVector(v3);

    // 8️⃣ Swapping two vectors
    std::vector<int> v4 = {7, 8, 9};
    std::cout << "Before swap, v3: ";
    displayVector(v3);
    std::cout << "Before swap, v4: ";
    displayVector(v4);
    
    v3.swap(v4);
    std::cout << "After swap, v3: ";
    displayVector(v3);
    std::cout << "After swap, v4: ";
    displayVector(v4);

    // 9️⃣ Checking vector properties
    std::cout << "Size of v3: " << v3.size() << "\n";
    std::cout << "Capacity of v3: " << v3.capacity() << "\n";
    std::cout << "Is v3 empty? " << (v3.empty() ? "Yes" : "No") << "\n";

    // 🔟 Clearing the vector
    v3.clear();
    std::cout << "After clear(), v3: ";
    displayVector(v3);
    
    return 0;
}
