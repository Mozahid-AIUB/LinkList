#include <bits/stdc++.h>
using namespace std;
 class Node{
        public : 
        int val ; 
        Node *next ;
        Node(int val)
        {
            this->val = val ;
            this->next = NULL;
        }
    };
    void insert_at_node(Node* &head , int val)
    {
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            return ;
        }
        Node* tmp = head;
        while(tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
    void printing_node(Node* &head)
    {
        Node* tmp = head;
        while(tmp != NULL)
        {
            cout<<tmp->val<<endl;
            tmp = tmp->next ;
        }
    }
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a ;
    a->next         = b ;
    
    insert_at_node(head, 100);
    insert_at_node(head, 1000);
    printing_node(head);
    return 0;
}