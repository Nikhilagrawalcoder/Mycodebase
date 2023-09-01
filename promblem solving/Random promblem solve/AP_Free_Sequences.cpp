#include <iostream>
#include <vector>

bool isAPFree(const std::vector<int>& sequence) {
    int n = sequence.size();
    
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if ((sequence[j] - sequence[i]) == (sequence[k] - sequence[j])) {
                    return false;  // AP found
                }
            }
        }
    }
    
    return true;  // No AP found
}

int main() {
    int t;
    std::cin >> t;  // Number of test cases
    
    while (t--) {
        int n;
        std::cin >> n;  // Size of the sequence
        
        std::vector<int> sequence(n);
        for (int i = 0; i < n; i++) {
            std::cin >> sequence[i];  // Input the sequence elements
        }
        
        if (isAPFree(sequence)) {
            std::cout << "Yes\n";  // Sequence is AP-Free
        } else {
            std::cout << "No\n";   // Sequence is not AP-Free
        }
    }
    
    return 0;
}