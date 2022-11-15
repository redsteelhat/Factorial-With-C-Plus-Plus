// n! = n * (n – 1)!
// n! = 1 if n = 0 or n = 1

#include <iostream>
using namespace std;

unsigned int factorial(unsigned int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int num = 5; /* İstediğin sayı olabilir */
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
