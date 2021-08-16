#include<iostream>
#include<vector>
#include<queue>
using namespace std;


class Node
{
    public:
        int data;
        vector<Node*> n;
    Node(int data)
    {
        this->data = data;
    }
};
void print(Node* root)
{
    queue<Node*> q1;
    q1.push(root);
    while(q1.size()!= 0 )
    {
        Node* temp = q1.front();
        cout<<temp->data<<": ";
        for(int i=0;i<temp->n.size();i++)
        {
            Node* c1 = temp->n.at(i);
            cout<<c1->data<<" ";
            q1.push(c1);
        }
        q1.pop();
        cout<<endl;
    }
}

Node* input()
{
    int n,c;
    cout<<"Enter a Value for Root Node:"<<endl;
    cin>>n;
    queue<Node*> q1;
    Node* root = new Node(n);
    q1.push(root);
    while(q1.size()!= 0 )
    {
        Node* temp = q1.front();
        cout<<"Enter "<<temp->data<<" No of Childs:"<<endl;
        cin>>c;
        for(int i=0;i<c;i++)
        {
            int n;
            cout<<"Enter value:"<<endl;
            cin>>n;
            Node* c1 = new Node(n);
            temp->n.push_back(c1);
            q1.push(c1);
        }
        q1.pop();
    }
    return root;
}
void degree(Node* root)
{
    queue<Node*> q1;
    int c = 0;
    q1.push(root);
    while(q1.size()!= 0 )
    {
        Node* temp = q1.front();
        cout<<"Degree of "<<temp->data<<": ";
        for(int i=0;i<temp->n.size();i++)
        {
            Node* c1 = temp->n.at(i);
            c++;
            q1.push(c1);
        }
        cout<<c;
        q1.pop();
        c = 0;
        cout<<endl;
    } 
}

void heigth(Node* root)
{
    queue<Node*> q1;
    int c = 0;
    int max = 0;
    q1.push(root);
    while(q1.size()!= 0 )
    {
        Node* temp = q1.front();
        for(int i=0;i<temp->n.size();i++)
        {
            Node* c1 = temp->n.at(i);
            c++;
            q1.push(c1);
        }
        q1.pop();
        if(c>max)
        {
            max = c;
        }    
        c=0;
        cout<<endl;
    } 
    cout<<"height:"<<max+1<<endl;
}
int main()
{
    // Node* n1 = new Node(10);
    // Node* n2 = new Node(20);
    // Node* n3 = new Node(30);
    
    // //n1.pop_back();
    // n1->n.push_back(n2);
    // n2->n.push_back(n3);

    Node* n1 = input();
    degree(n1);
    heigth(n1);
    print(n1);

    return 0;
}