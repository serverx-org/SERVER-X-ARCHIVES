#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string getLargestEvenString(const std::vector<int>& numbers) {
    std::string largestEvenString;

    for (int num : numbers) {
        std::string currentString = std::to_string(num);
        if (num % 2 == 0 && currentString.length() == numbers.size() && currentString > largestEvenString) {
            largestEvenString = currentString;
        }
    }

    return largestEvenString;
}

std::string getLargestOddString(const std::vector<int>& numbers) {
    std::string largestOddString;

    for (int num : numbers) {
        std::string currentString = std::to_string(num);
        if (num % 2 != 0 && currentString.length() == numbers.size() && currentString > largestOddString) {
            largestOddString = currentString;
        }
    }

    return largestOddString;
}

int main() {
    std::vector<int> numbers = {2, 4, 6, 7, 8, 9};
    
    std::string largestEven = getLargestEvenString(numbers);
    std::string largestOdd = getLargestOddString(numbers);

    std::cout << "Largest Even String: " << largestEven << std::endl;
    std::cout << "Largest Odd String: " << largestOdd << std::endl;

    return 0;
}
