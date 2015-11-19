#include<iostream>
#include<string>
#include<cstdio>
#include<cctype>
using namespace std;

int main(){
    const string ALPHABET="ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890abcdefghijklmnopqrstuvwxyz";
    const string password="dacbijhgfelkomnsrqpuvwtyzx0451926873UVWXYZABCDEFGHIJKLMNOPQRST";
   string message;
   char ch;
   int pos;
  getline(cin,message);
  for(int i=0;i!=message.length();i++)
  {
    ch=message.at(i);
    pos=ALPHABET.find(ch);
    if((pos>=0)&&(pos<=62))
        message[i]=password.at(pos);
  }
  cout<<message<<endl;
   return 0;
}
