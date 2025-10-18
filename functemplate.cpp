#include<iostream>
using namespace std;
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
        cout<<"addition:"<<num1+num2;
    }

};
int main(){
    A<int>d(2);
    d.add();
    return 0;
}


// template<class T>
//    T add(T a,T b){
//     cout<<a+b;
//    }
// int main(){
//     int a=10;
//     int b=100;
//     add(a,b);

// }