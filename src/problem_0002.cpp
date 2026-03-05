#include <iostream>

using namespace std;

int fib(int n);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int i = 0;
    int n = 0;
    int sum = 0;
    while (n <= 4000000) {
        n = fib(++i);
        if (!(n % 2))
            sum += n;
    }
    cout << sum << endl;

    return 0;
}

int fib(int n) {
    if (n < 2)
        return n;
    else
        return fib(n - 2) + fib(n - 1);
}
