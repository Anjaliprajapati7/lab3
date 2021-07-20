#ifndef BST_h
#define BST_h

#include "abstractBST.h"
#include<iostream>
using namespace std;

class Node {
    public:
    int key;
    int data;
    Node *left;
    Node *right;

     Node():left(nullptr){}
    // Node():right(nullptr){}
    Node(int key,int data, Node *left, Node *right):key(key),data(data),left(left),right(right){}
};

class linkedBST : public abstractBST {
    public:
    linkedBST();

    bool isEmpty();
    void add(int key, int data);
    
    void max(int &output);
    void min(int &output);
    
    bool exists(int targetKey);
    void remove(int key);

    void inorder();
    
    private:
    Node *root;
    
    void add(Node *subroot, Node *newNode);

    void inorder(Node *node, char sep = ' ');
};
#endif 
