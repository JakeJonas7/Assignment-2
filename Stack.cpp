#include "Stack.h"

using namespace std;

void Stack::push(int value) {
  stack.push_back(value);
}

void Stack::pop() {
  stack.pop_back();
}
bool Stack::empty() const {
  return stack.empty();
}

int Stack::top() const {
  return stack.back();
}

double Stack::average() const {
  if (stack.empty()) {
    return 0;
  }
  double sum = 0;
  for (int i = 0; i < stack.size(); i++) {
    sum += stack[i];
  }
  return sum / stack.size();
}
