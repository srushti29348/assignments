#include<iostream>
using namespace std;
// int main(){
//     int num,sum=0;
//     cout<<"Enter the number:"<<endl;
//     cin>>num;
//     int rem1;
//     while(num!=0){
//         rem1=num%10;
//         sum=sum+(rem1*rem1*rem1);
//         num=num/10;
//     }
//     if(sum==num){
//         cout<<"the given number is armstrong"<<endl;
//     }
//     else{
//         cout<<"number is not armstrong"<<endl;
//     }
// }
int main(){
    int num,next;
    int a=0;
    int b=1;
    cout<<"Enter the number upto where u want the series"<<endl;
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<a<<" ";
        next=a+b;
         a=b;
        b=next;
       
        
    }

}