#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    unsigned long long n = 600851475143;
    for (unsigned long long i = 2; i < n; ++i) {
        if (n % i == 0) {
            n /= i;
            i = 2;
        }
    }
    std::cout << n << n;

    return 0;
}
