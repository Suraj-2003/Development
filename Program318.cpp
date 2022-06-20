#include<iostream>
using namespace std;
// Generic singly Linear Linked List
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
       void InsertAtPos(T,int);
       void DeleteFirst();
       void DeleteLast();
       void DeleteAtPos(int);
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
    struct node<T> *newn = NULL;

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
    struct node<T> *newn = NULL;
    struct node<T> *temp = NULL;

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
void SinglyLL<T>::InsertAtPos(T no,int pos)
{
    if((pos <= 0) && (pos >= Count+1))
    {
        return;
    }
    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == Count+1)
    {
        InsertLast(no);
    }
    else
    {
      
      struct node<T> *newn = NULL;
      struct node<T> *temp = head;       
      
       newn = new node<T>;

       newn->data = no;
       newn->next = NULL;

       for(int i = 1; i < pos-1; i++)
       {
             temp = temp->next;
       }
       newn->next = temp->next;
       temp->next = newn;
    }
    Count++;
}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
    struct node<T> *temp = NULL;

    if(head == NULL)
    {
        return;
    }
   else if((head)->next == NULL)
    {
        delete head;
    }
    else
    {
        temp = head;
        head = temp->next;
        delete temp;
        temp = NULL;
    }
    Count--;
}

template <class T>
void SinglyLL<T>::DeleteLast()
{
    struct node<T> *temp = NULL;

    if(head == NULL)
    {
        return;
    }
    if((head)->next == NULL)
    {
        delete head;
    }
    else
    {
        temp = head;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    Count--;
}

template <class T>
void SinglyLL<T>::DeleteAtPos(int pos)
{
    if((pos <= 0) && (pos >= Count))
    {
        return;
    }
    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == Count)
    {
        DeleteLast();
    }
    else
    {
       struct node<T> *temp = head;       
       struct node<T> *temp2 = head;       
      
       for(int i = 1; i < pos-1; i++)
       {
             temp = temp->next;
            
       }
       temp2 = temp->next;
       temp->next = temp->next->next;
       delete temp2;
    }

    Count--;
}

template <class T>
void SinglyLL<T>::Display()
{
    cout<<"Elemenets from Linekd List"<<endl;
    
    struct node<T> *temp = head;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

template <class T>
int SinglyLL<T>::CountNode()
{
    return Count;
}

int main()
{

    SinglyLL <int>obj1;

    obj1.InsertFirst(101);
    obj1.InsertFirst(51);
    obj1.InsertFirst(21);

    obj1.Display();
    cout<<"Number of elements is:"<<obj1.CountNode()<<endl;
    
    obj1.InsertFirst(11);
    obj1.Display();
    cout<<"Number of elements is:"<<obj1.CountNode()<<endl;
    
    obj1.InsertLast(111);
    obj1.Display();
    cout<<"Number of elements is:"<<obj1.CountNode()<<endl;

    obj1.InsertAtPos(210,3);
    obj1.Display();
    cout<<"Number of elements is:"<<obj1.CountNode()<<endl;
    
    obj1.DeleteAtPos(3);
    obj1.Display();
    cout<<"Number of elements is:"<<obj1.CountNode()<<endl;

    obj1.DeleteFirst();
    obj1.Display();
    cout<<"Number of elements is:"<<obj1.CountNode()<<endl;
    
    obj1.DeleteLast();
    obj1.Display();
    cout<<"Number of elements is:"<<obj1.CountNode()<<endl<<endl;

    
    SinglyLL <float>obj2;

    obj2.InsertFirst(101.11);
    obj2.InsertFirst(51.11);
    obj2.InsertFirst(21.11);

    obj2.Display();
    cout<<"Number of elements is:"<<obj2.CountNode()<<endl;
    
    obj2.InsertFirst(11.11);
    obj2.Display();
    cout<<"Number of elements is:"<<obj2.CountNode()<<endl;
    
    obj2.InsertLast(111.11);
    obj2.Display();
    cout<<"Number of elements is:"<<obj2.CountNode()<<endl;

    obj2.InsertAtPos(210.11,3);
    obj2.Display();
    cout<<"Number of elements is:"<<obj2.CountNode()<<endl;
    
    obj2.DeleteAtPos(3);
    obj2.Display();
    cout<<"Number of elements is:"<<obj2.CountNode()<<endl;

    obj2.DeleteFirst();
    obj2.Display();
    cout<<"Number of elements is:"<<obj2.CountNode()<<endl;
    
    obj2.DeleteLast();
    obj2.Display();
    cout<<"Number of elements is:"<<obj2.CountNode()<<endl<<endl;

    SinglyLL <char>obj3;
   
    obj3.InsertFirst('D');
    obj3.InsertFirst('C');
    obj3.InsertFirst('B');

    obj3.Display();
    cout<<"Number of elements is:"<<obj3.CountNode()<<endl;
    
    obj3.InsertFirst('A');
    obj3.Display();
    cout<<"Number of elements is:"<<obj3.CountNode()<<endl;
    
    obj3.InsertLast('E'); 
    obj3.Display();
    cout<<"Number of elements is:"<<obj3.CountNode()<<endl;

    obj3.InsertAtPos('Z',3);
    obj3.Display();
    cout<<"Number of elements is:"<<obj3.CountNode()<<endl;
    
    obj3.DeleteAtPos(3);
    obj3.Display();
    cout<<"Number of elements is:"<<obj3.CountNode()<<endl;

    obj3.DeleteFirst();
    obj3.Display();
    cout<<"Number of elements is:"<<obj3.CountNode()<<endl;
    
    obj3.DeleteLast();
    obj3.Display();
    cout<<"Number of elements is:"<<obj3.CountNode()<<endl;
    
    return 0;
}