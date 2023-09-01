#include <iostream>
using namespace std;

int BinomialCoeff(int n, int r) {
    if (r == 0) {
        return 1;
    }
    if(r == n) {
        return 1;
    }
    if (r > n) {
        return 0;
    }
    int res1 = BinomialCoeff(n - 1, r - 1);
    int res2 = BinomialCoeff(n - 1, r);
    return res1 + res2;
}

int main() {
    int n = 5;
    int r = 3;
    int result = BinomialCoeff(n, r);
    cout<< "The result is " << result;
}