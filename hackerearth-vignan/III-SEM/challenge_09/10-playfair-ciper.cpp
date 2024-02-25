#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

const int n = 5;
std::string cipherTable[n][n];

void initializeCipherTable(const std::string& key) {
    std::string cipher;
    for (char c : key) {
        if (std::isalpha(c)) {
            cipher += std::toupper(c);
        }
    }

    cipher += "ABCDEFGHIKLMNOPQRSTUVWXYZ";

    std::string Uchars;
    for (char c : cipher) {
        if (Uchars.find(c) == std::string::npos)
            Uchars += c;
    }

    int index = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            cipherTable[row][col] = Uchars.substr(index++, 1);
        }
    }
}

void printCipherTable() {
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            std::string element = cipherTable[row][col];
            if (element == "I/J")
                std::cout << element;
            else
                std::cout << " " << element << " ";
        }
        std::cout << "\n";
    }
}

int main() {
    std::string key;
    std::getline(std::cin, key);

    initializeCipherTable(key);

    // Replace 'I' with 'I/J' in the cipher table
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (cipherTable[row][col] == "I")
                cipherTable[row][col] = "I/J";
        }
    }

    printCipherTable();

    return 0;
}
