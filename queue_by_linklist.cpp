#include<iostream>

using namespace std;

class queue{
    int A[10],front,rear,size;
    public:
        queue(){
            size = 10;
            front = rear = 0;
        }
        void insert(int);
        void remove();
        void print();
};

void queue :: insert(int x){
    if(front == 0 && rear == 0){
        A[rear] = x;
        rear++;
    }
    else{
        
        A[rear] = x; 
        rear++;
    }
}

void queue :: remove(){
    if(front == rear+1){
        cout<<"\n empty queue";

    }
    else{
        front++;
    }
}

void queue :: print(){
    if(rear == 0){

    }
}