// To create a linked list and traverse it in C++

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data=val;
            next=nullptr;
        }

};

void traverse(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        cout<<"-> ";
        if(temp->next == nullptr) {
            cout<<"nullptr";

        }
        temp=temp->next;
    }
}

int main(){
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(3);
    Node* fourth=new Node(4);
    Node* fifth=new Node(5);
    Node* sixth=new Node(6);
    Node* seventh=new Node(7);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=nullptr;
    cout<<"Linked List: ";
    traverse(head);
    cout<<endl;
    
}