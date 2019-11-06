#include<iostream>

using namespace std;

struct node{
    int data;
    node *next;
};

node *top = NULL;

void push(int x){
    node *temp = new node;
    temp->data = x;
    temp->next = NULL;
    if(top == NULL){
        top = temp;
    }
    else{
        temp->next = top;
        top = temp;
    }
}

void pop(){
    node *temp = top;
    if(top == NULL){
        cout<<"\n stack is empty";
    }
    else{
        top = top->next;
        delete temp;
    }
}

void print(){
    node *temp = top;
    if(top == NULL){
        cout<<"\n stack is empty (shayak Malakar)";
    }
    else{
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
}

int main(){
    push(10);
    push(30);
    push(20);
    print();
    cout<<endl;
    pop();
    print();
    cout<<"\n this is working quite well";
}