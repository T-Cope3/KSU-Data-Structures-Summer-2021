#include <stdio.h>
#include <iostream>

using namespace std;

void exercise3(int n);

int main(int argc, char **argv)
{
	exercise3(3);
}

void exercise3(int n)
{
    cout << n << endl;
    if(n>1)
        exercise3(n-1);
        
    cout << n << endl;
}
