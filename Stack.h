#ifndef STACK_H


#include <vector>

using namespace std;

class Stack {
private:
    vector<int> stack;

public: 
    void push(int value);
    void pop();
    bool empty() const;
    int top() const;
    double average() const;
};
#endif


