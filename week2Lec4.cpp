#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinaryMethod1(int n)
{
    //Division Method
    int binaryno =0;
    int i=0;
    while(n>0)
    {
        int bit = (n%2);
        binaryno = bit*pow(10 ,i++) + binaryno;
        n=n/2;
    }
    
    return binaryno;
}

int decimalToBinaryMethod2(int n)
{
    //Bitwise Method
    int binaryno =0;
    int i=0;
    while(n>0)
    {
        int bit = (n&1);
        binaryno = bit*pow(10 ,i++) + binaryno;
        n=n>>1;
    }
    
    return binaryno;
}

int binaryToDecimalM1(int n)
{
    int decimal=0;
    int i=0;
    while (n)
    {
        int bit =(n%10);
        decimal = decimal + bit * pow(2,i++);
        n/=10;
    }
    

    return decimal;
}

int binaryToDecimalM2(int n)
{
    int decimal=0;
    int i=0;
    while (n)
    {
        int bit = (n&1);
        decimal = decimal + bit * pow(2,i++);
        n=n>>1;
    }
    

    return decimal;
}

int main()
{
    int n;
    cin >> n;
            //OUTPUT FOR decimal --> Binary
    // cout << decimalToBinaryMethod1(n) << endl;
    // cout << decimalToBinaryMethod2(n) << endl;

            //OUTPUT FOR Binary --> decimal
    cout << binaryToDecimalM1(n) << endl;
    cout << binaryToDecimalM2(n) << endl;

    return 0;
}