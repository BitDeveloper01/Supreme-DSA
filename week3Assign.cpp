#include <iostream>
using namespace std;

//(1.)  SORT COLOUR   ---{Leet Code 75}
void sortColour(vector<int> &nums)
{
    /*          //  Method --> 1  (By using sort library function)
        sort(nums.begin(), nums.end());
    */

    /*         //  Method --> 2 (Counting Method)
        int zero,one,two;
        zero=one=two=0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i]==0)
            {
                zero++;
            }
            else if (nums[i]==1)
            {
                zero++;
            }
            else
            {
                two++;
            }
        }

        //spread
        int i=0;
        while (zero--)
        {
            nums[i] = 0;
            i++;
        }
        while (one--)
        {
            nums[i] = 1;
            i++;
        }while (two--)
        {
            nums[i] = 2;
            i++;
        }
    */

    //  Method --> 3    (by 3 Pointers Approch)

    int l, m, h;
    l = m = 0, h = nums.size() - 1;
    while (m <= h)
    {
        if (nums[m] == 0)
        {
            swap(nums[m], nums[l]);
            m++;
            l++;
        }
        else if (nums[m] == 1)
        {
            m++;
        }
        else
        {
            swap(nums[m], nums[h]);
            h--;
        }
    }
}




//(2.)  Move all negative number to left without any increasing and decreasing order
void moveAllNegToLeft(int arr[], int n)
{
/*      //  Method --> 1
  int l=0,h=n-1;
  while (l<=h)
  {
    if(arr[l]>=0)
    {
      swap(arr[l],arr[h]);
      h--;
    }
    else
    {   // condition for negetive
      l++;
    }
  }
*/
        //  Method --> 2
    int l=0, h=n-1;
    while (l<h)
    {
        if(arr[l]<0)
        {
            l++;
        }
        else if(arr[h]>0)
        {
            h--;
        }
        else
        {
            swap(arr[l],arr[h]);
        }
    }

}




//(4.)  Duplicate Number
//  https://leetcode.com/problems/find-the-duplicate-number/
int duplicateNum(vector<int>& nums)
{

}

//(5.)  Find Missing Number
void findMissing(int *a, int n)
{
/*      //  Method --> 1    (Visiting Methodn)
  for(int i=0; i<n; i++)
  {
    int index = abs(a[i])-1;
    if(a[index]>0)
    {
      a[index] *= -1;
    }
  }

  for(int i=0; i<n; i++)
  {
    if(a[i]>0)
    {
      cout << i+1 << " ";
    }
  }
*/


}


//(6.)  vector<int> remove_duplicate(int A[], int n)
    {
        vector<int> ans;
        int i;
        for(i=0; i<n-1; i++)
        {
            if(A[i] != A[i+1])  ans.push_back(A[i]);
        }
        ans.push_back(A[i]);
        return ans;
    }
    vector<int> method_using_without_set(int A[], int B[], int C[], int n1, int n2, int n3)
    {
        vector<int> a = remove_duplicate(A, n1);
        vector<int> b = remove_duplicate(B, n2);
        vector<int> c = remove_duplicate(C, n3);

        int i,j,k;
        i=j=k=0;

        vector<int> ans;
        while(i<a.size() && j<b.size() && k<c.size())
        {
            if((a[i]==b[j]) && (b[j]==c[k]))
            {
                ans.push_back(a[i]);
                i++, j++, k++;
            }
            else if(a[i] < b[j])    i++;
            else if(b[j] < c[k])    j++;
            else    k++;
        }
        return ans;
    }

    vector<int> method_using_set(int A[], int B[], int C[], int n1, int n2, int n3)
    {
        vector<int> ans;
            set<int> st;
            int i, j, k;
            i=j=k=0;

            while(i<n1 && j<n2 && k<n3)
            {
                if((A[i]==B[j]) && (B[j]==C[k]))
                {
                    st.insert(A[i]);
                    i++, j++, k++;
                }
                else if(A[i] < B[j])    i++;
                else if(B[j] < C[k])    j++;
                else    k++;
            }

            for(auto i : st)   ans.push_back(i);
            return ans;
    }


    vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
    {
      return method_using_without_set(A,B,C,n1,n2,n3);
      //return method_using_set(A,B,C,n1,n2,n3);
    }

int main()
{

    return 0;
}
