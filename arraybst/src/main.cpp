#include<iostream>
#include "linkedBST.h"
using namespace std;

int main()
{
    linkedBST test;

    test.add(30,30);
    test.add(40,40);
    test.add(20,20);
    test.add(5,5);
    test.add(88,88);
    test.add(59,59);
    test.add(23,23);
    test.add(12,12);

    test.add(10,10);
    std::cout<<"BST inorder traversal"<<std::endl;
    test.inorder();
    test.remove(40);

    test.remove(10);
    std::cout<<"After removal:"<<std::endl;
    test.inorder();

    int min_value;
    test.min(min_value);
    std::cout<<"The minium value in BST is:"<<min_value<<std::endl;

    int max_value;
    test.max(max_value);
    std::cout<<"The maximum value in BST is:"<<max_value<<std::endl;
    
    std::cout<<"Checking Existence of key:"<<test.exists(5)<<std::endl;
}