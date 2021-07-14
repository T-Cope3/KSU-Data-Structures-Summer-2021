//Troy Cope
//3305 Summer Section W01
//Prof. Shi
//7/13/21
//tried using asserts to show all the ways, crashes if failed.

//namespaces for ease of use
#include "deque.h"
using namespace main_savitch_6B;
using namespace std;

int main(int argc, char** argv)
{
    //creation and showing empty
   deque<int> d1;
   deque<int> d2;
   cout << "The size of d1 is: " << d1.size() << endl;
   assert(d1.empty());
   
   
   //showing the push to front, then to back and checking them
   d1.push_front(0);
   cout << "The size of d1 is: " << d1.size() << endl;
   assert(!d1.empty());
   
   
   d1.push_back(1);
   assert(d1.front() == 0);
   assert(d1.back() == 1);
   
   //d2 showing they're the same
   d2.push_front(0);
   d2.push_back(1);
   
  
   cout << "d1: " << d1 << endl;
   cout << "d2: " << d2 << endl;
   
   cout << endl << "Program will now fail if d1 & d2 are not equal." << endl << endl;
   assert(d1==d2);
   
   //big pushes for d1 to create a list  
   d1.push_front(0);
   d1.push_back(1);
   d1.push_front(2);
   d1.push_back(3);
   d1.push_front(4);
   d1.push_back(5);
   d1.push_front(6);
   d1.push_back(7);
   d1.push_front(8);
  
   cout << "d1 after pushes to front and back: " << d1 << endl;
  
  //narrowing it down to [0,1] for the mulitples of 2 numbers test, which should be the middle two
   d1.pop_back();
   d1.pop_back();
   d1.pop_back();
   d1.pop_back();
   d1.pop_front();
   d1.pop_front();
   d1.pop_front();
   d1.pop_front();
   d1.pop_front();
  
   cout << "d1 after being narrowed: " << d1 << endl;
   
   //testing with the mulitples of 2
   //0, 1, 2, 4, 8, 16, 32  
   d2.push_back(2);
   d2.push_back(4);
   d2.push_back(8);
   d2.push_back(16);
   d2.push_back(32);
  
   cout << "d2 containing the 2 multiples sequence: " << d2 << endl;
  
  //for loop to do the fibonacci sequence for d1
   for (int i = 0; i < 5; i++)
   {
       int placeHolder = d1.back();
       d1.push_back(placeHolder*2);
   }
  
  //should print and everything will be correct
   cout << "d1: " << d1 << endl;
   assert(d1==d2);
   cout << endl << "If this prints then the program is in fact working as intended." << endl;
}