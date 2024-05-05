#ifndef AVL_TREE_H
#define AVL_TREE_H


typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    int height;
} Node;


Node* newNode(int data);


int height(Node* node);


int max(int a, int b);


Node* rightRotate(Node* y);


Node* leftRotate(Node* x);


int getBalance(Node* node);


Node* insert(Node* node, int data);


Node* deleteNode(Node* root, int data);


void inorder(Node* root);

#endif 
