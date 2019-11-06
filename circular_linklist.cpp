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
        top = bottom = temp;
    }
    else{
        temp->next = bottom->next;
        bottom->next = temp;
        bottom = temp;
    }
}

void delete_from_top(){
    node *temp = top;
    if(top == NULL){
        cout<<"\n list is empty";
    }
    else{
        top = top->next;
        bottom->next = top;
        delete temp;
    }
}

void print(){
    node *temp = top;
    if(top == NULL){
        cout<<"\n this list is empty";
    }
    else{
        while(temp != bottom){
            cout<<temp->data<<" ";
            temp = temp->next; 
        }
        temp->next;
        cout<<temp->data<<" ";
    }
}

int main(){
    insert_at_top(4);
    insert_at_top(4);
    insert_at_top(4);
    //insert_at_top(4);
    //insert_at_top(4);
    //insert_at_bottom(2);
    insert_at_bottom(2);
    print();
    cout<<endl;
    delete_from_top();
    print();
}