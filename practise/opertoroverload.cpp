#include<iostream>
using namespace std;
class Complex{
    public:
    int real;
    int img;
    Complex();
    Complex(int,int);
    Complex operator+(Complex&);
    Complex operator++();
    Complex operator++(int);

    void display();
};
Complex::Complex(){
    real=2;
    img=4;
}
Complex::Complex(int real,int img){
    this->real=real;
    this->img=img;
}
Complex Complex::operator+(Complex& c){
    Complex temp;
    temp.real=this->real+c.real;
    temp.img=this->img+c.img;
    return temp;
}
Complex Complex::operator++(){
    this->real=this->real+1;
    this->img=this->img+1;
    return (*this);
}
Complex Complex::operator++(int){
    Complex temp=(*this);//this return the old value which is actually for post
    this->real=this->real+1;
    this->img=this->img+1;
    return temp;
    
}
void Complex::display(){
    cout<<"Complex no is:"<<real<<"+"<<img<<"i"<<endl;
};
int main(){
    Complex c1(5,2);
    Complex c4=++c1;
    Complex c2(4,2);
    Complex c3=c1+c2;
    Complex c4=c1++;
    c4.display();
    c3.display();
}

