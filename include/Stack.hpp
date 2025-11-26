#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include "Node.hpp"

using namespace std;

class Stack
{
private:
    Node* top;
public:
    Stack(){
        top=nullptr;
    }

    void push(int value){
        Node* newNode=new Node(value);
        newNode->next=top;
        top=newNode;
        cout<<value<<" pushed into stack"<<endl;
    }

    void pop(){
        if (top==nullptr)
        {
            cout<<"Stack is empthy"<<endl;
            return;
        }
        Node* temp=top;
        cout<<temp->data<<" poped from stack"<<endl;
        top=top->next;
        delete temp;
    }

    int peak(){
        if (top==nullptr)
        {
            cout<<"stack is empthy"<<endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpthy(){
        return top==nullptr;
    }

    void display(){
        if (top==nullptr)
        {
            cout<<"stack is empthy"<<endl;
            return;
        }
        Node* temp=top;
        cout<<"Stack : ";
        while (temp!=nullptr)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;   
    }
};

#endif