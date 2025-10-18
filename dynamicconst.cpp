#include<iostream>
#include<string.h>
using namespace std;
class String1{
    int len;
    char *ptr;
    public:
    String1(){
        len=1;
        ptr=new char;
        *ptr='A';

    }
    String1(char *sptr){
        len=strlen(sptr);
        ptr=new char(len+1);
        strcpy(ptr,sptr);
    }
    String1(int len){
        this->len=len;
        ptr=new char(len+1);
        cout<<"enter name:\n";
        cin>>ptr;
    }
    void display(){
        if(len==1){
        cout<<"lenght is:"<<len<<endl;
        cout<<"name is :"<<*ptr<<endl;
        }
        else{
        cout<<"lenght is:"<<len<<endl;
        cout<<"name is :"<<ptr<<endl;
        }
    }
};
int main(){
    String1 s1;
    s1.display();
    char s[10]="rahul";
    String1 s2(s);
    s2.display();
    String1 s3(4);
    s3.display();

}