#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyLL
{
     public:
     struct node<T> *head;
     int Count;

     SinglyLL();
     void InsertFirst(T);
     void InsertLast(T);
     void Display();
     int CountNode();
};

template <class T>
SinglyLL<T>::SinglyLL()
{
    head = NULL;
    Count = 0;
}

template <class T>
void SinglyLL<T>::InsertFirst(T no)
{
    struct node<T>*newn = NULL;

    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if(head == NULL)
    {
        head = newn;
    }
    else
    {
        newn->next = head;
        head = newn;
    }
    Count++;
}

template <class T>
void SinglyLL<T>::InsertLast(T no)
{
    struct node<T>*newn = NULL;
    struct node<T>*temp = NULL;

    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if(head == NULL)
    {
        head = newn;
    }
    else
    {
        temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;

    }
    Count++;
}

template <class T>
void SinglyLL<T>::Display()
{
    cout<<"Elements from linked list"<<endl;

    while(head != NULL)
    {
        cout<<"|"<<head->data<<"|->";
        head = head->next;
    }
    cout<<endl;
}

template <class T>
int SinglyLL<T>::CountNode()
{
    return Count;
}

int main()
{
    SinglyLL <int>obj1;
    SinglyLL <float>obj2;

    obj1.InsertFirst(101);
    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.Display();
    cout<<"Number of nodes are : "<<obj1.CountNode()<<endl;

    obj2.InsertFirst(101.11);
    obj2.InsertFirst(51.11);
    obj2.InsertFirst(21.11);
    obj2.InsertFirst(11.11);

    obj2.Display();
    cout<<"Number of nodes are : "<<obj2.CountNode()<<endl;
    
    return 0;
}