#include <iostream>

// Lab 7 — Joshua Van Brunt
// CIS 5 Week 07 · Two arrays

int main() {
    const int N = 5;
    int quiz[N] = { 88, 92, 75, 100, 81 };
    int lab[N] = { 95, 87, 90, 78, 93 };
                
        std::cout << "Quiz scores:" << std::endl;
        int sum = 0;
        int hi = quiz[0];                 
        for (int i = 0; i < N; ++i) {     
            std::cout << "[" << i << "] " << quiz[i] << std::endl;
            sum += quiz[i];               
            if (quiz[i] > hi)
                hi = quiz[i];
        }
        std::cout << "Sum: " << sum << std::endl;
        std::cout << "High: " << hi << std::endl << std::endl;

        std::cout << "Lab scores:" << std::endl;
        sum = 0;
        hi = lab[0];                      
        for (int i = 0; i < N; ++i) {     
            std::cout << "[" << i << "] " << lab[i] << std::endl;
            sum += lab[i];
            if (lab[i] > hi)
                hi = lab[i];
        }
        std::cout << "Sum: " << sum << std::endl;
        std::cout << "High: " << hi << std::endl;

	return 0;
}