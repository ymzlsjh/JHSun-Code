#include<iostream>
#include<string>
#include<cstdio>
#include<cstdio>
#include<cctype>
#include<vector>
#include<bitset>
#include<cmath>
#define max_number 111183646
#define max_test (int)sqrt((double)max_number)
using namespace std;

int main(){
freopen("output.txt","r",stdout);
bitset<max_number+1> numbers;
numbers.set();//101ge 1
numbers[1] = 0;
for(int i(1); i!=max_test; i++)// ���ú�������������Ӳ���������ƽ��������С��������ӵ�������Χ
    {
    if(numbers[i]){
            for(int j(i*i); j<max_number; j+=i){//���ú�������������Ӳ���������ƽ��������С��������ӵ�������Χ
                    numbers[j]=0;
            }
    }
}
for(int i(1); i!=max_number; i++)
{
            if(numbers[i])
            cout<<i<<" ";

}






   return 0;
}
