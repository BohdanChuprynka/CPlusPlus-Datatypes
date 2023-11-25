#include <iostream>
#include <stack>
using namespace std;

void printStackElements(stack<int> stack) {
    while(!stack.empty()) {
        cout << stack.top() << endl;
        stack.pop();
    }
}

int main() {
        // empty, size, push, pop, top
    stack<int> numbersStack;
    numbersStack.push(1);   // adds the element to the top of the stack with the value 1.
    numbersStack.push(2);
    numbersStack.push(3);
    //numbersStack.pop();   // takes off the last element of stack
    //numbersStack.pop();
    //numbersStack.pop();

    //if(numbersStack.empty()) {
    //    cout << "Stack is empty" << endl;
    //}
    //else {
    //    cout << "Stack is not empty" << endl;    
    //}
    //cout << "Your stack size is: " << numbersStack.size() << endl;

    printStackElements(numbersStack); 
        // outputs 3, 2, 1, because we assigned 3 values, it starts from the top, outputs it,
        //  and then deletes the top and now the top is the 2, it outputs in the terminals and pops, and now the top is 1,
        // it outputs 1 and pop it. Now, there's no more integers to count.

    system("pause>0");
}