#include <iostream>
#include <vector>
using namespace std;

int binarySearchInNearlySortedArray(vector<int> arr, int target)
{
    int s=0; 
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(arr[mid]==target)
            return mid;
        if(arr[mid-1]==target && mid-1>=s)
            return mid-1;
        if(arr[mid+1]==target && mid+1<=e)
            return mid+1;
        if(target>arr[mid]) //left search
            e=mid-2;
        else    // right search
            s=mid+2;
    }
}

int divideTwoNum(int divident, int divisor)
{
    int s=0;
    int e=abs(divident);     //bcoz search-space from 0 to divident
    int mid=s+(e-s)/2;
    
    int int_ans;

    while(s<=e)
    {
        //Perfect solution
        if(abs(mid*divisor) == abs(divident))   
            return mid;

        //Not Perfect solution
        if(abs(mid*divisor) < abs(divident))
        {                   //chota mila to right mai bada milega
            int_ans=mid;
            s=mid+1;
        }
        else
            e=mid-1;
        m=s+(e-s)/2;
    }
    //return ans with handling sign which we ignored upward
    if((divisor<0 && divident<0) || (divisor>0 && divident>0))
        return ans;
    else
        return -ans;

    //to handle decimal part --> same as we handle decimal part in square root case(week4Lec2)
    
}

int oddOccuringElement(int *arr, int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
       if(s==e)
        return mid;
        
       if(mid%2==0)
       {
            if(arr[mid]==arr[mid+1])
                s=mid+2;
            else
                e=mid;
       }
       else
       {
            if(arr[mid-1]==arr[mid])
                s=mid+1;
            else
                e=mid-1;
       }
       mid=s+(e-s)/2;
    }
    return -1;
}

int main()
{


    cout << divideTwoNum(22,7);

    return 0;
}