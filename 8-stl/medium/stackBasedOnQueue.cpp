#include <iostream>
using namespace std;

#include <queue>
#include <stack>
// struct of out stack using queue
struct ourStack
{
    queue<int> q;
    void push(int newItem)
    {
        // implement this function using queue
        // to do this task you should shift all queue items right and put the new item in the first index in the queue

        // shift the queue items right
        int n = q.size();
        q.push(newItem);
        for (int i = 0; i < n; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    void pop()
    {
        if (!q.empty())
            q.pop();
    }

    int top()
    {
        return q.front();
    }
    bool empty()
    {
        return q.empty();
    }
};

int main()
{
    ourStack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
