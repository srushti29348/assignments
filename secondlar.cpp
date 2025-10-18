#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of element:"<<endl;
    cin>>n;
    int* arr=new int[n];
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max1=arr[0];
    int max2=arr[0];
    for(int i=1;i<=n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
           
        }
    }
    cout<<"second highest element is:"<<max2;

}