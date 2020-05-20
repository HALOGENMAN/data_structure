#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &a1,int start,int mid,int end){
    int i,j;
    i=start;
    j=mid+1;
    vector<int>a2;
    a2.clear();
    while(i<=mid && j<=end){
        if(a1[i]<a1[j]){
            a2.push_back(a1[i]);
            i++;
        }
        else{
            a2.push_back(a1[j]);
            j++;
        }    
    }
    if(i==mid+1){
        while(j!=end+1){
            a2.push_back(a1[j]);
            j++;
        }
    }
    if(j==end+1){
        while(i!=mid+1){
            a2.push_back(a1[i]);
            i++;
        }
    }
    i=0;
    while(start!=end+1){
        a1[start] = a2[i];
        start++;
        i++;
    }
}

void mergSort(vector<int> &a ,int start,int end){
    if(start<=end){
        int mid = (start+end+1)/2;
        mergSort(a,start,mid);
        mergSort(a,mid+1,end);
        merge(a,start,mid,end);
    }
}
void print(vector<int> &a){
    cout<<endl;
    for(int i : a){
        cout<<i<<" ";
    }
}
int main(){
    int size,k;
    vector<int> a;
    cout<<"enter thr size:";cin>>size;
    for(int i=0;i<size;i++){
        cin>>k;
        a.push_back(k);
    }
    mergSort(a,0,a.size()-1);
    print(a);
}