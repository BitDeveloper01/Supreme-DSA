/*                  //(2.)      UNION           //giving error
#include <iostream>
#include <vector>
using namespace std;

vector<int> arrayUnion(vector<int> a, vector<int> b)
{
    vector<int> ans;

    //intersting vector a to ans
    for (int i = 0; i < a.size(); i++)
    {
        ans.push_back(a[i]);
    }

    //intersting vector b to ans
    for (int i = 0; i < b.size(); i++)
    {
        ans.push_back(b[i]);
    }
    return ans;
}

int main()
{
    
    //Push all element
    vector<int> a{1,3,5,7};
    vector<int> b{2,4,6};

    

    return 0;
}
*/




//                   //(3.)      INTERSECTION
// #include <iostream>
// #include <vector>
// #include <limits.h>
// using namespace std;


// int main()
// {
//     vector<int> arr{1,2,3,3,4,6,8};
//     vector<int> brr{3,4,9,10};  
//     vector<int> ans;

//     //outer loop on arr vector
//     for(int i=0; i < arr.size(); i++)
//     {
//       //for every element, run loop on brr
//       for(int j=0; j<brr.size(); j++)
//       {
//         if(arr[i] == brr[j])
//         {
//           ans.push_back(arr[i]);
//           brr[j] = INT_MIN;
//         }
//       }
//     }
    
//     //print ans
//     for(auto value : ans)
//     {
//       cout << value << " ";
//     }

//     return 0;
// }


/*                  //(4.)      PAIR SUM (DUBLET)
#include <iostream>
#include <vector>
using namespace std;

int main()
{


    return 0;
}
*/


/*                  //(5.)      PAIR SUM (TRIPLET)
#include <iostream>
#include <vector>
using namespace std;

int main()
{


    return 0;
}
*/



/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> arr{10,20,30,40,50,60,70,80};

    for (int i = 0; i < arr.size; i++)
    {
        for (int j = 0; j < i-1; j++)
        {
            for (int k = 0; k < j-1; k++)
            {
                
            }
            
        }
        
    }
    


    return 0;
}

*/


/*                  //(7.)      SORTING 0's AND 1's in Array
#include <iostream>
#include <vector>
using namespace std;

int main()
{


    return 0;
}
*/



#include <iostream>
#include <vector>
using namespace std;

void vecInput(vector<int> v, int size)
{
    int element;
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        v.push_back(element);
    }
    
}

void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
}

//(1.)  Find Unique Element
int findUnique(vector<int> arr)
{
    int unique = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        unique = unique^arr[i];     //  XOR(^) one by one with all element
    }
    return unique;
}

//(2.)  Union of 2 Arrays
vector<int> unionArray(vector<int> a, vector<int> b)
{
    vector<int> ans;
    for (int i = 0; i < a.size(); i++)  
    {
        ans.push_back(a[i]);    //inserting vector a to ans 
    }
    for (int i = 0; i < b.size(); i++)
    {
        ans.push_back(b[i]);    //inserting vector a to ans 
    }

    return ans;
}

//(3.)  Intersection of 2 vector
vector<int> intersection(vector<int> arr, vector<int> brr)
{
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)    //every element of a traverse in array b
        {
            if (arr[i] == brr[j])
            {
                brr[j] = INT_MIN;
                ans.push_back(arr[i]);
            }
            
        }
        
    }
    return ans;
}

//(4.) Pair Sum
void pairSum(vector<int> arr, int sum)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i]+arr[j] == sum)
            {
                cout <<"(" <<arr[i] <<"," <<arr[j] <<") ";
            }
            
        }
        
    }
    
}

int main()
{
    
    vector<int> arr;
    for (int i = 1; i <= 4; i++)
    {
        arr.push_back(i);
    }

    vector<int> brr;
    for (int i = 2; i <= 6; i++)
    {
        brr.push_back(i);
    }
    
    printVector(intersection(arr,brr));

    cout << endl;

    return 0;
}