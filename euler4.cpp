#include <iostream>

bool check_palindrome(int number) {
    std::string toCheck {std::to_string(number)};

    size_t front {0};
    size_t back {toCheck.length()-1};

    while (front < back) {
        if (toCheck[front] != toCheck[back]) {return false;}
        front++;
        back--;
    }
    return true;
}

int main()
{
    int number{};
    int currPalindrome{};

    for (int i{100}; i < 1000; i++) {
        for (int j{100}; j < 1000; j++) {
            number = i*j;
            if (check_palindrome(number) && number > currPalindrome) {currPalindrome = number;}
        }
    }
    
    std::cout << currPalindrome << std::endl;
}