// Recursion (özyineleme) ile faktoriyal

#include <iostream>

using namespace std;

int main()
{
    int factorial(int);
    int fact, value;
    
    cout << "Entry any number: ";
    cin >> value;
    
    fact = factorial(value);
    
    cout << "Factorial of a number is: " << fact << endl;
    
    return 0;
}

int factorial(int n)
{
    if (n < 0)
        return(-1); /* Yanlış Değer */
    
    if (n == 0)
        return(1); /* Sonlandırma koşulu */
    
    else
    {
        return(n * factorial(n - 1));
    }
}
