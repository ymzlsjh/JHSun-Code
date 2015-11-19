#include <iostream>
#include "counter.h"
using namespace std;

int main()
{
    counter c1;
    counter c2(10);
    c1.setCount(50);
    c1.decrement();
    c1.decrement();
    c1.increment();
    cout<<"Final value of c1 is "<<c1.getCount()<<endl;
    c2.increment();
    c2.increment();
    c2.decrement();
    cout<<"Final value of c2 is "<<c2.getCount()<<endl;

    return 0;
}
