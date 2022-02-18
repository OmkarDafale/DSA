#include<iostream>
#include<vector>
using namespace std;


class Node
{
    public:
        int data;
        vector<Node*> n;
    Node(int data)
    {
        this->data = data;
        //n.push_back(NULL);
    }
};
int main()
{
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    
    //n1.pop_back();
    n1->n.push_back(n2);
    n1->n.push_back(n3);

    cout<<"  "<<n1->data<<endl;
    cout<<"->"<<endl;
    for(int i =0;i< n1->n.size();i++)
    {   
        cout<<(n1->n.at(i))->data<<" ";
    }
    return 0;
}