#include <iostream>

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

void preOrder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

void postOrder(Node* root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

int main() {
   
    Node* root = newNode(18);
    root->left = newNode(30);
    root->right = newNode(33);
    root->left->left = newNode(29);
    root->left->right = newNode(32);

   
    cout << "Posisi Awal Tree:\n";
    cout << "  " << root->data << endl;
    cout << " / \\" << endl;
    cout << root->left->data << " " << root->right->data << endl;
    cout << "/ \\" << endl;
    cout << root->left->left->data << " " << root->left->right->data << endl << endl;

  
    cout << "Tampilan PreOrder : ";
    preOrder(root);
    cout << endl;

    cout << "Tampilan InOrder : ";
    inOrder(root);
    cout << endl;

    cout << "Tampilan PostOrder: ";
    postOrder(root);
    cout << endl;

    return 0;
}
