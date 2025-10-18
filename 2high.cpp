
#include <iostream>
using namespace std;

int main() {
     int arr[10];
     int n,second;
    cout<<"Enter the number of element:"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max1;
    for(int j=0;j<n-1;j++){
        for(int k=j+1;k<n;k++){
            if(arr[j]>arr[k]){
                int temp;
                temp=arr[j];
                arr[j]=arr[k];
                arr[k]=temp;
            }
        }
    }
    for(int k=n-1;k>=0;k--){
        if(arr[k]<arr[n-1]){
            second=arr[k];
        }
    }
   
    
    cout<<"second highest element is:"<<second;
}