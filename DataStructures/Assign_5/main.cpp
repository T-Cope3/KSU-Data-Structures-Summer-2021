//Troy Cope
//3305 Summer Section W01
//Prof. Shi
//7/6/21
#include <stdio.h>
#include "set.h"

using namespace std;

int main(int argc, char **argv)
{
    //showing constructors and insert
	set s1, s2, s4, s_union, s_intersection, s_complement;
    
    //assigning values
    for(int i = 0; i < 10; i++)
    {
        s1.set_insert(i);
    }
    
    //assigning values
    for(int i = 6; i < 20; i++)
    {
        s2.set_insert(i);
    }
    
    //testing each method that was defined with ample printing to show them all.
    cout << "Values of s1: " << s1 << endl;
    cout << "Values of s2: " << s2 << endl;
    
    set s3(s1);
    cout << "s3 after copy constructor of s1: " << s3 << endl;
    
    s3.set_delete(5);
    cout << "s3 after deleting 5" << s3 << endl;
    
    s3.set_insert(6);
    cout << "s3 after inserting 6: " << s3 << endl;
    cout << "Count of 6's in s3: " << s3.set_count(6) << endl;
    cout << "Size of s3: " << s3.size() << endl;
    cout << "s3 containing 20: " << s3.set_contains(20) << endl;
    cout << "s3 containing 6: " << s3.set_contains(6) << endl;
    
    s4 = s3;
    cout << "Value of s4 after = ing s3: " << s4 << endl;
    
    s_union = set_union(s1,s2);
    s_intersection = set_intersection(s1,s2);
    s_complement = set_complement(s1,s2);
    
    cout << "Union of s1 and s3: " << s_union << endl;
    cout << "Intersection of s1 and s2: " << s_intersection << endl;
    cout << "Compliment of s1 and s2: " << s_complement << endl;
    
    //deconstructors will be automatically called
}
