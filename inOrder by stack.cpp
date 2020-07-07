//
//  inOrder by stack.cpp
//  DataStructures
//
//  Created by Suraj on 20/06/20.
//  Copyright © 2020 Suraj. All rights reserved.
//

#include <iostream>
#include <stack>

using namespace std;

class Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node (int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
  
void inOrder(Node *root)
{
    stack <Node *> s;
    Node *curr = root;
  
    while (curr != NULL || s.empty() == false)
    {
        while (curr !=  NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
  
        curr = s.top();
        s.pop();
  
        cout << curr->data << " ";

        curr = curr->right;
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
  
    inOrder(root);
    
}
