#ifndef TREE_NODE_HPP
#define TREE_NODE_HPP

template <typename T>
class Node 
{
public:
    T data;
    Node<T>* left;
    Node<T>* right;

    int height;

    Node(const T& value){
        data=value;
        left=right=nullptr;
        height=1; 
    }
};

#endif