#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

bool isprime(int n) {
    if (n == 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void allprimesdivs(int n) {
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            int div1 = i;
            int div2 = n / i;
            if (div1 != div2) {
                if (isprime(div1)) {
                    printf("%d ", div1);
                }
                if (isprime(div2)) {
                    printf("%d ", div2);
                }
            } else {
                if (isprime(div1)) {
                    printf("%d ", div1);
                }
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    allprimesdivs(n);

    return 0;
}