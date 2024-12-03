#include <iostream>
#include <stack>
#include <queue>


void moveQueueToStack(std::queue<int>& Q, std::stack<int>& S)
{
	while (!Q.empty()) 
	{
        S.push(Q.front());
        Q.pop();
    }
}
// I create moveQueueToStack function and while loop. This loop will transfer the queue to the stack
void print(std::stack<int>& S)
{
	while(!S.empty())
	{
	std::cout<<S.top()<<" ";
	S.pop();
	}	
}
//I made a print function that prints the stack.

int main()
{
	std::queue<int> myQueue;
    std::stack<int> myStack;
    
    myQueue.push(5);
    myQueue.push(6);
    myQueue.push(7);
    myQueue.push(8);
    myQueue.pop();
    
    moveQueueToStack(myQueue,myStack);
	
    print(myStack);
    std::cout<<std::endl; 
	   
    return 0;
}
//I called and named queue and stack functions. I entered values 5,6,7,8 into myQueue and deleted one value.
//I called the moveQueueToStack function and caused the values in the queue to go onto the stack.I printed the elements in myStack
