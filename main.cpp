#include <iostream>
#include <math.h>
using std::cout;
using std::cin ;


int main()
{   
    
    double base, power, result;

    cout << "Enter base: ";
    cin >> base;
    // Clean cin buffer
    cin.sync();

    cout << "Enter power: ";
    cin >> power;
    cin.sync();

    result = pow(base, power);

    // Check overflow
    if (result == INFINITY)
    {
        printf("Result too big.");
        return 1;
    }
    
    cout << base << " to the power of " << power << " is " << result << "\n";
    
    return 0;

}
    
