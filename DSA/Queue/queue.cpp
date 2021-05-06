#include <bits/stdc++.h>
using namespace std;
template<typename T>
class Queue
{
private:
    T *arr;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;
public:
    Queue()
    {
        capacity = 5;
        arr = new T[5];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
    }
    Queue(int cap)
    {
        capacity = cap;
        arr = new T[capacity];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
    }
    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size==0;
    }
    void push(T ele)
    {
        if(size==capacity)
        {
            cout<<"Queue full"<<endl;
            return;
        }
        arr[nextIndex] = ele;
        nextIndex= (nextIndex+1)%capacity;
        if(firstIndex == -1)
        {
            firstIndex = 0;
        }
        size++;
    }
    T front()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return 0;
        }
        return arr[firstIndex];
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
        }
        firstIndex++;
        size--;
    }
};
int main()
{
    cout<<"hi";
    return 0;
}