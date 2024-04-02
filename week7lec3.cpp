#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int>& vec, int i)
{
  //base case
  if(i >= vec.size()-1) return true;

  if(vec[i] > vec[i+1]) return false;

  return isSorted(vec, i+1);

}

int bs_recusion(vector<int>& arr, int start, int end, int& target)
{
  //base condition
  if(start > end) return -1;

  //processing
  int mid = (start + end)/2;
  if(target == arr[mid])  return mid;


  else if(target < arr[mid])  return bs_recusion(arr, start, mid-1, target);
  else  return bs_recusion(arr, mid+1, end, target);

  //   return (target<arr[mid]) ? bs_recursion(arr, start, mid-1, target) : bs_recursion(arr, mid+1, end, target);
}

int main() {
  vector<int> arr = {1,2,3,4,5,6,7,8,9};
  int n = arr.size();
  
  //Question no(1)
  cout << "Question no.(1)" << endl;
  int i = 0;  
  bool ans1 = isSorted(arr, i);
  if(ans1)  cout << "Array is sorted" <<endl;
  else  cout << "Array in not sorted" << endl;

  cout << endl << endl;  



  //Question no(2)
  cout << "Question no.(2)" << endl;
  int target = 7;
  int start = 0;
  int end = n-1;

  int ans2 = bs_recusion(arr, start, end, target);

  cout << "target present at index : " << ans2 << endl;
  cout << endl << endl;



  
  return 0;
}