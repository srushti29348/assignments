#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream my_file("abc.txt");
    // ofstream my_file("abc.txt",ios::in);
    my_file<<"hiiii"<<endl;
    my_file<<"I am srushti"<<endl;
    my_file.close();
}