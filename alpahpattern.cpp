#include <iostream>
using namespace std;

int main() {
     int n;
     int num=0;
    cout<<"Enter the number of row:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<(char)(num+65)<<" ";
            num++;
        }
        cout<<endl;
    }

}