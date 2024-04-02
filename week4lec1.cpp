#include <iostream>
using namespace std;

int binarySearch(int *arr,int n, int t)    
{
    int s=0;    //s --> start
    int e=0;    //e --> end
    int m=s+(e-s)/2;    //m --> mid

    while(s<=e)
    {
        if(arr[m]==t)
        {
            return m;
        }
        else if( t <arr[m])
        {   //for incresing --> move left
            e = m-1;
        }
        else
        {   //for incresing --> move right
            s = m+1;
        }
        m=s+(e-s)/2;
    }
    return -1;
}

int fisrtOccur(vector<int> v, int target)     //for array just little change
{
/*  STL Function
    int ans = -1;
    lower_bound(v.begin(), v.end(), target);
    cout << ans-v.begin()
*/

    int s=0;
    int e=v.size()-1;
    int m=s+(e-s)/2;

    int ans=-1;

    while()
    {
        if(target==v[m])
        {   //1. store ans  //2. due to first occurence move left
            ans=m;
            e=m-1;
        }
        else if(target<v[m])
        {
            e=m-1;
        }
        else
        {
            s=e+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}

int lastOccur(vector<int> v, int target)
{
/*  STL Function
    int ans = -1;
    lower_bound(v.begin(), v.end(), target);
    cout << ans-v.begin()
*/

    int s=0;
    int e=v.size();
    int mid=s+(e-s)/2;

    int ans=-1;

    while(s<=e)
    {
        if(v[mid]==target)
        {   //target found but we want last ouccerence to get we move right
            ans = mid;
            s=m+1;
        }
        else if(target<v[mid])  //move left
            e=m-1;
        else
            s=m+1;

        m=s+(e-s)/2;
    }
    return ans;
}

int peakIndexInMountainArray(vector<int>& arr) 
{
    int s=0;
    int e=arr.size();
    int m=s+(e-s)/2;

    while(s<e)
    {
        if(arr[m]<arr[m+1])
            s=m+1;
        else
            e=m;
        
        m=s+(e-s)/2;
    }
    return s;
        
}

int main()
{

    return 0;
}