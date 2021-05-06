
#include <bits/stdc++.h>
using namespace std;
template<typename T>
class Node
{
public:
    T data;
    Node<T> *next;

    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
};
template<typename T>
class Stack
{
private:
    int size;
    Node<T> *head;

public:
    Stack()
    {
        head = NULL;
        size = 0;
    }

    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return (size == 0);
    }
    void push(T ele)
    {
        Node<T> *n = new Node<T>(ele);
        n->next = head;
        head = n;
        size++;
    }
    T top()
    {
        return head->data;
    }
    void pop()
    {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        size--;
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

    cout<<s.getSize()<<endl;

    cout<<s.isEmpty()<<endl;
    return 0;
}