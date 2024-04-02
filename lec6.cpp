/*          //print counting 1 to n
#include <iostream>
using namespace std;

void printcounting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    
}

int main()
{
    int n;
    cout << "enter the number : ";
    cin >>n;
    printcounting(n);
}
*/


/*          // get grade according to marks
#include <iostream>
using namespace std;

char getGrade(int num)
{
    //          //by using if-elseif-else
    // if(num >= 90){
    //     return 'A';
    // }
    // else if(num >= 80){
    //     return 'B';
    // }
    // else if(num >= 70){
    //     return 'C';
    // }
    // else if(num >= 60){
    //     return 'D';
    // }
    // else{
    //     return 'E';
    // }

                //by using switch
    switch (num/10)
    {
    case 10:    return 'A';  break;
    case 9:    return 'A';  break;
    case 8:    return 'B';  break;
    case 7:    return 'C';  break;
    case 6:    return 'D';  break;
    default:    return 'E'  break;
    }
}

int main()
{
    int marks;
    cout << "marks : ";
    cin >> marks;
    char finalGrade = getGrade(marks);
    cout << finalGrade << endl;
}
*/

#include <iostream>
using namespace std;

int getSum(int n)
{
    int sum =0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int getEvenSum(int n)
{
    int sum =0;
    for (int i = 2; i <= n; i+=2)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int n;
    cout << "n : ";
    cin >> n;

    int sum = getSum(n);
    cout << "sum of all number "<< sum << endl;

    int evensum = getEvenSum(n);
    cout << "sum of all even number "<< evensum << endl;

    return 0;
}