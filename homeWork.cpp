/*               // Majority Element in an Array
#include <iostream>
#include <vector>
using namespace std;

int majority(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            
        }
        if (count > arr.size()/2)
        {
            return arr[i];
        }
        count = 0;
    }
    
}

int main()
{
    vector<int> arr{3,3,4,2,4,4,4,2,4,4};
    cout << majority(arr);
    

    return 0;
}
*/



                //  Buy and Sell Stock
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> prices{7,1,5,3,6,4};

    //for minimum element index of an array
    int minNum = INT_MAX;
    int index;
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < minNum)
        {
            minNum = prices[i];
            index = i;
        }
    }

    //max
    int maxNum = INT_MIN;
    for (int i = index; i < prices.size(); i++)
    {
        if (prices[i] > maxNum)
        {
            maxNum = prices[i];
        }
        
    }

    int profit = maxNum -minNum;
    cout << profit;
    
    

    return 0;
}