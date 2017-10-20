//
// Created by krupi on 10/21/2017.
//

#include <iostream>
#include "node.h"

class tree{
    node* head;
public:
    tree() :head(NULL){
    }

    void put(int val){
        if(head){
            head->put(val);
        }
        else{
            head = new node(val);
        }
    }

    void print(){
        if(head){
            head->print();
        }
        else{
            std::cout << "tree is empty";
        }
        std::cout << std::endl;
    }

    void printBack(){
        if(head){
            head->printBack();
        }
        else{
            std::cout << "tree is empty";
        }
        std::cout << std::endl;
    }
};
