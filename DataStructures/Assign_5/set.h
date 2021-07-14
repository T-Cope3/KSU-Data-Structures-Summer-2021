//Troy Cope
//3305 Summer Section W01
//Prof. Shi
//7/6/21
#ifndef _SET_H_
#define _SET_H_

#include <cstdlib>
#include <iostream>

class set
{

public:

    typedef int value_type;

    typedef std::size_t size_type;

    size_type CAPACITY;
    
    // postcondition: empty set has been created    
    //default constructor
    set();
    
    //copy constructor
    set(const set& source);

    // precondition: if entry is not in the set, then //size() < CAPACITY
    // postcondition: entry is in the set
    void set_insert(const value_type& target);

    // postcondition: entry is not in the set
    void set_delete(const value_type& target);

    // postcondition: number of elements in the set has //been returned
    size_type size() const;

    // whether entry is in the set has been returned
    bool set_contains(const value_type& target) const;
    
    //finds the # of target element
    size_type set_count(const value_type& target) const;

    // postcondition: union of s1 & s2 has been returned
    friend set set_union(const set& s1, const set& s2);

    // postcondition: intersection of si & s2 has been //returned
    friend set set_intersection(const set& s1, const set& s2);

    // postcondition: set consisting of all elements in s1 //that are not in s2
         // has been returned
    friend set set_complement(const set& s1, const set& s2);

    // postcondition: contents of s have been set to //output
    friend std::ostream& operator<< (std::ostream& output, const set& s);
    
    //supposed to return itself to be chained, how I'd code the copy constructor basically
    set& operator= (const set& source);

     //destructor
     ~set();

private:
     // postcondition: location of entry has been returned
     //-1 has been returned in entry is not in the set
     //this will be used as a help function for most of the methods
     size_type find(const value_type& target) const;

     //Just now watching the video. I noted this after everything was done. I should have used *node here. 
     //Instead I am working with an array rather than a linked list of nodes.
     value_type* data;

     size_type used;
};
#endif // SET_H