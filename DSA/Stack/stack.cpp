#include <bits/stdc++.h>
using namespace std;
template<typename T>
class Stack
{
    T *arr;
    int nextIndex{0};
    int capacity;

public:
    Stack()
    {
        arr = new T[4];
        capacity = 4;
    }
    
    int size()
    {
        return nextIndex;
    }
    bool isEmpty()
    {
        return nextIndex == 0;
    }
    void push(int ele)
    {
        if(nextIndex==capacity)
        {
            T *newArr= new T[2*capacity];
            for(int i=0;i<capacity;i++)
                newArr[i]=arr[i];

            delete []arr;
            arr=newArr;
            capacity = 2*capacity;
        }
        arr[nextIndex]= ele;
        nextIndex++;
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack Empty"<<endl;
            return;
        }
        nextIndex--;
    }
    T top()
    {
        if(isEmpty())
        {
            cout<<"Stack Empty"<<endl;
            return 0;
        }

        return arr[nextIndex-1];
    }
};

int main()
{
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();

    cout<<s.size()<<endl;

    cout<<s.isEmpty()<<endl;

//Stack S2
cout<<"For Stack S2"<<endl;
    Stack<char> s2;
    for (int i = 97; i <= 104; i++)
    {
      s2.push(i);
    }
    // print the contenet of stack
    while (!s2.isEmpty())
    {
        cout<<s2.top()<<endl;
        s2.pop();
    }
    cout<<s2.size()<<endl;
    return 0;
}