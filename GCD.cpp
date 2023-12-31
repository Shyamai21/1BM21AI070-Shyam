#include<iostream>
using namespace std;

class GCD{
public:
    int findGCD(int a, int b){
    if (b==0)
        {
            return a;
        }
        return findGCD(b, a%b);
    }
};

int main()
{
    GCD gcd;
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int result = gcd.findGCD(num1, num2);

    std::cout << "The GCD of " << num1 << " and " << num2 << " is " << result << std::endl;

    return 0;
}

