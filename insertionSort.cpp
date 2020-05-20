#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a;//learn c++ stl {vector,map,list}
    int size,k,j;
    cout<<"enter the number of elements which you want to enter:";cin>>size;
    for(int i=0;i<size;i++){
        cin>>k;
        a.push_back(k);
    }
    int temp;
    for(int i=1;i<size;i++){
        j = i-1;
        temp = a[i];
        while(j>=0 && a[j]>temp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    cout<<endl;
    cout<<"Sorted vector:";
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}