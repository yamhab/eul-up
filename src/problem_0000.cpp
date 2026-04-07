#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    unsigned long long sum = 0;
    for (unsigned long long int i = 1; i <= 630000; i += 2)
        sum += i * i;
    std::cout << sum << '\n';

    return 0;
}
