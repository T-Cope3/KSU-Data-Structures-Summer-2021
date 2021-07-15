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
 // Postcondition: A pattern based on the above example has been
 // printed to the ostream outs. The longest line of the pattern has
 // n stars beginning in column i of the output. For example,
// The above pattern is produced by the call pattern(cout, 8, 0).
void pattern(ostream& outs, unsigned int n, unsigned int i)
{
    if (n == 0) 
        return; //base case stops everything ofc

    pattern(outs, n/2, i); // Each upper half, has to call first

    for (int k = 0; k < i ; k++) outs << " "; // Central spacing

    for (int k = 0; k < n; k++) outs << "* "; // Central string

    outs << endl; //gaps to space everything out

    pattern(outs, n/2, i+n/2); // Each below, has to print after obviously

}

void numbers(ostream& outs, const string& prefix, unsigned int levels)
{
    string str;
    if(levels == 0)
        outs << prefix << endl;
    else
    {
        for(char i = '1'; i <= '9'; i++)
        {
            str = prefix + i + ".";
            numbers(outs, str, levels-1);
        }
    }
}