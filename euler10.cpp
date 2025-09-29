#include <iostream>
#include <cmath>

bool isPrime(int n) {
    for (int i{2}; i<static_cast<int>(sqrt(n)+1); i++) {
        if (n % i == 0) {return false;}
    }
    return true;
}

int main()
{
    long sum {0};

    for (int i{2}; i<2000000; i++) {
        if(isPrime(i)) {sum+=i;}
    }
    std::cout << sum << std::endl;
}