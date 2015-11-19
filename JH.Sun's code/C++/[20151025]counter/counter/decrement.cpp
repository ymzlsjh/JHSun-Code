

#include "counter.h"
#include<iostream>
#include<climits>
using namespace std;
void counter::decrement(){
if (count>0)
    count--;
else
    cerr<<"Counter underflow.Decrement ignored."<<endl;
}
