#include <iostream>
using namespace std;

int findPivot(int *arr, int n)  //condition for pivot :: array should be sorted and rotated
{
    int s=0; 
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e)
    {
        if(s==e)    // condtion for non-rotated array OR single element array
            return mid;
        if(arr[mid]>arr[mid+1] && mid+1 <= e)
            return mid;
        if(arr[mid-1]>arr[mid] && mid-1 >= s)
            return mid-1;
        if(arr[s]>arr[mid])   //mid on line 'b', so pivot on left side, so e=mid-1; 
            e=mid-1;
        else    //mid on line 'a', so pivot on left side, so e=mid-1; 
            s=mid+1;

        mid=s+(e-s)/2;
    }
    return -1;
}

double root(int n, int p)   //n:: number ,  P:: Presision
{
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;

    int int_ans;

    while(s<=e)
    {
        if(mid*mid==n)
            return mid;
        if(mid*mid<=n)
        {
            int_ans=mid;
            s=mid+1;
        }
        else
            e=mid-1;
        mid=s+(e-s)/2;
    }
    
    //condition for decimal part
    double ans=int_ans;
    double step=0.1;

    for(int i=0; i<p; i++)
    {
        for (double j=0; j*j<=n; j+=step)
        {
            ans=j;
        }
        step/=10;
    }
    return ans;
}

bool binarySearch2D(int arr[][4], int row, int col, int target)
{
    int s=0;
    int e=row*col-1;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        int rowIndex=mid/col;
        int colIndex=mid%col;
        
        if(arr[rowIndex][colIndex] == target)
            return true;
        if(arr[rowIndex][colIndex]<target)  //right search
            s=mid+1;
        else    //left search
            e=mid-1;
        mid=s+(e-s)/2;
    }
    return false;
}

int main()
{
    cout << root(10,3) << endl;
    return 0;
}