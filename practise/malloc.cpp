#include<iostream>
using namespace std;
int main(){
    int* ptr;
    int n,i;
    cout<<"enter the number of element:"<<endl;
    cin>>n;
    ptr=(int*) malloc(n*sizeof(int));
    cout<<"enter the elements:"<<endl;
    for(i=0;i<n;i++){
        cin>>ptr[i];
    }
    for(i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }
}