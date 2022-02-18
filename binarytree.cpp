#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data = data;
        left    = NULL;
        right   = NULL;
    }

};

Node* input()
{
    int value;
    cout<<"Enter a Value: ";
    cin>>value;  
    Node* root = new Node(value);
    queue<Node*> queue;
    queue.push(root);
    while(queue.size() != 0)
    {
        Node* temp = queue.front();
        char ch;
        cout<<"Do you want left children"<<temp->data<<"(y/n): "<<endl;
        cin>>ch;
        if(ch == 'y')
        {
            cout<<"Enter a Value: ";
            cin>>value;  
            Node* left = new Node(value);
            temp->left = left;
            queue.push(temp->left);
        }

        //char ch;
        cout<<"Do you want right children"<<temp->data<<"(y/n): "<<endl;
        cin>>ch;
        if(ch == 'y')
        {

            cout<<"Enter a Value: ";
            cin>>value;  
            Node* right = new Node(value);
            root->right = right;
            queue.push(temp->right);
        }
        queue.pop();
    }
    return root;
}

void print(Node* root)
{
    queue<Node*> q1;
    q1.push(root);
    while(q1.size()!= 0 )
    {
        Node* temp = q1.front();
        cout<<temp->data<<": ";
        
        if(temp->left != NULL)
        {

            cout<<temp->left->data<<" ";
            q1.push(temp->left);    
        }
        if(temp->right != NULL)
        {
            cout<<temp->right->data<<" ";
            q1.push(temp->right);
        }

        q1.pop();
        cout<<endl;
    }
}


int main()
{   
    Node* n1 = input();
    print(n1);
    
    return 0;
}