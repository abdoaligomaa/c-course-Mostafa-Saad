#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reversQueue(queue<int> &q)
{
    // this stack to store the queue items
    stack<int> s;

    // how to use iterator in c++
    // auto it = q.begin();
    // while (it != myQueue.end())
    // {
    //     s.push(*it)
    // }

    // iterate on the queue and put its value into stack
    while (!q.empty())
    {
        // put the first item of queue in the stack
        s.push(q.front());

        // remove the front of the queue
        q.pop();
    }

    // put the stack into the the queue and remove the stack
    while (!s.empty())
    {
        // put the first item of queue in the stack
        q.push(s.top());

        // remove the front of the queue
        s.pop();
    }
}
void printQueue(queue<int> q)
{
    std::cout << "Queue elements (without iterator): ";
    while (!q.empty())
    {
        // Get the front element
        cout << q.front() << " ";

        q.pop(); // Remove the front element
    }
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    // excute the function on the queue
    reversQueue(q);
    printQueue(q);
    return 0;
}