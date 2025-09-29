#include <vector>
#include <iostream>
#include <cmath>

void recFib(int &sum, int limit, int t1, int t2) {
    if ((t1+t2) % 2 == 0 && t1+t2 < limit) {
        sum = sum+t1+t2;
        std::cout << "Terms: " << t1+t2 << '\n';
        recFib(sum, limit, t2, t1+t2);
    }
    else if ((t1+t2) % 2 == 1 && t1+t2 < limit) {
        recFib(sum, limit, t2, t1+t2);
    }

    return;
}

int main () {
    int sum {0};
    recFib(sum, 4000000, 1, 1);

    std::cout << "\nThe answer is: " << sum << std::endl;
}