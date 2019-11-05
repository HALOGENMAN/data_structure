#include<iostream>

using namespace std;

struct node{
    int data;
    node *next;
};

node *top = NULL;
node *bottom = NULL;

void insert_at_top(int x){
    node *temp = new node;
    temp->data = x;
    temp->next = NULL;
    if(top == NULL){
        top = bottom = temp;
    }
    else{
        bottom->next = temp;
        temp->next = top;
        top = temp;
    }
}

void insert_at_bottom(int x){
    node *temp = new node;
    temp->data = x;
    temp->next = NULL;
    if(top == NULL){
        cout<<"\n ";
    }
}

void print(){
    node *temp = top;
    if(top == NULL){
        cout<<"\n this list is empty";
    }
    else{
        while(temp != bottom->next){
            cout<<temp->data<<" ";
            temp = temp->next; 
        }
    }
}

int main(){
    insert_at_top(4);
    print();
}