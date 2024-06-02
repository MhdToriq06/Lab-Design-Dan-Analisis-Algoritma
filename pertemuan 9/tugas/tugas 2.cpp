#include <iostream>
#include <queue>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};


Node* newNode(int data) {
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}


void preorder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}


void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}


void postorder(Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}


int main() {
    
    Node* root = newNode(24);
    root->left = newNode(16);
    root->right = newNode(32);
    root->left->left = newNode(12);
    root->left->right = newNode(20);

    
    cout << "Tampilan PreOrder : ";
    preorder(root);
    cout << endl;

    cout << "Tampilan InOrder : ";
    inorder(root);
    cout << endl;

    cout << "Tampilan PostOrder : ";
    postorder(root);
    cout << endl;

    return 0;
}
