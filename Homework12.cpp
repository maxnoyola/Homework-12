#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> numbers2 = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    numbers1.resize(numbers1.size() + numbers2.size());
    auto it1 = numbers1.begin();
    auto it2 = numbers2.begin();
    size_t original_size = numbers1.size() - numbers2.size();
    for (size_t i = 0; i < original_size && it2 != numbers2.end(); ++i) {
        it1 = numbers1.begin() + i * 2 + 1; 
        numbers1.insert(it1, *it2);         
        ++it2;
    }

    std::cout << "Interlaced vector (numbers1): ";
    for (int num : numbers1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}