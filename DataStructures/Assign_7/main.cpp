#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

void numbers(ostream& outs, const string& prefix, unsigned int levels);

void pattern(ostream& outs, unsigned int n, unsigned int i);
 // Precondition: n is a power of 2 greater than zero.
 // Postcondition: A pattern based on the above example has been
 // printed to the ostream outs. The longest line of the pattern has
 // n stars beginning in column i of the output. For example,
// The above pattern is produced by the call pattern(cout, 8, 0).

int main(int argc, char **argv)
{
	numbers(cout, "THERBLIG", 2);
}


void pattern(ostream& outs, unsigned int n, unsigned int i)
{
    
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