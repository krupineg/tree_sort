//
// Created by krupi on 10/21/2017.
//

#include <exception>
#include <iostream>

class node{
    int value;
    node* left;
    node* right;

    ~node(){
        if(left){
            delete left;
        }
        if(right){
            delete right;
        }
    }

public:
    explicit node(int val): left(NULL), right(NULL){
        value = val;
    }

    void put(int val){
        if(val >= value){
            if(left)             {
                left->put(val);
            }else{
                left = new node(val);
            }
        }
        else{
            if(right)             {
                right->put(val);
            }else{
                right = new node(val);
            }
        }
    }

    void printBack(){
        if(left){
            left->printBack();
        }
        std::cout << value << ' ';
        if(right){
            right->printBack();
        }
    }

    void print(){
        if(right){
            right->print();
        }
        std::cout << value << ' ';
        if(left){
            left->print();
        }
    }
};
