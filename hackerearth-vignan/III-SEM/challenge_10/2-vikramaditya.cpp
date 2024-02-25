#include <iostream>
#include <string>

bool isPrime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}

int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

std::string findLuckyDay(const std::string& currentDate) {
    std::string day = currentDate.substr(0, 2);
    std::string month = currentDate.substr(3, 2);
    std::string year = currentDate.substr(6, 4);

    int currentNum = std::stoi(day + month + year);

    while (true) {
        int digitSumResult = digitSum(currentNum);
        if (isPrime(digitSumResult))
            return day + "-" + month + "-" + year;

        currentNum++;
        day = std::to_string(currentNum).substr(0, 2);
        month = std::to_string(currentNum).substr(2, 2);
        year = std::to_string(currentNum).substr(4, 4);
    }
}

int main() {
    std::string currentDate;
    std::cin >> currentDate;

    std::string luckyDay = findLuckyDay(currentDate);
    std::cout << luckyDay << std::endl;

    return 0;
}
