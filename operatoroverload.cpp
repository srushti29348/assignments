#include <iostream>
using namespace std;

class Complex {
    int real;
    int img;
public:
    // Parameterized constructor
    Complex(int r, int i) {
        real = r;
        img = i;
    }

    // Default constructor (needed for temp object)
    Complex() {
        real = 0;
        img = 0;
    }

    // Operator overloading for +
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = this->real + c.real;
        temp.img = this->img + c.img;
        return temp;
    }

    void display() {
        cout << real << " + " << img << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);
    Complex c3 = c1 + c2;   // operator+ called
    c3.display();
    return 0;
}
















// #include<iostream>
// using namespace std;
// class Complex{
//     int real;
//     int img;
//     public:
//     Complex(){
//         real=0;
//         img=0;
//     }
//     Complex(int,int);
//     Complex operator+(Complex);
//     void display(){
//         cout<<real<<"+"<<img<<"i";
//     }


// }
// Complex::Complex(int r,int i){
//     real=r;
//     img=i;
// }
// Complex Complex::operator(Complex c){
//     Complex temp;
//     temp.real=this->real+c.real;
//     temp.img=this->img+c.img;
//     return temp;
// }
// int main{
//     Complex c1(3,4);
//     Complex c2(1,2);
//     c3=c1+c2;
//     c3.display();
// }

