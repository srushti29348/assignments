#include<iostream>
using namespace std;
class Employee{
    int id;
    public:
    Employee();
    Employee(int);
    void display();
    int findsalay(){
        return 0;
    }
};
Employee::Employee(){
    cout<<"in defualt of employee \n";
    id=0;
}
Employee::Employee(int i){
    cout<<"this  is parametrize of employee \n";
    id=i;
}
void Employee::display(){
    cout<<"id of an employee is:"<<id;
}
class Wageemployee:public Employee{
    public:
    int hour;
    int rate;
    Wageemployee();
    Wageemployee(int i,int h,int r);
    virtual int getsalary();
    virtual void display();
};
Wageemployee::Wageemployee(){
    hour=0;
    rate=0;
}
Wageemployee::Wageemployee(int i,int h,int r):Employee(i){
    cout<<"This is parametrized Wageemployee "<<endl;
    hour=h;
    rate=r;
}
int Wageemployee::getsalary(){
    return hour*rate;
}
void Wageemployee::display(){
    Employee::display();
    cout<<hour;
    cout<<rate;
};
int main(){
    Employee *ptr=new Wageemployee(1,5,100);
    // Wageemployee e1(1,5,100);
    // ptr=&e1;
    cout<<"salary is"<<ptr->findsalay()<<endl;
    ptr->display();
}