#include <iostream>
#include "..\Array\array.h"
#include "stack.h"
using namespace std;

int main() {
    Stack<int> stack;

    stack.push(5);
    stack.push(10);
    stack.push(15);

    cout << "Stack contents: ";
    stack.print();

    cout << "Top element: " << stack.top() << endl;

    stack.pop();
    cout << "Stack after pop: ";
    stack.print();

    stack.clear();
    cout << "Stack after clear: ";
    stack.print();


    return 0;
}