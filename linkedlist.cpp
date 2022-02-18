#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    
    Node(int data)
    {
        this->data =data;
        this->next = NULL;
    }
};
Node* addFront(Node* head,int data)
{
    Node* temp = new Node(data);
    if(head == NULL)
    {
        temp->next =NULL;
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
    
    return head;
}

Node* addEnd(Node* head,int data)
{
    Node* temp = new Node(data);
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        Node* n1 = head;
        while(n1->next!=NULL)
        {
            n1 = n1->next;
        }
        n1->next=temp;
    }
    return head;
}

int length(Node* head)
{
    int c=0;
    while(head!=NULL)
    {
        c++;
        head = head->next;
    }
    return c;
}


Node* addLoc(Node* head,int index,int data)
{   
    int c=0;
    Node* temp = new Node(data);
    if(index == 0)
    {
        temp->next = head;
        head = temp;
    }
    else if(index == length(head))
    {
        head = addEnd(head,data);
    }
    else
    {
        Node*n1 =head;
        while(c<index-1)
        {
            c++;
            n1 = n1->next;
        }
        temp->next = n1->next;
        n1 ->next = temp;
        
    }
    return head;
}
Node* deleteFront(Node* head)
{
    head = head->next;
    return head;
}

Node* deleteEnd(Node* head)
{
    int c = 0;
    if(length(head)==1)
    {
        head = NULL;
    }
    else{
        Node* n1 = head;
        while(c<length(head)-2)
        {
         c++;
         n1=n1->next;
        }
        n1->next = NULL;
    }
    return head;
}
Node* deleteLoc(Node* head,int index)
{
    int c = 0;
    if(index > length(head))
    {
        cout<<"wrong index"<<endl;
    }
    else if(index == 0)
    {
        head = head ->next;
    }
    else{
        Node* n1 = head;
        while(c<index-1)
        {
         c++;
         n1=n1->next;
        }
        n1->next = (n1->next)->next;
    }
    return head;
}
Node* rev(Node* head)
{
    Node* prev =NULL;
    Node* current = head;
    while(current!=NULL)
    {
        Node* n = current->next;+
        current->next = prev;
        prev = current;
        current = n;
    }
    return prev; 
}


void print(Node* head)
{
    cout<<"----------------------------------------------------"<<endl;
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
    cout<<"----------------------------------------------------"<<endl;
}
int main()
{
    Node* head = NULL;
    int ch,data,index;
    do
    {
        cout<<"1.Enter a Node at Start"<<endl;
        cout<<"2.Enter a Node at End"<<endl;
        cout<<"3.Enter at specific location"<<endl;
        cout<<"4.Delete a Node From Front"<<endl;
        cout<<"5.Delete a Node From End"<<endl;
        cout<<"6.Delete a Node at Specific Location"<<endl;
        cout<<"7.Reverse a List"<<endl;
        cout<<"8.Display"<<endl;
        cout<<"9.End"<<endl; 
        cout<<"Enter Your Choice:"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter Element to be Insert:"<<endl;
                cin>>data;
                head = addFront(head,data);
                break;
            
            case 2:
                cout<<"Enter Element to be Insert:"<<endl;
                cin>>data;
                head = addEnd(head,data);
                break;
            case 3:
                cout<<"Enter Element to be Insert:"<<endl;
                cin>>data;
                cout<<"Enter Index Number:"<<endl;
                cin>>index;
                head = addLoc(head,index,data);
                break;

            case 4:
                head = deleteFront(head);
                break;
            case 5:
                head = deleteEnd(head);
                break;
            case 6:
                cout<<"Enter Index Number:"<<endl;
                cin>>index;
                head = deleteLoc(head,index);
                break;
            case 7:
                head = rev(head);
                break;
            case 8:
                print(head);
                break;
            case 9:
                break;
            default:
                cout<<"Wrong choice!!!"<<endl;
        }
    }while(ch!=9);

    return 0;
}