#include <iostream>
#include <cctype>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>


int main() {
    std::string line;
    std::ifstream in("for_test.txt");
    std::vector<int> sum;
    int total = 0;

    while (std::getline(in, line)) {
        
        bool is_blank = true;
        for (char c : line) {
            if (!std::isspace(c)) {
                is_blank = false;
                break;
            }
        }
        std::cout << line << std::endl;

        if (is_blank) {
            std::cout << total << std::endl;
            total = 0;
        }
        else {
            total += std::stoi(line);
            sum.push_back(total);
        }
    }

    int largest = sum[0];

    for (int n : sum)
    {
        if (n > largest)
        {
            largest = n;
        }
    }
  
    std::cout << "the largest number is " << largest << std::endl;

    return 0;
}

