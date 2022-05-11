// C++ program to sort a stack using an
// auxiliary stack.
#include <bits/stdc++.h>
using namespace std;
 
// This function return the sorted stack
stack<int> sortStack(stack<int> &input)
{
    stack<int> tmpStack;
 
    while (!input.empty())
    {
        // pop out the first element
        int tmp = input.top();
        input.pop();
 
        // while temporary stack is not empty and top
        // of stack is greater than temp
        while (!tmpStack.empty() && tmpStack.top() > tmp)
        {
            // pop from temporary stack and push
            // it to the input stack
            input.push(tmpStack.top());
            tmpStack.pop();
        }
 
        // push temp in temporary of stack
        tmpStack.push(tmp);
    }
 
    return tmpStack;
}
 
// main function
int main()
{
    stack<int> input;
    input.push(1);
    input.push(0);
    input.push(2);
    input.push(3);
    input.push(-1);
    input.push(-2);
 
    // This is the temporary stack
    stack<int> tmpStack = sortStack(input);
    cout << "Sorted numbers are:\n";
 
    while (!tmpStack.empty())
    {
        cout << tmpStack.top()<< " ";
        tmpStack.pop();
    }
}