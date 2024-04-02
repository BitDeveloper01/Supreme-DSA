#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int solve(vector<int> v, int target)
{
  //base case
  if(target == 0) return 0;
  if(target < 0)  return INT_MAX;

  //RR
  int mini = INT_MAX;
  for(int i=0; i<v.size(); i++)
    {
      int ans = solve(v, target - v[i]) + 1;

      // if(ans != INT_MAX)
      // {
      //   mini = min(ans, mini);
      // }
    }
    
    return mini;
}

int solve2(int n, int x, int y, int z)
{
    //base case
    if(n == 0)  return 0;
    if(n < 0)   return INT_MIN;

    //1 case solve kro
    int a = solve(n-x, x, y, z) + 1;
    int b = solve(n-y, x, y, z) + 1;
    int c = solve(n-z, x, y, z) + 1;
    
    int ans = max(a, max(b, c));

    return ans;
}

int main()
{


    return 0;
}