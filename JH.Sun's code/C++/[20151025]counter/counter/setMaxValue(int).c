
#include "counter.h"
#include<iostream>
#include<climits>
using namespace std;
void counter::setMaxValue(int val)
{
    if(val >= 0 && val <= INT_MAX)
        maxValue = val;
    else
        cerr<<"New maxValue is out of range"<<endl;
}
