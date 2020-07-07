//
//  lvlOrder iterative.cpp
//  DataStructures
//
//  Created by Suraj on 21/06/20.
//  Copyright © 2020 Suraj. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

class Node
{   public:
    int data;
    struct Node* left;
    struct Node* right;
    Node (int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

Node* newNode(int data)
{
    Node* node = new Node(data);
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}


void lvlOrder(Node *root)
{
    if (root == NULL)
    return;
    
    queue<Node *> q;
      
    Node *curr;

    q.push(root);
    q.push(NULL);
  
    while (q.size() > 1)
    {
        curr = q.front();
        q.pop();

        if (curr == NULL)
        {
           q.push(NULL);
           cout << "\n";
        }
          
        else {
            if(curr->left)
            q.push(curr->left);
              
            if(curr->right)
            q.push(curr->right);
              
            cout << curr->data << " ";
        }
    }
}



int main()
{
    Node *root = newNode(1);
       root->left = newNode(2);
       root->right = newNode(3);
       root->left->left = newNode(4);
       root->left->right = newNode(5);
     
       lvlOrder(root);
}
