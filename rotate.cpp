#include<iostream>
using namespace std;
int main(){
    int n,r;
    cout<<"enter the element:"<<endl;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"enter the number from where u want rotation:"<<endl;
    cin>>r;
    for(int j=0;j<r;j++){
        int temp=arr[n-1];
        for(int k=n-1;k>=0;k--){
            
            arr[k]=arr[k-1];
           
        }
        arr[0]=temp;
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}