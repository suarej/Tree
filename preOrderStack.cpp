//
//  preOrderStack.cpp
//  DataStructures
//
//  Created by Suraj on 20/06/20.
//  Copyright © 2020 Suraj. All rights reserved.
//
#include <isotream>
#include <stack>

using namespace std;

class Node
{
public:
    int data;
    struct Node* left;
    struct Node* right;
};

Node* newNode(int data)
{
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}
  
void Preorder(Node *root)
{
    if (root == NULL)
       return;

    stack <Node *> nodeStack;
    nodeStack.push(root);
  
    while (nodeStack.empty() == false)
    {
        Node *node = nodeStack.top();
        cout << node->data << " ";
        nodeStack.pop();
  
        if (node->right)
            nodeStack.push(node->right);
        if (node->left)
            nodeStack.push(node->left);
    }
}


int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
  
    preOrder(root);
}

