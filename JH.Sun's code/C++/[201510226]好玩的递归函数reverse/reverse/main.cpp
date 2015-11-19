#include <iostream>

using namespace std;

void reverse();

int main()
{
    cout << "Next character or * to stop:";
    reverse();
    cout<<endl;
    return 0;
}
void reverse()
{
    char next;

    cin >> next;
    if(next != '*'){
        reverse();
        cout << next<<" ";
        }
}
