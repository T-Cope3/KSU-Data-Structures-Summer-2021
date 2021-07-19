//Troy Cope
//3305 Summer Section W01
//Prof. Shi
//7/19/21

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

void numbers(ostream& outs, const string& prefix, unsigned int levels);

void pattern(ostream& outs, unsigned int n, unsigned int i);


int main(int argc, char **argv)
{
	numbers(cout, "THERBLIG", 2);
    
    cout << endl << endl << endl;
    
    pattern(cout, 8, 0);
}

// A loop to print exactly i spaces:
 //for (k = 0; k < i; k++) outs << ' ';
 // A loop to print n asterisks, each one followed by a space:
// for (k = 0; k < n; k++) outs << "* ";

 // Precondition: n is a power of 2 greater than zero.
 // Postcondition: A pattern based on the above example has been printed to the ostream outs. The longest line of the pattern has
 // n stars beginning in column i of the output. For example, the above pattern is produced by the call pattern(cout, 8, 0).
void pattern(ostream& outs, unsigned int n, unsigned int i)
{
    //base case stops everything of course
    if (n == 0) 
        return; 

    //Each upper half, has to call first
    pattern(outs, n/2, i); 

    //spaces always come before stars
    for (int k = 0; k < i ; k++) outs << " ";
    
    //prints stars always with a space between them
    for (int k = 0; k < n; k++) outs << "* ";

    //gaps to space everything out
    outs << endl; 

    // Each below, has to print after each midsection obviously
    pattern(outs, n/2, i+n/2); 

}

//Precondition: levels is indeed an integer and prefix exists
//Postcondition: prints out a series of numbers 0-9 seprated by decimals for each level
void numbers(ostream& outs, const string& prefix, unsigned int levels)
{
    //uses str and checks if no levels are applied
    string str;
    if(levels == 0)
        outs << prefix << endl;
        
    //then runs a loop for each case, recursiveley until it ends
    else
    {
        for(char i = '1'; i <= '9'; i++)
        {
            str = prefix + i + ".";
            numbers(outs, str, levels-1);
        }
    }
}