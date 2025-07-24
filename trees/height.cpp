// To find the height of a binary tree

#include <iostream>
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

int height(Node* root){
    if(root==nullptr) return 0;
    int leftheight=height(root->left);
    int rightheight=height(root->right);
    return max(leftheight, rightheight)+1;
}

int main(){
    // Creating a sample tree:
    //        1
    //       / \
    //      2   3
    //     / \
    //    4   5

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Height of the tree is: " << height(root) << endl;

    return 0;
}