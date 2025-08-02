// Leetcode 101

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){
            data=val;
            left=nullptr;
            right=nullptr;
        }
};

// use dfs to check if the tree is symmetric
bool Symmetric(Node* left, Node* right){
    if(left==nullptr && right==nullptr) return true;
    if(left==nullptr || right==nullptr) return false;
    if(left->data!=right->data) return false;

    return Symmetric(left->left, right->right) && Symmetric(left->right,right->left);
}


bool isSymmetric(Node* root) {
    if(root==nullptr) return true;
    return Symmetric(root->left, root->right);
}

int main(){
    // Creating a sample symmetric tree:
    //        1
    //       / \
    //      2   2
    //     / \ / \
    //    3  4 4  3

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(4);
    root->right->right = new Node(3);

    if(isSymmetric(root)){
        cout << "The tree is symmetric." << endl;
    } else {
        cout << "The tree is not symmetric." << endl;
    }

    return 0;
}