#include<iostream>

using namespace std;

int main(){
    string aa;
    int flag = 0;
    cin>>aa;
    int s=0;
    for(int i=0;aa[i] !='\0';i++){
        s++;
    }//calculatindg the length of string
    for(int i=0;i<s/2;i++){
        if(aa[i] != aa[s-1-i]){
            flag=1;
            break;
        }
    }
    if(flag == 0){
        cout<<"\n this is  pallendrome";
    }    
    else{
        cout<<"\n this not pallendrome";
    }
}