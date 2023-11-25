#include <iostream>
using namespace std;

struct Node { // create a struct for a tree so you can use and set these values in the future.
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) { // create the tree;
    Node* newNode = new Nodxscfsdxe();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

void printTree(Node* root) { // preorder

    if(root == nullptr) return;

    cout << root->data << endl;
    printTree(root->left);
    printTree(root->right);
}

void inorder(Node* root) {
    if(root == nullptr) return;

    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);

}

void postorder(Node* root) {
    if(root == nullptr) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << endl;
}


int main() { 

    //Create a root of tree
    Node* root = createNode(1);

    //root->left = createNode(2); // create the left tree;
    //root->right = createNode(3); // create the right tree;

    //root->left->left = createNode(4); // create the left tree, and in that tree again the left tree. 

    //Level 1
    root->left = createNode(2);
    root->right = createNode(3);
    //Level 2 
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    root->right->left = createNode(6);  
    root->right->right = createNode(7);

    // Level 3 
    root->left->right->left = createNode(9);

    root->right->right->left = createNode(15);  

    cout << "preorder: " << endl;
    printTree(root); // preorder
    cout << "inorder: " << endl; 
    inorder(root);
    cout << "postorder" << endl;
    postorder(root);

    // trees:
    // preorder (data, left, right)
    // inorder (left, data, right)
    // postorder (left, right, data)
    

    cin.get();

}