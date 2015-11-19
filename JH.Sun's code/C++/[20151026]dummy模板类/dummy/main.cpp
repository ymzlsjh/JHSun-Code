#include"dummy.h"
#include"dummy.cpp"
#include<iostream>
#include<string>
using namespace std;

dummy<int> numDepend;
dummy<string> spouseName;

int main(){

int num;
string name;
numDepend.setItem(2);
spouseName.setItem("lihua");

num = numDepend.getItem();
name = spouseName.getItem();
cout<<num<<endl;
cout<<name<<endl;
}
