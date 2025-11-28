#include <iostream>
using namespace std;

class Stack
{
    int *ptr;
    int size;

public:
    int top = -1;
    Stack(int n)
    {
        ptr = new int(n);
        size = n;
    }
    void push(int x)
    {
        if (top < size - 1)
        {
            top++;
            ptr[top] = x;
        }
        else
            cout << "Stack is full" << endl;
    }
    int pop()
    {
        if (top >= 0)
        {
            int x = top;
            top--;
            return ptr[x];
        }
        else
            cout << "stack is empty" << endl;
    }
    int Top()
    {
        return ptr[top];
    }
};

int main()
{
    cout << "Give the size of stck: ";
    int n;
    cin >> n;
    Stack st(n);
    int m;
    cout << "How many element do u want to insert: ";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cout << "Enter the value: ";
        cin >> x;
        st.push(x);
    }

    for (int i = st.top; i >= 0; i--)
        cout << st.pop() << " ";
}
