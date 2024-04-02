/*                       //LINEAR SEARCH BASIC EXAMPLE
#include <iostream>
using namespace std;

//linear search example 
bool findKey(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
        
    }
    //not found
    return false;
}

int main()
{
    //linear search
    int arr[7]= {2,3,6,9,4,7,8};
    int size = 7;

    cout << "Enter the key to you want to find in array : ";
    int key;
    cin >> key;


                    // Method 1: by using function
    // if(findKey(arr,size,key))
    // {
    //     cout << "Key found" << endl;
    // }
    // else
    // {
    //     cout << "Key not found" << endl;
    // }


                    // Method 2: by without using fuction
    bool flag = 0;  
    // 0 -> not found
    // 1 -> found

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
        }
        
    }
    if (flag == 1)
    {
        cout << "key found" << endl;
    }
    else
    {
        cout << "key not found" << endl;
    }
    





    return 0;
}
*/


/*                //(1.)      Count 0's and 1's in Array
#include <iostream>
using namespace std;



int main()
{
    int arr[] = {0,1,1,1,0,0,1,0,0,0,0,1,0,1,0,1,1,0,0,1};
    int size = 20;

    //Initialize count's to 0
    int counZero =0,counOne = 0;
    
    //Linear Search
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            counZero++;
        }
        if (arr[i] == 1)
        {
            counOne++;
        }
        
    }

    cout << "The number of Zero in array is " << counZero << endl;
    cout << "The number of One in array is " << counOne << endl;
    

    return 0;
}
*/



/*                    //(2.)      Maximum number is an Array
#include <iostream>
#include <limits.h>
using namespace std;



int main()
{
    int arr[] = {2,4,6,1,3,7,9,12,56,43,21};
    int size = 11;

    //initialize maximum number to 0
    int maxNum = INT_MIN;

    // Linear search
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
    }
    
    cout << "the maximum number in an array is " << maxNum << endl;

    return 0;
}
*/


/*                    //(3.)      Extreme point in Array
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30,40,50,60,70};
    int size = 7;

    //intialize start AND end
    int start = 0;
    int end = size-1;

    while (start<=end)
    {
        if (start == end)
        {
            cout << arr[end] << " ";
        }
        else
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }
        start++;
        end--;
    }
    cout << endl;

    return 0;
}
*/



/*                  //(4.)      Reverse an Array:
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30,40,50,60,70};
    int size = 7;

    //initialize start and end
    int start = 0;
    int end = size-1;

    //code for swap
    while (start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
    //print reversed array

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
            
        for(auto a : arr )           //auto -> automatically consider right datatype
        {
            cout << a << " ";
        }
            
    cout << endl;

    return 0;
}
*/





// ------>>>    downward code was copied by a github reposetory

#include<iostream>
#include<limits.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<' ';
    }
    cout<<'\n';
}

void inc(int arr[], int size){
    arr[0] = arr[0]+10;
    printArray(arr, size);
}

bool linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(key == arr[i])
            return true;
    }
    return false;
}

void cnt0sAnd1s(int arr[], int n){
    int cnt0 = 0;
    int cnt1 = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==0)
            cnt0++;
        else if(arr[i]==1)
            cnt1++;
    }
    cout << "number of zeroes-> " << cnt0 <<'\n';
    cout << "number of ones-> " << cnt1 <<'\n';
}

int getMax(int arr[], int n){
    int ans = INT_MIN;
    for(int i=0;  i<n; i++){
        if(arr[i]>ans)
            ans = arr[i];
    }
    return ans;
}

int getMin(int arr[], int n){
    int ans = INT_MAX;
    for(int i=0;  i<n; i++){
        if(arr[i]<ans)
            ans = arr[i];
    }
    return ans;
}

void printExtreme(int arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(s==e)
            cout<<arr[s];
        else
            cout<<arr[s]<<' '<<arr[e]<<' ';
        s++;
        e--;
    }
}

void reverseArray(int arr[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(arr[s++], arr[e--]);
    }
}

int main(){

    /*// declaration
        int arr[7];
        cout<<arr<<'\n';
        cout<<&arr<<'\n';
    */

    /*// initialisation
        int arr1[] = {2,3,4,6,7};
        int arr2[5] = {2,3,4,6,7};
        int arr3[10] = {2,3,4,6,7};
        // int arr4[4] = {2,3,4,6,7};
    */

    /*// index and access in array
        int arr[] = {1,3,5,7,9};
        cout<<arr[2]<<'\n';

        for(int i=0; i<5; i++){
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
    */

    /*// taking input in array
        int arr[10];
        for(int i=0; i<10; i++){
            cin >> arr[i];
        }
        for(int i=0; i<10; i++){
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
    */

    /*// take n elements and print their doubles 
        int arr[500];
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            cout<<2*arr[i]<<' ';
        }
        cout<<'\n';
    */

    /*// make all items of an array to 1
        int arr[500];
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            arr[i]=1;
        }
        for(int i=0; i<n; i++){
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
    */

    /*// remaining values will be 0
        int arr[10]={1,2};
        for(int i=0; i<10; i++){
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
    */

    /*// declaration
        int arr[10];
        for(int i=0; i<10; i++){
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
    */

    /*// functions and array    pass by reference
        int arr[] = {5,6};
        int size = 2;
        inc(arr,size);
        printArray(arr, size);
    */

    /*// linear search function
        int arr[]={1,6,2,3,73};
        int n=5;
        cout << "Key : ";
        int key;
        cin>>key;
        if(linearSearch(arr, n, key)){
            cout<<"present\n";
        }
        else{
            cout<<"absent\n";
        }
    */
    
    /*// linear search without function
        int arr[]={1,6,2,3,73};
        int n=5;
        int key;
        cin>>key;
        bool flag=false;
        for(int i=0; i<n; i++){
            if(key == arr[i]){
                flag = true;
                break;
            }
        }
        if(flag)
            cout<<"present\n";
        else
            cout<<"absent\n";
    */

    /*// count 0s and 1s in array
        int arr[] = {0,1,1,1,0,0,0,0,1,0,1,0,1,0,1,2,4,5,7};
        int n = 19;
        cnt0sAnd1s(arr, n);
    */

    /*// maximum number in an array
        int arr[] = {2,4,6,1,3,7,9,12,56,43,21};
        int n = 11;
        cout << getMax(arr, n) <<'\n';
    */

    /*// minimum number in an array
        int arr[] = {2,4,6,1,3,7,9,12,56,43,21};
        int n = 11;
        cout << getMin(arr, n) <<'\n';
    */

    /*// print extremes of an array
        int arr[] = {10,20,30,40,50,60,70};
        int n = 7;
        printExtreme(arr, n);
    */

    /*// reverse an array
        int arr[] = {10,20,30,40,50,60,70};
        int n = 7;
        reverseArray(arr, n);
        printArray(arr, n);
    */

    return 0;
}