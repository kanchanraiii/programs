#include <iostream>
#include <algorithm>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};


int height(Node* root, int &diameter) {
    if (root == nullptr) return 0;

    int lh = height(root->left, diameter);
    int rh = height(root->right, diameter);
    diameter = max(diameter, lh + rh);

    return 1 + max(lh, rh); 
}

int diameterOfTree(Node* root) {
    int diameter = 0;
    height(root, diameter);
    return diameter;
}

int main() {
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

    cout << "Diameter of the tree is: " << diameterOfTree(root) << endl;

    return 0;
}
