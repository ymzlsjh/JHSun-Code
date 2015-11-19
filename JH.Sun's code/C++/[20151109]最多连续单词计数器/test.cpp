#include<iostream>
#include<string>
#include<cstdio>
#include<cctype>
#include<vector>
#include<bitset>
#include<cmath>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    string preWord, currWord;
    string repWord;
    int currCnt = 0, maxCnt = 1;
    while(cin >> currWord){
        if(currWord == preWord)
            ++currCnt;
        else
        {
            if(currCnt > maxCnt){
                maxCnt = currCnt;
                repWord = preWord;
            }
            currCnt = 1;
        }
        preWord = currWord;
    }
    if(currCnt > maxCnt)
    {
        maxCnt = currCnt;
        repWord = preWord;
    }

    if(maxCnt != 1){
        cout << repWord << maxCnt << endl;
    }
    else{
        cout << "NO REPEAT!" << endl;
    }

}
