#include <iostream>

using namespace std;


class Node
{
public:
    int data;
    Node* left;
    Node* right;
    
    int height;

    Node(int value){
        data=value;
        left=right=nullptr;
        height=1;
    }
};

class Tree
{
private:
    Node* root;
public:
    Tree(){
        root=nullptr;
    }
    
    int getHeight(Node* n){
        if (n==nullptr) 
        {
            return 0;
        }
        return n->height;
    }

    int getBalance(Node* n){
        if (n==nullptr) 
        {
            return 0;
        }
        return getHeight(n->left)-getHeight(n->right);
    }
    


};
