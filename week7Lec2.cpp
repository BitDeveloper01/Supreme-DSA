#include <iostream>
#include <limits>
using namespace std;

void print(int arr[], int size, int i)
{
  //base case
  if(i >= size)  return;

  //processing
  cout << arr[i] << " ";

  //Recursive relation
  print(arr, size, i+1);
}

void print_AlternateCode(int arr[], int size)
{
  //base case
  if(size <= 0) return;

  //processing
  cout << arr[0] << " ";

  //Recursive relation
  print_AlternateCode(arr+1, size-1);  // (arr+1) reason -->> move pointer in every call
}

void findMax(int arr[], int size, int i, int& maxi)
{
    //base case
    if(i >= size)   return;

    //processing
    if(arr[i] > maxi)   maxi = arr[i];

    //recursive relation
    findMax(arr, size, i+1, maxi);

}

void findMin(int arr[], int size, int i, int& mini)
{
    //base case
    if(i >= size)   return;

    //processing
    if(arr[i] < mini)   mini = arr[i];

    //recursive relation
    findMin(arr, size, i+1, mini);
}

bool checkKey(string& str, int i, char key)
{
  //base case
  if(i >= str.size()) return false;

  //processing 
  if(str[i] == key) return true;

  //recursive relation
  return checkKey(str, i+1, key);
}

void printDigit(int num)
{
    //base condition
    if(num == 0)    return;

    //recursive relation
    printDigit(num/10);

    //processing
    cout << num%10 << endl;
}



int main() {
  
  int arr[] = {10, 20 , 30, 40, 50};
  int size = sizeof(arr) / sizeof(int);
  int i = 0;

  //Question no.(2) {TRAVERSING ARRAY}
  cout << "Question no.(2)" << endl;
  print(arr, size, i);
  cout << endl;
  print_AlternateCode(arr, size);
  cout << endl << endl;




  //Question no.(3)     {FIND MAXIMUM ELEMENT IN ARRAY}
  cout << "Question no.(3)" << endl;
  int maxi = INT_MIN;
  i = 0;

  findMax(arr, size, i, maxi);
  cout << "Maximum element : "<< maxi << endl << endl;





  //Question no.(4)     {FIND MINIMUM ELEMENT IN ARRAY}
  cout << "Question no.(4)" << endl;

  int mini = INT_MAX;
  i = 0;

  findMin(arr, size, i, mini);
  cout << "Minimum element : "<< mini << endl;
  cout << endl << endl;



  //Question no.(5)     {CHECKING KEY IN STRING}
  cout << "Question no.(5)" << endl;

  string str = "lovebabbar";
  char key = 'a';
  i = 0;

  bool ans = checkKey(str, i, key);
  if(ans)   cout << "The key '" << key << "' found in string " << str;
  else cout << "key doesnot found";

  cout << endl << endl;

  //Question no.(6)     {FIND DIGITS OF A NUMBER}
  cout << "Question no.(6)" << endl;
  int num = 345;
  printDigit(num); 
  



  return 0;
}