#include "counter.h"
#include<iostream>
#include<climits>
using namespace std;
void counter::setCount(int val){
    if(val>=0&&val<=maxValue)
        count = val;
    else
        cerr<<"New Value is out of range."<<endl;
}
