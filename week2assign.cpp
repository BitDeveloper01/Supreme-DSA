/*                        //(3.) Numeric Palindrome Equilateral Pyramid
                                    //         1
                                    //        121
                                    //       12321
                                    //      1234321
                                    //     123454321
                                    //    12345654321

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "n : ";
    cin >> n;

    int k=n;

    for (int row = 0; row < n; row++)
    {
        int c=1;
        for (int col = 0; col < k; col++)
        {
            //1. for space
            if (col<n-row-1)
            {
                cout << " ";
            }

            else if (col<n)
            {
                cout << c;
                c++;
            }
            else if (col==n)
            {
                c-=2;
                cout << c;
                c--;
            }
            else
            {
                cout << c;
                c--;
            }

        }

        k++;
        cout << endl;
    }

    return 0;
}
*/

/*                            //(4.) Solid Half Diamond
                                //      *
                                //      **
                                //      ***
                                //      ****
                                //      *****
                                //      ****
                                //      ***
                                //      **
                                //      *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "n : ";
    cin >> n;

    for (int i = 0; i < 2 * n - 1; i++)
    {
        int cond = 0;
        if (i < n)//Growing phase
        {
            cond=i;
        }
        else//Shrinking phase
        {
            cond=n-(i%n)-2;
        }
        for (int j = 0; j <= cond ; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
*/

/*                            //(5.) Fancy Patter #1
                        //       ********1********
                        //       *******2*2*******
                        //       ******3*3*3******
                        //       *****4*4*4*4*****
                        //       ****5*5*5*5*5****



#include <iostream>
#include <assert.h>     //for using assert condition
using namespace std;

int main()
{
    int n;
    cout << "n : ";
    cin >> n;

    assert(n<=9);

    for (int i = 0; i < n; i++)
    {
        int start_num_index = 8-i;
        int num_count = i+1;
        for (int j = 0; j < 17; j++)
        {
            if (j==start_num_index && num_count>0)
            {
                cout << i+1;
                start_num_index+=2 ;
                num_count--;
            }
            else
            {
                cout << "*";
            }

        }
        cout << endl;
    }


    return 0;
}
*/

//       1
//       2*3
//       4*5*6
//       7*8*9*10
//       7*8*9*10
//       4*5*6
//       2*3
//       1

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "n : ";
//     cin >> n;

//     int num = 1;        // because counting start from 1
//     //Growing Phase
//     for (int i = 0; i < n; i++)
//     {
//         int start_num_index = 0;        // because in every row number start with 0'th index
//         for (int j = 0; j < 2*i+1; j++)
//         {
//             if (j==start_num_index)
//             {
//                 cout << num;
//                 start_num_index+=2 ;    //  after printing next to next we have to print
//                 num++;      //after printing of every number number get increase by 1
//             }
//             else
//             {
//                 cout << "*";
//             }

//         }

//         cout << endl;
//     }

//     num--;

//     //Shinking Phase
//     for (int i = 0; i < n; i++)
//     {
//         int start_num_index = 0;
//         for (int j = 0; j < (2*n)-(2*i)-1; j++)
//         {
//             if (j==start_num_index)
//             {
//                 cout << num;
//                 start_num_index+=2 ;
//                 num--;
//             }
//             else
//             {
//                 cout <<"*";
//             }
//         }

//         cout << endl;
//     }

//     return 0;
// }

/*

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "n : ";
    cin >> n;

    int num=1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << num;
            num++;
        }

        cout << endl;
    }

    num = num-n;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n-i; j++)
        {
            cout << num;
            num++;
        }

        num = num - ((2*n)-(2*i)+1);
        cout << endl;
    }


    return 0;
}
*/

#include <iostream>
#include <math.h>
using namespace std;

//(13.) find factorial
long long int Factorial(int n)
{
    long long int fact = 1;
    for (int i = 1; i <= sqrt(n); i++)
    {
        fact = fact * i;
    }

    return fact;
}

//(14.) check for prime
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

//(15.) Print all Prime under n
void printPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}

//(16.) reverse the number with constraints
int reverse(int x)
{
    int ans = 0, rem = 0;

    if (x <= INT_MIN) // Constraints condition for less than int_min
    {
        return 0;
    }
    bool isNeg = false; // Condition for handling -ve number
    if (x < 0)
    {
        isNeg = true;
        x = -x;
    }

    while (x > 0)
    {
        if (x > INT_MAX / 10) // condition for handling INT_MAX constraints
        {
            return 0;
        }
        rem = x % 10;
        ans = ans * 10 + rem;
        x /= 10;
    }

    return isNeg ? -ans : ans;
}

//(16.) Set the Kth Bit
int setKthBit(int N, int K)
    {
        int mask = 1<<K;
        int ans=N|mask;
        return ans;
    } 

//(17.) Convert the Temperature
vector<double> convertTemperature(double celsius)
{
    double k = celsius + 273.15;
    double f = celsius*1.8 + 32.00;

    vector<double> v;
    v.push_back(k);
    v.push_back(f);
    return v;
}

int main()
{
    int n;
    cout << "n : ";
    cin >> n;

    cout << setKthBit(10,2);

    return 0;
}