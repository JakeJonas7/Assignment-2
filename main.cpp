
#include "Stack.h" 
#include "LinkedList.h"
using namespace std;

int main() {
   //Q1 Solution
   Linked_List<int> list;
   list.push_back(100);
   list.push_back(200);
   list.push_back(300);
   list.push_front(0);
   list.push_front(-100);
   list.insert(2,150);

   cout<<"After modifications, front of the list is: "<<list.front()<<endl;
   cout<<"After modifications, back of the list is: "<<list.back()<<endl;

   list.pop_front();
   list.pop_front();
   list.pop_back();

   cout<<"Front of list after popping two elements from front: "<<list.front()<<endl;
   cout<<"Back of list after popping two elements from back: "<<list.back()<<endl;
   
   //Q2 Solution
   Stack stack;
   stack.push(100);
   stack.push(200);
   stack.push(300);
   stack.push(400);
   cout<<"Average of the stack is: "<<stack.average()<<endl;
   cout<<"Top of the stack is: "<<stack.top()<<endl;
   cout<<"Average of the stack is: "<<stack.average()<<endl;
   stack.pop();
   stack.pop();
   cout<<"Top of the stack after popping two elements is: "<<stack.top()<<endl;
   cout<<"Average of the stack after popping two elements is: "<<stack.average()<<endl;
   return 0;
   
   
}



