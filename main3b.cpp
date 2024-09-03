#include <iostream>
using namespace std;

// Function to calculate the GCD of two integers which are numerator and denominator
int calculateGCD(int numerator, int denominator) 
{//do not let those variables names intimidate you, they can be changed but for more precision let me use them
    if (denominator == 0)
        return numerator;
    else
        return calculateGCD(denominator, numerator % denominator);
}

// Function to reduce a fraction
void reduceFraction(int numerator, int denominator) {
    int commonDivisor = calculateGCD(numerator, denominator);
    numerator /= commonDivisor;
    denominator /= commonDivisor;

    if (denominator == 1)
        cout << numerator;
    else
        cout << numerator << "/" << denominator;
}

int main() {
    int numerator, denominator;//here we are declaring our variables and we prompt the user to enter the number of his choice

    cout << "Enter the numerator: ";
    cin >> numerator;
    cout << "Enter the denominator: ";
    cin >> denominator;

    if (numerator % denominator == 0)
        cout << 1;//just return 1 if the fraction is correct
    else if (numerator <= 0 || denominator <= 0)//else if return 0
        cout << 0;
    else
        reduceFraction(numerator, denominator);//else just try to reduce them

    return 0;
}



