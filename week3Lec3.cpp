#include <iostream>
using namespace std;

void printArray(int arr[3][3], int row, int col )
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
}

//(1.) Row-Sum Print
void printRowWiseSum(int arr[][3], int row, int col)    //we only blank row, col should mention in parameter
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }
    
}

//(2.) Find Key {LINEAR SEARCH}
bool findKey(int arr[3][3], int row, int col, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
            
        }
        
    }
    
    //value in not present
    return 0;
}

//(3.) Find max number in 2D-array
int findMax(int arr[][3], int row, int col)
{
    int max_num = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max_num)
            {
                max_num = arr[i][j];
            }
            
        }
        
    }
    return max_num;
}

int transposeArray(int arr[][3],int row, int col, int trans [col][row]) //here we don't change in original matrix
                                                                        //but we make another matrix which
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            trans[j][i] = arr[i][j];
        }
        
    }
    
}

int main()
{
    //initialization
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    // //access of element {col-wise}
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    //printColWiseSum(arr,3,3);

    //cout << findKey(arr,3,3,12 );

    int trans[3][3];

    transposeArray(arr,3,3,trans);

    printArray(trans,3,3) ;


    return 0;
}