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
            tail = n;
        }

        cin >> data;
    }
    return head;
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
Node *takeInputHead()
{
    int data;
    cin >> data;
    Node *tail = NULL;
    Node *head = NULL;

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
            head = n;
        }
        cin >> data;
    }
    return head;
}
Node *sort(Node *l1, Node *l2)
{
    if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;

    Node *newHead = NULL;
    if (l1->data < l2->data)
    {
        newHead = l1;
        newHead->next = sort(l1->next, l2);
    }
    else
    {
        newHead = l2;
        newHead->next = sort(l1, l2->next);
    }
    return newHead;
}
Node *deleteKey(Node *head, int key)
{
    if (head == NULL) // to remove [] this test case
        return head;

    // to remove[6,6,6,6] for 6 or [6,6,7,8] for 6
    while (head->data == key && head)
        head = head->next;

    Node *temp = head;

    while (temp->next)
    {
        if (temp->next->data == key)
            temp->next = temp->next->next;
        else
            temp = temp->next;
    }

    return head;
}
Node *removeEle(Node *head, int key)
{
    if (!head)
        return head;

    // Insert a dummy node to prime things so that we can maintain a
    // reference to the previous node in the loop
    Node *current = new Node(key + 1);
    current->next = head;
    head = current;
    while (current && current->next)
    {
        if (current->next->data == key)
        {
            current->next = current->next->next;
        }
        else
        {
            current = current->next;
        }
    }

    return head->next;
}
Node *revLL(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;
    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome(Node *head)
{

    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;

    if (head == NULL || head->next == NULL)
        return true;

    Node *fast = head->next;
    while (fast && fast->next)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        fast = fast->next->next;
    }
    if (fast == NULL)
        curr = curr->next;
    else
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    while (curr && prev)
    {
        if (curr->data != prev->data)
            return false;
        curr = curr->next;
        prev = prev->next;
    }
    return true;
}
int lengthOfLL(Node *head)
{
    int count = 0;
    while (head)
    {
        head = head->next;
        count++;
    }
    return count;
}
Node *deleteNodeFromBack(Node *head, int n)
{
    int len = lengthOfLL(head);

    if (n == len) // For [1 2 3], n=3
        return head->next;

    Node *temp = head;
    int steps = len - n - 1;
    while (steps--)
    {
        temp = temp->next;
    }
    Node *node = temp->next->next;
    temp->next = node;
    return head;
}
int getDecimalValue(Node *head)
{
    head = reverseLL(head);
    int ans = 0, i = 0;
    while (head)
    {
        ans += pow(2, i) * head->data;
        i++;
        head = head->next;
    }
    return ans;
}
Node *deleteDuplicates(Node *head)
{
    Node *dummy = new Node(0);
    dummy->next = head;
    Node *prev = dummy;

    while (head)
    {
        if (head->next && head->data == head->next->data)
        {
            //skip the nodes whose values are equal to heead.
            while (head->next && head->data == head->next->data)
            {
                head = head->next;
            }
            prev->next = head->next;
        }
        else
        {
            prev = prev->next;
        }
        head = head->next;
    }
    return dummy->next;
}
Node *rotate(Node *head, int k)
{
    if (!head)
        return NULL;
    Node *temp = head->next;

    int length = lengthOfLL(head);
    if (k > length)
        k = (k % length);
    while (k--)
    {
        while (temp)
        {
            swap(head->data, temp->data);
            temp = temp->next;
        }
        temp = head;
    }
    return head;
}
int main()
{
    // Node *head = takeInputTail();
    // int k;
    // cin >> k;
    // print(rotate(head, k));

 int num = 8;
 int bitNo{-1};
 int testbit = 1;
 for (int i = 0; i < 32; i++)
 {
     if(num&testbit)
     {
         bitNo = i;
         break;
     }
        testbit=testbit<<1;
 }
 if(bitNo)
 cout<<bitNo;
 else cout<<"No is empty";


    return 0;
}
