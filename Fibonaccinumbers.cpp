#include<iostream>
using namespace std;

class Fibonacci {
public:
    void generateFibonacci(int n){
    for (int i =0; i < n; i++)
        {
            cout << fibonacci(i) << " ";
        }
    }
private:
    int fibonacci(int n)
    {
        if (n<=1)
            return n;
        else
            return fibonacci(n-1) + fibonacci(n-2);
    }
    };

    int main() {
    int n;
    cout << "Enter the number of fibonacci numbers to generate: ";
    cin >> n;

    Fibonacci fib;
    cout << "Fibonacci numbers: ";
    fib.generateFibonacci(n);
    return 0;

    }
