#include <iostream>
#include <vector>
using namespace std;


        // (1.) K-Diff Pairs In An Array    [L.C. 532]
int bs(vector<int> arr, int s, int k)
{
    int e=arr.size()-1;
    while(s<=e)
    {
        int mid=(s+e) >> 1;
        if(arr[mid]==k)
            return mid;
        else if(k>arr[mid])
            s=mid+1;
        else
            e=mid-1;
    }
    return -1;
}

int findPairs(vector<int>& arr, int k) {
    sort(arr.begin(),arr.end());
    set<pair<int,int>> ans;
    
    for(int i=0; i<arr.size()-1; i++)
    {
        if(bs(arr, i+1, k+arr[i]) != -1)
            ans.insert({arr[i],arr[i]+k});
    }
    return ans.size();
 }



        //(2.)  Find K-Closest Element  [L.C. 658]

    int lowerBound(vector<int>&arr, int x)
    {
        int s=0, e=arr.size()-1;
        int ans=e;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(arr[mid] >= x)
            {   //store ans and left search
                ans=mid;
                e=mid-1;
            }
            else    s=mid+1;
        }
        return ans;
    }

    vector<int> bs_approch(vector<int>&arr, int k, int x)
    {
        int h=lowerBound(arr,x);
        int l=h-1;
        while(k--)
        {
            if(l<0) h++;
            else if(h>=arr.size())   l--;
            else if(x-arr[l]>arr[h]-x)  h++;
            else    l--;
        }

        return vector<int> (arr.begin()+l+1, arr.begin()+h);
    }

    vector<int> twoPointer(vector<int> &arr, int k, int x)
    {
        int l=0, h=arr.size()-1;
        while(h-l>=k)
        {
            if(x-arr[l]>arr[h]-x)   l++;
            else    h--;
        }
        
        return vector<int> (arr.begin()+l, arr.begin()+h+1);
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // return twoPointer(arr, k, x);    //approch 1
        return bs_approch(arr, k, x);
    }


        //(3.)  Book Allocation Problem [GFG]

bool possibleSolution(int A[], int N, int M, int sol)
    {
        int pageSum=0;
        int count=1;
        
        for(int i=0; i<N; i++)
        {
            if(A[i]>sol)    return false;
            if( pageSum + A[i] > sol)
            {
                pageSum=A[i];
                count++;
                if(count>M) return false;
            }
            else    pageSum += A[i];
        }
        return true;
    }
    
    int findPages(int A[], int N, int M) 
    {
        if(M>N) return -1;
        
        int start=0;
        int end=accumulate(A, A+N, 0);
        int ans=-1;
        
        while(start<=end)
        {
            int mid=(start+end) >> 1;   //means mid=(s+e)/2
            if(possibleSolution(A,N,M,mid))
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        
        return ans;
    }




        //(4.)  Painters Partition Problem  [GFG]
bool possibleSol(int arr[], int n, int k, long long sol)
    {
        long long paintTime=0;
        int count=1;
        
        for(int i=0; i<n; i++)
        {
            if (arr[i]>sol)  return false;
            if(paintTime+arr[i] > sol)
            {
                paintTime=arr[i];
                count++;
                if(count>k) return false;
            }
            else    paintTime += arr[i];
        }
        return true;
    }
  
    long long minTime(int arr[], int n, int k)
    {
        long long start=0;
        long long end=0;
        for(int i=0; i<n; i++)
        {
            end += arr[i];
        }
        
        long long ans=-1;
        
        while(start<=end)
        {
            long long mid=start+(end-start)/2;
            if(possibleSol(arr, n, k, mid))
            {
                ans=mid;
                end=mid-1;
            }
            else    start=mid+1;
        }
        
        return ans;
    }




        //(5.)  Aggresive Cows

bool possibleSol(int n,int k,vector<int> stalls, int mid)
{
    int count = 1;
    int position = stalls[0];
    
    for(int i=0; i<n; i++)
    {
        if(stalls[i] - position >= mid)
        {
            count++;
            position = stalls[i];
        }
        if(count == k) return true;
    }
    return false;
}

    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(), stalls.end());
        int ans=-1;
        int start=0; 
        int end=stalls[n-1]-stalls[0];
        
        while(start<=end)
        {
            int mid=(start+end) >> 1;
            if(possibleSol(n, k, stalls, mid))
            {
                ans=mid;
                start = mid+1;
            }
            else    end = mid-1;
        }
        
        return ans;
    }




        //(6.)  EKO SPOJ

bool possibleSol(vector<long long int> trees, long long int m, long long int mid)
{
  long long totalWood = 0;
  for(int i=0; i<trees.size(); i++)
  {
    long long diff = trees[i]-mid;
    if(diff>0)  totalWood += diff;
  }
  if(totalWood >= m)  return true;
  return false;
}

long long int maxSawBladeHeight(vector<long long int> trees, long long int m)
{
  long long start=0;
  long long end=  *max_element(trees.begin(), trees.end());
  long long ans=-1;

  while(start <= end)
  {
    long long int mid = start + (end - start) / 2;
    if(possibleSol(trees, m, mid))
    {
      ans=mid;
      start = mid+1;
    }
    else  end = mid-1;
  }

  return ans;
}







        //(7.)  PRATA SPOI

bool possibleSol(vector<int> cookRanks, int P, int mid)
{

}

int 


int main()
{


    return 0;
}