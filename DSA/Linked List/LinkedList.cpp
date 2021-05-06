//linked list
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void print(Node *head);
Node *takeInputTail();
Node *takeInputHead();
int lengthOfLL(Node *head);
void printIthNode(Node *, int);
Node *insertAtIthPos(Node *, int, int);
Node *deleteIthNode(Node *, int);
bool isPresent(Node *head, int data);
bool findElement(Node *head, int data);
Node *middleNode(Node *head);
Node *reverseLL(Node *head);
Node *removeKthNodeFromEnd(Node *head, int k);
Node *mergeTwoLists(Node *l1, Node *l2);
Node *mergeTwoListsRecursive(Node *l1, Node *l2);
Node *sortList(Node *head);
int main()
{
    /*
    //Static Nodes
    Node n1 (1);
    Node n2 (2);

    //Dynamic Nodes
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    cout<< n1.data<<" "<<n2.data<<" "<<n3->data<<" "<<n4->data<<n5->data<<endl;

    //Traversing through head pointer
    Node *head = &n1;
    n1.next = &n2;
    n2.next = n3;
    n3->next = n4;
    n4->next = n5;
    //cout<<head->data;
    //head = head->next;
    //cout<< head->data;
    */
    // dynaically filling nodes

    Node *head = takeInputTail();
    // Node *head = takeInputHead();
    //print(head);
    //cout<<lengthOfLL(head);
    //printIthNode(head, 2);
    //print(insertAtIthPos(head, 32, 15));
    //int i;
    //cin >> i;
    //print(deleteIthNode(head, i));
    //int data;
    //cin>>data;
    /*if(findElement(head,data)){
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }*/
    //cout<<middleNode(head)->data<<endl;
    //print(reverseLL(head));
    //print(removeKthNodeFromEnd(head, 4));
    //Node *head1 = takeInputTail();
    //print(mergeTwoLists(head, head1)); // sorted lists
    //print(mergeTwoListsRecursive(head, head1)); // sorted lists
    print(sortList(head));
    return 0;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
Node *takeInputTail()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *n = new Node(data);

        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            tail = n; //tail = tail->next;
        }
        cin >> data;
    }

    return head;
}
Node *takeInputHead()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *n = new Node(data);

        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            n->next = head;
            head = n; //tail = tail->next;
        }
        cin >> data;
    }

    return head;
}
/*int lengthOfLL(Node *head)
{
    int count = 0;
    while (head) // head != NULL
    {
        count++;
        head = head->next;
    }
    return count;
}*/
int lengthOfLL(Node *head)
{
    if (head == NULL)
        return 0;
    int smallAns = lengthOfLL(head->next);
    return 1 + smallAns;
}
void printIthNode(Node *head, int index)
{
    if (head == NULL)
        cout << "-1" << endl;
    while (index--)
    {
        head = head->next;
        if (head == NULL)
        {
            cout << "-1" << endl;
            return;
        }
    }
    cout << head->data << endl;
    // O (index)
}
Node *insertAtIthPos(Node *head, int data, int index)
{
    Node *temp = head;
    Node *ithp1 = NULL;
    Node *n = new Node(data);

    if (index == 0)
    {
        temp = n;
        temp->next = head;
        head = n;
    }
    else if (index < 0)
        return head;
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                return head;
            }
        }
        ithp1 = temp->next;

        temp->next = n;
        n->next = ithp1;
    }
    return head;
}
Node *deleteIthNode(Node *head, int index)
{
    Node *temp = head;
    Node *del = NULL;
    if (index == 0 && head)
    {
        del = head;
        head = head->next;
        del->next = NULL;
        delete del;
        return head;
    }
    else if (index < 0)
        return head;
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            if (temp->next == NULL)
                return head;
            temp = temp->next;
        }
        if (temp != NULL && temp->next != NULL)
        {
            del = temp->next;
            temp->next = temp->next->next;
            del->next = NULL;
            delete del;
        }
        return head;
    }
}
bool isPresent(Node *head, int data)
{
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == data)
            return true;
        curr = curr->next;
    }
    return false;
}
bool findElement(Node *head, int data)
{
    if (head == NULL)
        return false;
    if (head->data == data)
        return true;

    return findElement(head->next, data);
}
Node *middleNode(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast) //even
        return slow->next;

    return slow; //odd
}
Node *reverseLL(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr)
    {
        Node *n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }
    return prev;
}
Node *removeKthNodeFromEnd(Node *head, int k)
{
    Node *one = head;
    Node *two = head;
    while (k--)
        two = two->next;
    if (two == NULL) // length of ll =k => delete head node
    {
        Node *del = head;
        one = one->next;
        delete del;
        return one;
    }
    while (two->next != NULL) // Last node
    {
        one = one->next;
        two = two->next;
    }
    Node *del = one->next;
    one->next = one->next->next;
    delete del;
    return head;
} // O(N) One Traversal
Node *mergeTwoLists(Node *l1, Node *l2)
{
    if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;

    Node *finalHead = NULL;
    if (l1->data < l2->data)
    {
        finalHead = l1;
        l1 = l1->next;
    }
    else
    {
        finalHead = l2;
        l2 = l2->next;
    }
    Node *p = finalHead;

    while (l1 && l2)
    {
        if (l1->data < l2->data)
        {
            p->next = l1;
            l1 = l1->next;
        }
        else
        {
            p->next = l2;
            l2 = l2->next;
        }
        p = p->next;
    }
    if (l1)
        p->next = l1;
    else
        p->next = l2;
    return finalHead;
}
Node *mergeTwoListsRecursive(Node *l1, Node *l2)
{
    if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;

    Node *newHead = NULL;
    if (l1->data < l2->data)
    {
        newHead = l1;
        newHead->next = mergeTwoListsRecursive(l1->next, l2);
    }

    else
    {
        newHead = l2;
        newHead->next = mergeTwoListsRecursive(l2->next, l1);
    }

    return newHead;
}
Node *sortList(Node *head)
{
    if (head == NULL || head->next == NULL) // 0 node || 1 node
        return head;

    // divide two list from mid
    Node *slow = head;
    Node *fast = head->next;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *n = slow->next;
    slow->next = NULL;

    Node *a = sortList(head);
    Node *b = sortList(n);

    head = mergeTwoLists(a, b);
    return head;
}