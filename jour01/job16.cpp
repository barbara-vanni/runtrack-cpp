#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void MySortString(std::vector<std::string> &v) {
    int n = v.size();
    
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;

        for (int j = i + 1; j < n; ++j) {
            if (v[j] < v[minIndex]) {  
                minIndex = j;
            }
        }

        if (minIndex != i) {
            std::swap(v[i], v[minIndex]);
        }
    }
}

int main() {
    std::vector<std::string> vec = {"orange", "banana", "apple","walabi", "kiwi","pear"};
    
    MySortString(vec);

    for (const auto& str : vec) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}
