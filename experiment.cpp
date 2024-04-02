#include <iostream>
using namespace std;

bool isEven(int n)
{
    if ((n&1) == 0)
        return true;
    else
        return false;
    
}

int main()
{
    int n;
    cin >> n;
    cout << isEven(n);
    cout << endl;
    
    return 0;
}