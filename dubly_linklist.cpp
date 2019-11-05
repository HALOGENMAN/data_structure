#include<iostream>

using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node *top = NULL;
node *bottom = NULL;

void insert_at_top(int x){
    node *temp = new node;
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    if(top == NULL){
        top = bottom = temp;
    }
    else{
        top->left = temp;
        temp->right = top;
        top = temp;
    }
}

void insert_at_end(int x){
    node *temp = new node;
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    if(top == NULL){
        top = bottom = temp;
    }
    else{
       bottom->right = temp;
       temp->left = bottom;
       bottom = temp;
    }
}

void insert_at_point(int x,int pos){
    node *temp = new node;
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    if(pos == 1){
        cout<<"\n use insert_at_top() function";
    }
    else if(top == NULL){
        top = bottom = temp;
    }
    else{
        node *pemp = top;
        int t=0;
        while(t<(pos-2)){
            pemp = pemp->right;
        }
        if(pemp == NULL){
            cout<<"IT IS NULL";
        }
        else {
            temp->right = pemp->right;
            temp->left = pemp;
            pemp->right->left = temp;
            pemp->right = temp;
        }
    }
}

void delete_at_top(){
    node *temp = top;
    if(top == NULL){
        cout<<"\n list is null";
    }
    else{
        top = temp->right;
        top->left = NULL;
        delete temp;
    }
}

void delete_at_point_from_top(int pos){
    node *temp = top;
    if(pos == 1){
        cout<<"\n use delete_at_top() finction ";
    }
    else if(top == NULL){
        cout<<"\n list is empty";
    }
    else{
        int t = 0;
        while(t<(pos-2)){
            temp = temp->right;
        }
        if(temp == NULL){
            cout<<"\n # BrakingBad";
        }
        else{
            node *del = temp->right;
            temp->right = del->right;
            del->right->left = temp;
            delete del;
        }
    }
}

void print_from_top(){
    node *temp = top;
    if(top == NULL){
        cout<<"list is empty"<<endl;
    }
    else{
        while(temp != bottom->right ){
            cout<<temp->data<<" ";
            temp = temp->right;
        }
    }
}

int main(){
    insert_at_top(30);
    insert_at_end(20);
    insert_at_point(12,2);
    //insert_at_point(14,2);
    //delete_at_top();
    print_from_top();
    delete_at_point_from_top(2);
    cout<<endl;
    print_from_top();
}