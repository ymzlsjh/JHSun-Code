#include"dummy.h"
#include<iostream>
using namespace std;

template <class T>
dummy<T>::dummy(){
defined = false;
}

template <class T>
void dummy<T>::setItem(const T& aVal)
{
    item=aVal;
    defined=true;
}

template <class T>
T dummy<T>::getItem() const
{
    if(defined)
        return item;
    else
        cerr<<"ERROR-NO VALUE STORED!"<<endl;
}

