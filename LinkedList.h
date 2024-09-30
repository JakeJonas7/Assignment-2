#ifndef LINKEDLIST_H
#include <iostream>
#include <string>
#include <fstream> 
using namespace std;


template <typename Item_Type>
class Linked_List {
private:
  struct Node {
    Item_Type data;
    Node *next;
    Node(const Item_Type& data_item, Node *next_ptr = NULL) :
      data(data_item), next(next_ptr) {}
  };

  Node* head;
  Node* tail;
  size_t num_items;

  public: 
    Linked_List() : head(NULL), tail(NULL), num_items(0) {}
    //~Linked_list();
    void push_front(const Item_Type& item);
    void push_back(const Item_Type& item);
    void pop_front();
    void pop_back();
    Item_Type front() const;
    Item_Type back() const;
    bool empty() const;
    void insert(size_t index, const Item_Type& item);
    bool remove(size_t index);
    size_t find(const Item_Type& item);

    
};



#endif 