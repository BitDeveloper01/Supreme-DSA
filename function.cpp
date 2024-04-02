#include <iostream>

using namespace std;

float circleArea(float rad)     
{
    return (22/7.0)*(22/7.0)*rad;
}

void oddEven(int n)
{
    if(n%2 == 0)
    {
        cout << "n is even number";
    }
    else
    {
        cout << "n is odd number";
    }
}

int factorial(int n)
{
    int ans = 1;
    for (int num = 2; num <= n ; num++)
    {
        ans = ans * num;
    }
    return ans;
}

void checkprime(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            count++;
        }
    }
    if(count>0){
        cout << "number is not prime";
    }
    else{
        cout << "number is prime";
    }

}

int main()
{
    int n;
    cout << "n : ";
    cin >> n;
    checkprime(n);

    return 0;
}





