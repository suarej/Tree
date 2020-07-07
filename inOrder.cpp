//
//  inOrder.cpp
//  DataStructures
//
//  Created by Suraj on 20/06/20.
//  Copyright © 2020 Suraj. All rights reserved.
//


#include <iostream>
using namespace std;
  
class Node
{
  public:
    int data;
    Node* left, *right;
    
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void printInorder(Node* node)
{
    if (node == NULL)
        return;
  
    printInorder(node->left);

    cout << node->data << " ";

    printInorder(node->right);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
  
    cout << "\n""Preorder traversal of binary tree is:";
    printPreorder(root);

}
