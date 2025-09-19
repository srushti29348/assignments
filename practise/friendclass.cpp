#include<iostream>
using namespace std;
// class A{
//     int a=5;
//     public:
//     void function(){
//         cout<<"private is:"<<a<<endl;
//     }
//     friend class demo;
// };
// class demo{
//     public:
//     void function(A& g){
//         cout<<"private of A is:"<<g.a<<endl;
//     }
// };
// int main(){
//     A a;
//     demo obj;
//     obj.function(a);
// }
class A{
    int i;
    public:
    A(int a){
        i=a;

    }
    int setint(){
        return i;
    }
    friend void xyz(A& s){//Friend function is not memeber of classA
        cout<<"private variable of A class is:"<<s.setint();
    }
};
int main(){
    A obj(5);
    obj.setint();
    xyz(obj);
}