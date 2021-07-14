//Troy Cope
//3305 Summer Section W01
//Prof. Shi
//6/29/21
//Most problems solved on pen and paper then coded.


#include "list.h"
#include "utility.h"
#include <cassert>
#include <cstdlib>
#include <iostream>

using namespace std;

list tail(list lst) // Returns the list excluding the head 
{      
	assert(!list_is_empty(lst)); // Checks to see if the list is not empty
	return lst->link(); // Returns the list that excludes the original head
}

value_type head(list lst) // Returns the first element of the list
{
	assert(!list_is_empty(lst)); // Checks to see if the list is not empty
	return (lst->data()); // Returns the data field of the head node
}

bool list_is_empty(list lst) // Checks to see if the list is empty
{
	return (lst == NULL); // Returns true if the head node is NULL
}

list cons(value_type val, const list lst) // Returns a list with 'val' followed by the list 
{
	node* newList = new node(val, lst); // Creates a node pointer puts val in front of the original list
	return newList; // Returns newList
}

list append(const list lst, value_type val) // Returns a list that contains list followed by 'val'
{
	if (list_is_empty(lst)) // Checks if the list is empty
	{
		node* newList = cons(val, NULL); // Creates a node pointer that only contains node with val
		return newList; // Returns newList
	}
	else
	{
		//node* newList = cons(head(lst), append(tail(lst), val)); // Moves val to the end of the linked list through recursion
		//return newList; // Returns newList
        
        //node* newList = copy(lst);
        node* newList;
        node* tailNode;
        
        list_copy(lst,newList,tailNode);
        
        //cout<<"dfa"<<endl;
        node* tmpList = newList;
        while (!list_is_empty(tmpList->link()))
        {
            tmpList = tmpList->link();
        }
        
        //cout<<"dfa"<<endl;
        tmpList->set_link(new node(val,NULL));
        //print_list(newList);
        return newList;
        
	}
}
    
    /**
 *   Return a new list that consists of the two lists combined
 *   into one list.
 *   It is acceptable to use part or all of one or both argument lists provided that
 *   no change is made to them.
 */
 
 
list append(const list lst_first, const list lst_second)
{
    if (list_is_empty(lst_first)) // Checks if the list is empty
	{ // Creates a node pointer that only contains node with val
		return lst_second; // Returns newList
	}
    
    if (list_is_empty(lst_second)) // Checks if the list is empty
	{ // Creates a node pointer that only contains node with val
		return lst_first; // Returns newList
	}
    
	else
	{
		//node* newList = cons(head(lst), append(tail(lst), val)); // Moves val to the end of the linked list through recursion
		//return newList; // Returns newList
        
        //node* newList = copy(lst);
        node* newList;
        node* tailNode;
        
        list_copy(lst_first,newList,tailNode);
        /*
        //cout<<"dfa"<<endl;
        node* tmpList = newList;
        while (!list_is_empty(tmpList->link()))
        {
            tmpList = tmpList->link();
        }
        */
        //everything above same as the sample append
        
        //repeat a copy and then begin the work
        node* anotherList;
        node* anotherTail;
        list_copy(lst_second,anotherList,anotherTail);
        
        node* anotherTmpList = anotherList;
        
        //picks up at beginning of second list
        while(!list_is_empty(anotherTmpList->link()))
        {
            //starts tacking onto the end and shifting with list
            tailNode->set_link(anotherTmpList);
            tailNode = tailNode->link();
            //moves across the list
            anotherTmpList = anotherTmpList->link();
        }
        
        return newList;
	} 
}

/**
 * Create and return a new list that contains the elements of head_ptr that
 * are not equal to val.
 */
list remove_all_of(const list lst, value_type val)
{
    node* newList; //head node
    node* tailNode; //the last node
    list_copy(lst,newList,tailNode);
    
    node* currentNode = newList;
    
    //pushes the head forwards until the value isn't there
    while(newList->data() == val)
        newList->set_link(newList->link());
    
    //have to do double skips to eliminate the values
     while (!list_is_empty(currentNode->link()))
    {
        if (currentNode->link()->data() == val)
        {
            currentNode->set_link(currentNode->link()->link());
        }
        else
        {
            currentNode = currentNode->link();
        }
    }
    return newList;
}


/**
 *  Create a new list with the same values as the list pointed to by
 *  head_ptr but omitting the last element.
 *
 *  precondition:  the list pointed to by head_ptr is not empty.
 */
list remove_last(const list lst)
{
    assert(!list_is_empty(lst)); 
    
    node* newList;
    node* tailNode;
    size_t currentIndex = 0;
    
    //creating a temporary list to be returned after modification
    list_copy(lst,newList,tailNode);
    
    //cout<<"dfa"<<endl;
    node* tmpList = newList;
    
    //grabs index second to last to cut off last index with NULL.
    //can also be done with list_locate I believe but this was the first thing to come to mind
    while(currentIndex < list_length(lst)-2)
    {
        currentIndex++;
        tmpList = tmpList->link();
    }
    
    tmpList->set_link(NULL);
    
    
    //finding last pointer
    return newList;
}

/**
 * Return the last value in the list pointed to by head_ptr.

 *  precondition:  the list pointed to by head_ptr is not empty.
 */
 
 
value_type last(const list lst)
{
    assert(!list_is_empty(lst)); 
    
    //pulls the node pointer from last element through locate
    //then returns the data value
    return list_locate(lst, list_length(lst))->data();
}

bool equals(const list list1, const list list2)
{
    //temp because both inputs are constant
    node* temp1 = list1;
    node* temp2 = list2;
    
    //needs to be and so that if it pulls null on either it goes to false
    while (!list_is_empty(temp1->link()) && !list_is_empty(temp2->link()))
    {
        //comparing and looping through lists making sure values are the same
        if(temp1->data() == temp2->data())
        {
            temp1 = temp1->link();
            temp2 = temp2->link();
        }
        else
            return false;
    }
    
    //the case of one ending early is not covered, ensuring end points
    if(list_is_empty(temp1->link()) && list_is_empty(temp2->link()))
        return true;
    else
        return false;
}