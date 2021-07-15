//Troy Cope
//3305 Summer Section W01
//Prof. Shi
//6/22/21


#include "sequence1.h"
//I opted to use if statements to account for assert
//I didn't like the program ending every time
//#include <cassert>
#include <iostream>

using namespace main_savitch_3;

// CONSTRUCTOR for the sequence class:
//   sequence( )
//     Postcondition: The sequence has been initialized as an empty sequence.
    //Initializates the sequence object
   sequence::sequence()
   {
       used = 0;
       current_index = 0;
   }
   
//   void start( )
//     Postcondition: The first item on the sequence becomes the current item
//     (but if the sequence is empty, then there is no current item).
   void sequence::start()
   {
       //if in use, restart index
       if (used > 0)
       {
           current_index = 0;
       }
       else
       {
           //this could be assign to 0 as well
           current_index = used;
       }
   }
   
//   void advance( )
//     Precondition: is_item returns true.
//     Postcondition: If the current item was already the last item in the
//     sequence, then there is no longer any current item. Otherwise, the new
//     current item is the item immediately after the original current item.

//increase the index if the sequence exists
void sequence::advance()
   {
       //check and increase
       if (is_item())
       {
           current_index++;
       }
       else
       {
           std::cout << "There is no current item." << std::endl;
       }
   }
   
//   void insert(const value_type& entry)
//     Precondition: size( ) < CAPACITY.
//     Postcondition: A new copy of entry has been inserted in the sequence
//     before the current item. If there was no current item, then the new entry 
//     has been inserted at the front of the sequence. In either case, the newly
//     inserted item is now the current item of the sequence.

//this and attach follow the same first section, refer to attach for notes
//secondary objective is to put to front
   void sequence::insert(const value_type& entry)
   {
       if (size() < CAPACITY)
       {
           if (!is_item())
           {
               start();
           }
            //shift sequence over
           for (size_t i = used; i > current_index; i--)
           {
               data[i] = data[i-1];
           }
            //insert as index after shifting
            //no increase needed of index, the data in place gets shifted
           data[current_index] = entry;
            //increase size while maintaining the index as the new entry
           used++;
       }
       else
       {
           std::cout << "Size exceeds capacity! Please use another action." << std::endl;
       }
   }
   
//   void attach(const value_type& entry)
//     Precondition: size( ) < CAPACITY.
//     Postcondition: A new copy of entry has been inserted in the sequence after
//     the current item. If there was no current item, then the new entry has 
//     been attached to the end of the sequence. In either case, the newly
//     inserted item is now the current item of the sequence.
   void sequence::attach(const value_type& entry)
   {
       if (size() < CAPACITY)
       {

           if (is_item())
           {
               //have to extend the end of the sequence to make room for the new data
               //does not override this way
               for (size_t i = used; i > current_index + 1; i--)
               {
                   data[i] = data[i-1];
               }
            //setting the index after and then increasing to make the new item current_index
               data[current_index + 1] = entry;
               current_index++;
               used++;
           }
           else
           {
               //only happens when index is the end / doesn't exist
               data[used] = entry;
               current_index = used;
               used++;
           }
       }
       else
       {
           std::cout << "Cannot attach! No more compactity!" << std::endl;
       }
   }
   
//   void remove_current( )
//     Precondition: is_item returns true.
//     Postcondition: The current item has been removed from the sequence, and the
//     item after this (if there is one) is now the new current item.
   void sequence::remove_current()
   {
       if (is_item())
       {
        //shifts all data back a place and decreases index
        //the opposite trick of inserting
           for (size_t i = current_index; i < used; i++)
           {
               data[i] = data[i+1];
           }

           used--;
       }
       else
       {
           std::cout << "There is no current item. Please adjust the index or add to the sequence." << std::endl;
       }
   }
   
//   size_type size( ) const
//     Postcondition: The return value is the number of items in the sequence.
   sequence::size_type sequence::size() const
   {
       return used;
   }
   
//   bool is_item( ) const
//     Postcondition: A true return value indicates that there is a valid
//     "current" item that may be retrieved by activating the current
//     member function (listed below). A false return value indicates that
//     there is no valid current item.

//this is most of the functionality, so I made it as direct as possible
    bool sequence::is_item() const
   {
       //readability is important
       //size not zero, index positive or 0, and within the range of size
       return ((used != 0) && (current_index >= 0) && (current_index < used));
   }
   
//   value_type current( ) const
//     Precondition: is_item( ) returns true.
//     Postcondition: The item returned is the current item in the sequence.
   sequence::value_type sequence::current() const
   {
       //if within parameters, return value
       if (is_item())
       {
           return data[current_index];
       }
       else
       {
           std::cout << "No current item could be found." << std::endl;
       }
   }