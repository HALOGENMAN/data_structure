#include<iostream>
using namespace std;

struct node{
    int data;
    node *next; 
};
node *top=NULL;
node *bottom=NULL;

void insert_at_top(int x){
    node *temp = new node;
    temp->data = x;
    temp->next = NULL;
    if(top == NULL){
        top=bottom=temp;
    }
    else{
        temp->next = top;
        top = temp;
    }
}

void insert_at_end(int x){
    node *temp = new node;
    temp->data = x;
    temp->next = NULL;
    if(top == NULL){
        top = bottom = temp;
    }
    else{
        temp->next = bottom;
        bottom = temp;
    }
}

void insert_at_point(int x,int p){
    node *temp = new node;
    node *kemp = top;
    temp->data = x;
    temp->next = NULL;
    if(top == NULL){
        top = bottom = temp;
    }
    else if(p == 1){
        cout<<"use insert at top"<<endl;
    }
    else{
        int k = 0;
        while(k<(p-2)){
            kemp=kemp->next;
            k++;
        }
        if(kemp == NULL){
            cout<<"\n place is not available";
        }
        else{
            temp->next = kemp->next;
            kemp->next=temp;
        }
    }
}

void print(){
    node *temp = top;
    if(top == NULL){
        cout<<"list is empty"<<endl;
    }
    else{
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
}

void remove_at_top(){
    node *temp = top;
    if(top == NULL){
        cout<<"\n thereis no element";
    }
    else{
        top = temp->next;
        delete temp;
    }
}

void remove_at_point(int p){
    node *temp = top;
    node *del;
    if(top == NULL){
        cout<<"list is empty"<<endl;
    }
    else{
        int k = 0;
        while(k<(p-2)){
            temp=temp->next;
            k++;
        }
        if(temp == NULL){
            cout<<"position not exist"<<endl;
        }
        else{
            del = temp->next;
            temp->next=temp->next->next;
            delete del;
        }
    }
}
int main(){
    //insert_at_end(11);
    insert_at_top(10);
    insert_at_top(20);
    insert_at_top(40);
    insert_at_point(3,3);
    
    remove_at_point(2);
    print();
}