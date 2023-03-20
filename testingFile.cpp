#include <iostream>
#include <queue>
using namespace std;

// function to print the queue
void printQueue(queue<int> &q)
{
    cout<<"the queue items are : ";
    while (! q.empty())
    {
        cout<<q.front()<<" ",
        q.pop();
    }
}
int main()
{
    queue<int>q;
    q.push(10);
    q.push(10);
    q.push(12);
    q.push(15);
    printQueue(q);

    return 0;
}