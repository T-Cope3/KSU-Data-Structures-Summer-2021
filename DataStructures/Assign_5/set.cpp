//Troy Cope
//3305 Summer Section W01
//Prof. Shi
//7/6/21
//This time I tried using to reuse a lot more methods
//I assume that is how actual programmers would do it

#include "set.h"
#include <cassert>
#include <iostream>

using namespace std;

//default constructor
set::set()
{
     CAPACITY = 30;
     used = 0;
     data = new value_type[CAPACITY];
}

//copy constructor, uses the newly defined ='s operator
set::set(const set& source)
{
    *this = source;
}

//Precondition: The size of the set is smaller than capacity
//Postcondition: Element is inserted at the end of the set
void set::set_insert(const value_type& target)
{
    assert(size() < CAPACITY);
    
    data[used] = target;    
    used++;
}

//Precondition: N/A
//Postcondition: Method deletes the element by replacing it with the last element
void set::set_delete(const value_type& target)
{
     //defined later, class function used a lot
     size_type location = find(target);
     
     if (location >= 0)
     {
         //have to reroute the one behind to remove the proper index
          data[location] = data[used - 1];
          used--;
     }
}

//very standard
//Postcondition: Returns the current size of the set
set::size_type set::size() const
{
     return used;
}

//Precondition: Set exists
//Postcondition: Removes set from memory and local variables disappear
set::~set()
{
    delete data;
    used = NULL;
    CAPACITY = NULL;
}

//private help function used twice
//Precondition: N/A
//Postcondition: Method to find the location of the element in the set, returns 0 if not found
set::size_type set::find(const value_type& target) const
{
     size_type location = 0;

    //loop until found or end
     while (location < used && data[location] != target)
          location++;

     return location;

}

//Precondition: N/A
//Postcondition: Returns the # of times a target value is found
set::size_type set::set_count(const value_type& target) const
{
    size_type counter = 0;
    
    //loops through all elements and checks if the value is given
    for(size_type i = 0; i < size(); i++)
    {
        if(data[i] == target)
            counter++;
    }
   
    return counter;
}

//Precondition: N/A
//Postcondition: returns true if target is in array, false otherwise
bool set::set_contains(const value_type& target) const
{
     //returns true if anything but 0
     return find(target) < used;
}

//Precondition: N/A
//Postcondition: Returns a set with s1 and then s2 back to back
set set_union(const set& s1, const set& s2)
{
     set result;
    // a little note I took to match the size_type's when comparing them
    //simple reuse of inserting at the end of a fresh set twice
     for (set::size_type i = 0; i < s1.size(); i++)
          result.set_insert(s1.data[i]);

     for (set::size_type i = 0; i < s2.size(); i++)
          result.set_insert(s2.data[i]);

     return result;
}

//Precondition: both sets exist
//Postcondition: returns true if target is in array, false otherwise
set set_intersection(const set& s1, const set& s2)
{
     set result;

     //loop through one of the sets
     for (set::size_type i = 0; i < s1.size(); i++)
     {
          //compare set1's index value if it's in array to find intersection and give to new set
          if (s2.set_contains(s1.data[i]))
              result.set_insert(s1.data[i]);
     }
     
     return result;
}

//Precondition: N/A
//Postcondition: basically the inverse of the set_intersection
set set_complement(const set& s1, const set& s2)
{
     set result;

     for (set::size_type i = 0; i < s2.size(); i++)
     {
         //literal inverse of intersection
          if (!(s1.set_contains(s2.data[i])))
              result.set_insert(s2.data[i]);
     }

     return result;
}

//Precondition: N/A
//Postcondition: override the << operator to print the sets properly
std::ostream& operator<< (std::ostream& output, const set& s)
{
     //throwing brackets around data and commas between
     output << "[";
     
     for (set::size_type i = 0; i < s.size(); i++)
     {
          output << s.data[i] << "";
          //breaks when last data is put in with a space after so that the commas end
          //remember that loop runs n-1, size is n+1 so need -2.
          if(!(i > s.size()-2))
            output << ", ";              
     }
     
     output << "]";

     return output;
}

//Precondition: N/A
//Postcondition: Assigns a copy of the set to a new set
//should return so ='s can be chained
set& set::operator= (const set& source)
{
    CAPACITY = 30;
    used = source.used;
    data = new value_type[CAPACITY];
    
     for (set::size_type i = 0; i < source.size(); i++)
          data[i] = source.data[i];
          
    return *this;
}