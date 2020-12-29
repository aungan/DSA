#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *link;
};

void print(Node *h){
    while (h != NULL )
    {
        cout << h->data<<endl;
        h = h->link;
    }
    

}

int middle(Node *h)
{
    Node *slow = h;
    Node *fast = h;
    while (fast != NULL  && fast->link != NULL)
    {
        fast = fast->link->link;
        slow = slow ->link;

    }
    return slow->data;
    
}

int main()
{
    Node * head = new Node();
    Node * sec = new Node();
    Node * third = new Node();
    Node * fourth = new Node();
    Node * fifth = new Node();
    Node * sixth  = new Node();

    head->data = 1;
    head->link = sec;
    sec->data = 2;
    sec->link = third;
    third-> data = 3;
    third->link = fourth;
    fourth-> data = 4;
    fourth-> link = fifth;
    fifth-> data = 5;
    fifth-> link = sixth;
    sixth-> data = 6;
    sixth-> link = NULL;

    print(head);
    cout << "the mid term is " <<endl;
    cout << middle(head);

}