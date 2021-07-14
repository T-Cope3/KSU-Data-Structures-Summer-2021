#ifndef _DEQUE_H_
#define _DEQUE_H_

#include <iostream>
#include <cstdlib>
#include "node2.h"

using namespace main_savitch_6B;

template <class T>
class deque
{
public:
    typedef std::size_t size_type;
      
    //postcondition: empty deque has been created
    deque();
    
    // postcondition: all resouroces allocated to the deque
    //                have been deallocated
    ~deque();
    
    // postcondition: newly created deque is a copy of dq
    deque(const deque<T>& dq);
    
    // postcondition: current deque is a copy of dq 
    deque<T>& operator = (const deque<T>& dq);
    
    
    //precondition: deque is not empty
    // postcondition: reference to element at front of deque
    //                            has been returned
    T& front();
    
    // precondition: deque is not empty
    // postcondition: copy of element at front of deque
    //                            has been returned
    T front() const;
    
    // precondition: deque is not empty
    // postcondition: reference to element at front of deque
    //                            has been returned
    T& back();
    
    // precondition: deque is not empty
    // postcondition: copy of element at back of deque
    //                            has been returned
    T back() const;
    
    // precondition: none
    // postcondition: entry has been inserted at the front
    //                            of the deque
    void push_front (const T& entry);
    
    // precondition: none
    // postcondition: entry has been inserted at the back
    //                            of the deque
    void push_back (const T& entry);
    
    // precondition: deque is not empty
    // postcondition: element at front of deque has been removed
    void pop_front();
    
    // precondition: deque is not empty
    // postcondition: element at back of deque has been removed
    void pop_back();
    
    // postcondition: number of elements in deque has been returned
    size_type size() const;
    
    // postcondition: whether deque is empty has been returned
    bool empty() const;
    
    // postcondition: returned whether 2 deques are equal - equal is defined
    //                            as the deques have the same number of elements &
    //                            corresponding elements are equal
    template <class U>
    friend bool operator == (const deque<U>& dq1, const deque<U>& dq2);

    // postcondition: dq has been display from front to rear on out
    template <class U>
    friend std::ostream& operator<< (std::ostream& out, const deque<U>& dq);

private:
    size_type count;         // Total number of items in the queue
    node<T>* first;
    node<T>* last;
};



#include "deque.template"

#endif