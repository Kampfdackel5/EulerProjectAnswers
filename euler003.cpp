#include <iostream>
#include <vector>

std::vector<int> findPrimes(int limit) {
    std::vector<int> primes;

    for(int num {2}; num < limit; num++) {
        bool isPrime {true};
        for (int div {2}; div * div <= num; div++) {
            if (num % div == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            primes.push_back(num);
        }
    }
    return primes;
}

std::vector<int> factorize(long int toFactorize, std::vector<int> factors) {
    std::vector<int> primes {findPrimes(10000)};

    for (int num : primes) {
        if (toFactorize % num == 0) {
            factors.push_back(num);
            std::cout << num << " * " << toFactorize / num << '\n';
            return factorize(toFactorize / num, factors);
            break;
        }
    }
    return factors;
}

int main()
{
    std::vector<int> factors;
    factorize((long) 600851475143, factors);
}