//
//  binTree.hpp
//  DataStructures
//
//  Created by Suraj on 20/06/20.
//  Copyright © 2020 Suraj. All rights reserved.
//

#ifndef binTree_hpp
#define binTree_hpp

#include <stdio.h>
#include <iostream>

class Node
{
    Node *lChild;
    Node *rChild;
    int data;
    
};

class Queue
{
    int front;
    int rear;
    int size = 10;
    Node **Q;
    
  public:
    Queue()
    {
        front = rear = -1;
        Q = new Node*[size];
    }
    Queue(int size)
    {
        front = rear =-1;
        this->size = size;
        Q = new Node*[this->size];
        
    }
    
    void enQueue(Node *x)
    {
        if (rear == size-1 )
        {
            std::cout << "queue full." << std::endl;
        }
        else
        {
            rear++;
            Q[rear] = x;
        }
    }
    
    Node* deQueue()
    {
        Node *x = NULL;
        if (front==rear) {
            std::cout <<"Queue is empty" << std::endl;
        }
        else
        {
            x=Q[front+1];
            front++;
        }
        return x;
    }
    
    void display()
    {
        for (int i=front+1; i<=rear; i++)
        {
            std::cout << Q[i] << " " ;
        }
        
    }
};


#endif /* binTree_hpp */
