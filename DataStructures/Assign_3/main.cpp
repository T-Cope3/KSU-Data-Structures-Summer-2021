//Troy Cope
//3305 Summer Section W01
//Prof. Yong
//6/15/21

#include <stdio.h>
#include "quadratic.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    //using 2 objects to demonstrate different cases
	quadratic q;
    quadratic overloaded(1,-2,3); //should not exist and will show that
    double user_a, user_b, user_c, user_x;
    
    //input
    cout << "Please enter a,b,c in that order pressing enter after each individual value." << endl;
    cin >> user_a;
    cin >> user_b;
    cin >> user_c;
    
    //testing methods
    //check .cpp for explanation, not provided in video but necessary in my opinion
    q.reassignQuad(user_a, user_b, user_c);
    
    cout << "Number of zeroes: " << q.numberOfRealZeroes() << endl;
    cout << "Number of zeroes: " << overloaded.numberOfRealZeroes() << endl;
    
    q.evaluateRealZeroes();
    overloaded.evaluateRealZeroes();
    
    q.queryValues();
    overloaded.queryValues();
    
    cout << "Please give a value for x!" << endl;
    cin >> user_x;
    cout << q.evaluateExpression(user_x) << endl;
    
    cout << "Please give a value for x!" << endl;
    cin >> user_x;
    cout << overloaded.evaluateExpression(user_x) << endl;
    
}
