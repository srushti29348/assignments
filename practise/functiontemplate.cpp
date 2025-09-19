#include<iostream>
using namespace std;
// template<class T>
// void add(T&a,T&b){
//     cout<<a+b;
// };
// int main(){
//     int x=3;
//     int y=4;
//     add(x,y);
// }
template<class T>
class A{
    public:
    T num1;
    T num2;
    A(T x){
        num1=x;
        num2=x;
    }
    void add(){
        cout<<"addition is:"<<num1+num2<<endl;
    }
};
int main(){
    A <int>obj(10);
    obj.add();
}