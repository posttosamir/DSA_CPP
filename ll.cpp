#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *head = NULL;

void insertatbeg(int val)
{
    node *p = new node; // new node creation
    p->data = val;      // new node assinging val
    p->next = NULL;     // new node assigning address

    if (head == NULL)
    {
        head = p;
    }
    else
    {
        p->next = head;
        head = p;
    }

    // cout << head->data << endl;
    // cout << head->next->data << endl;
    // cout<<&head<<endl;
    // cout<<"-------------"<<endl;
}


void insend(int val)
{

    node *p =new node;
    p->data=val;
    p->next=NULL;
    
    node *temp = head;

    while(temp->next!=NULL)
    {
        temp = temp->next;
    }


   
}

// program for traversal

void trav()
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    insertatbeg(55);
    insertatbeg(15);
    insend(33);
    

    // trav();

    return 0;
}