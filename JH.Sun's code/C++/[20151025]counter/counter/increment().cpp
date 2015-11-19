
#include "counter.h"
#include<iostream>
#include<climits>
using namespace std;
void counter::increment(){

if(count<maxValue)
    count++;
    else
        cerr<<"Counter interflow,Increment ignored."<<endl;
}
