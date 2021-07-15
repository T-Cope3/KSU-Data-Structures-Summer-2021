//Troy Cope
//3305 Summer Section W01
//Prof. Yong
//6/15/21

#include "quadratic.h"
#include <cassert> //assert obviuosly
#include <iostream> //cout and cin
#include <cmath> //for quadratic and exponents

//standard constructor
quadratic::quadratic()
{
    a = 0;
    b = 0;
    c = 0;
}

//overloaded constructor
quadratic::quadratic(double a_input, double b_input, double c_input)
{
    a = a_input;
    b = b_input;
    c = c_input;
}

//personally I would just call the overloaded constructor, but we aren't returning objects just yet.
//Postcondition: assigns the given values to the private variables
void quadratic::reassignQuad(double a_input, double b_input, double c_input)
{
    a = a_input;
    b = b_input;
    c = c_input;
}

//Postcondition: returns an integer value of how many zeroes can be determined
int quadratic::numberOfRealZeroes()
{
    if(pow(b,2) - 4*a*c < 0) //doesn't exist when true
        return 0;
        
    if( (b + sqrt(pow(b,2)-4*a*c))/(2*a) == (b - sqrt(pow(b,2)-4*a*c))/(2*a))
        return 1; //means they both = 0
    else
        return 2; //final case has to have 2 roots and no more
}
//Postcondition: returns the double value of zeroes found through the quadratic formula
void quadratic::evaluateRealZeroes()
{
    //Methods usage -> code reusability, switch statement accounts for all 3 possible cases
    switch(numberOfRealZeroes())
    {
        case 0:
        {
            std::cout << "There are not zeroes for the given equation." << std::endl;
            break;
        }
        case 1:
        {
            std::cout << "The real zero is: (" << (b + sqrt(pow(b,2)-4*a*c))/(2*a) << ",0)" << std::endl;
            break;
        }
        case 2:
        {
            std::cout << "The real zeroes are : (" << (b + sqrt(pow(b,2)-4*a*c))/(2*a) << ",0) and/or (" << (b - sqrt(pow(b,2)-4*a*c))/(2*a) << ", 0)." << std::endl;
            break;
        }
    }
}

//Postcondition: shows all private variables
const void quadratic::queryValues()
{
    std::cout << "a: " << a << std::endl << "b: " << b << std::endl << "c: " << c << std::endl;
}
//Postcondition: evaluates with a given X
const double quadratic::evaluateExpression(double x)
{
    return a*pow(x,2) + b*x + c;
}
    
quadratic::~quadratic()
{
    std::cout << "The quadratic has been disassembled.";
}

