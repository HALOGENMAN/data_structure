#include<iostream>

using namespace std;

class stack{
    int A[10],t,size;
    public:
        stack(){
            t = 0;
            size = 10;
        }
        void push(int);
        void print();
        void pop();
};

void stack :: push(int x){
    if(t == size){
        cout<<"\n stack is overflowed";
    }
    else{
        A[t] = x;
        t++;
    }
}

void stack :: pop(){
    if(t == 0){
        cout<<"\n stack is empty";
    }
    else{
        t--;
    }
}

void stack :: print(){
    if(t == 0){
        cout<<"\n stack is empty";
    }
    else{
        for(int i = 0;i<t;i++){
            cout<<A[i]<<" ";
        }
    }
}

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.print();
    s.pop();
    cout<<endl;
    s.print();
}
