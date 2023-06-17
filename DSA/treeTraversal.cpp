#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        value = val;
        left = NULL;
        right = NULL;
    }
};

void inOrderTraversal(Node* node) {
    if (node == NULL) {
        return;
    }

    // Traverse the left subtree
    inOrderTraversal(node->left);

    // Process the value of the current node
    cout << node->value << " ";

    // Traverse the right subtree
    inOrderTraversal(node->right);
}

void preorderTraversal(Node* node) {
    if (node == NULL) {
        return;
    }

    // Process the value of the current node
    cout << node->value << " ";

    // Traverse the left subtree
    preorderTraversal(node->left);

    // Traverse the right subtree
    preorderTraversal(node->right);
}

void postOrderTraversal(Node* node) {
    if (node == NULL) {
        return;
    }

    // Traverse the left subtree
    postOrderTraversal(node->left);

    // Traverse the right subtree
    postOrderTraversal(node->right);

    // Process the value of the current node
    cout << node->value << " ";
}

int main() {
    // Create a binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Perform in-order traversal
    cout << "In-order traversal: ";
    inOrderTraversal(root);
    cout << endl;

    // Perform pre-order traversal
    cout << "Pre-order traversal: ";
    preorderTraversal(root);
    cout << endl;

    // Perform post-order traversal
    cout << "Post-order traversal: ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}
