#include<iostream>
using namespace std;
// Generic Singly Circular Linked List
template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyCLL
{
    private:                  
        struct node<T> *Head;
        struct node<T> *Tail;
        int Count;

    public:                     
        SinglyCLL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int ipos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);
        void Display();
        int CountNode();
};

template <class T>
SinglyCLL<T>::SinglyCLL()
{
    Head = NULL;
    Tail = NULL;
    Count = 0;
}

template <class T>
void SinglyCLL<T>::InsertFirst(T no)
{
    struct node<T> *newn = NULL;

    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if((Head == NULL) && (Tail == NULL))
    {
        Head = newn;
        Tail = newn;
    }
    else       
    {
        newn -> next = Head;
        Head = newn;
    }
    Tail -> next = Head;

    Count++;
}

template <class T>
void SinglyCLL<T>::InsertLast(T no)
{
    struct node<T> *newn = NULL;

    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if((Head == NULL) && (Tail == NULL))    
    {
        Head = newn;
        Tail = newn;
    }
    else        
    {
        Tail -> next = newn;
        Tail = newn;
    }
    Tail -> next = Head;

    Count++;
}

template <class T>
void SinglyCLL<T>::InsertAtPos(T no, int ipos)
{

    if((ipos < 1) || (ipos > Count+1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == Count+ 1)
    {
        InsertLast(no);
    }
    else
    {
            struct node<T> *newn = NULL;

            newn = new node<T>;

            newn->data = no;
            newn->next = NULL;

            struct node<T> *temp = Head;
            int iCnt = 0;

            for(iCnt = 1; iCnt < ipos-1; iCnt++)
            {
                temp = temp->next;
            }

            newn->next = temp -> next;
            temp->next = newn;
              
            Count++;
    }
   
}

template <class T>
void SinglyCLL<T>::DeleteFirst()
{
    if(Head == NULL && Tail ==  NULL)       
    {
        return;
    }
    else if(Head == Tail)       
    {
        delete Head;
        Head = NULL;
        Tail = NULL;
    }
    else    
    {
        Head = Head -> next;
        delete Tail->next;

        Tail->next = Head;
    }
    Count--;
}

template <class T>
void SinglyCLL<T>::DeleteLast()
{
    if(Head == NULL && Tail ==  NULL)       
    {
        return;
    }
    else if(Head == Tail)       
    {
        delete Tail;
        Head = NULL;
        Tail = NULL;
    }
    else    
    {
        struct node<T> *temp = Head;

        while(temp->next != Tail)
        {
            temp = temp->next;
        }

        delete Tail;
        Tail = temp;

        Tail->next = Head;
    }
    Count--;
}

template <class T>
void SinglyCLL<T>::DeleteAtPos(int ipos)
{
    

    if((ipos < 1) || (ipos > Count))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == Count)
    {
        DeleteLast();
    }
    else
    {
            struct node<T> *temp1 = Head;
            int iCnt = 0;

            for(iCnt = 1; iCnt < ipos-1; iCnt++)
            {
                temp1 = temp1->next;
            }

            struct node<T> *temp2 = temp1->next;

            temp1->next = temp2->next;
            delete temp2;
           
            Count--;
    }
}

template <class T>
void SinglyCLL<T>::Display()
{
    struct node<T> *temp = Head;

    if(Head == NULL && Tail == NULL)
    {
        return;
    }

    do
    {
        cout<<"|"<<temp->data<<"|-> ";
        temp = temp -> next;
    }while(temp != Head);

    cout<<endl;
}

template <class T>
int SinglyCLL<T>::CountNode()
{
    int iCnt = 0;
    struct node<T> *temp = Head;

    if(Head == NULL && Tail == NULL)
    {
        return 0;
    }

    do
    {
        iCnt++;
        temp = temp->next;
    }while(temp != Head);

    return iCnt;
}

int main()
{
    
    

    SinglyCLL <int>obj1;

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

    
    SinglyCLL <float>obj2;

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

    SinglyCLL <char>obj3;
   
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