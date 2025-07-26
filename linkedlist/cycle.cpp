// To detect cycles in a linked list

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
      int data;
      Node* next;
      
      Node(int val){
        data=val;
        next=NULL;
      }
};


void detectCycle(Node* head){

    Node* fast=head;
    Node* slow=head;

    
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }

    if(fast==slow){
        cout<<"Cycle detected in the linked list."<<endl;
    } else {
        cout<<"No cycle detected in the linked list."<<endl;
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

    // Creating a cycle for testing
    seventh->next=third; // Cycle created

    detectCycle(head);

    return 0;
}