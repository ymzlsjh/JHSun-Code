#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>(10,8);
   vector<int>::iterator iter = v.begin();
   vector<int>::iterator end = v.end();//返回指向向量中最后一个元素之后元素的迭代器
   while(iter != end)
   {
       *iter=9;
       ++iter;
   }

   for(vector<int>::const_iterator i=v.begin();i != v.end();++i)
    return 0;
}
