#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string*> spvec;
    string str;
    while(cin >> str)
    {
    string *pstr = new string;
    *pstr = str;
    spvec.push_back(pstr);
    }

    vector<string*>::iterator iter = spvec.begin();
    while(iter != spvec.end())
    {
        cout << **iter++ << (**iter).size() << endl;
    }

    iter = spvec.begin();
    while(iter != spvec.end())
    {
        delete *iter++;
    }
    return 0;
}
