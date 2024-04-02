#include <iostream>
using namespace std;

int main()
{
    /*                      //(1.) SOLID RECTANGLE
                            //      *******
                            //      *******
                            //      *******       
    int rows,cols;  
    cout << "Enter the row and column for SOLID RECTANGLE pattern" << endl;
    cout << "Row : ";
    cin >> rows;
    cout << "Column : ";
    cin >> cols;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    */

    /*                    //(2.)  HOLLOW RECTANGLE
                                //    *******
                                //    *     *
                                //    *******

    int rows, cols;
    cout << "Enter the row and column for HOLLOW RECTANGLE pattern" << endl;
    cout << "Row : ";
    cin >> rows;
    cout << "Column : ";
    cin >> cols;

    for (int row = 0; row < rows; row++)
    {
        if (row == 0 || row == (rows - 1))
        {
            for (int col = 0; col < cols; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int col = 0; col < cols - 2; col++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
        }
    */


    /*                        //(3.)  HALF PYRAMID
                                //    *
                                //    * *
                                //    * * *
    int rows, cols;
    cout << "Enter the how much row of HALF PYRAMID you want : " << endl;
    cout << "Row : ";
    cin >> rows;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    */



    /*                        //(4.)  INVERTED HALF PYRAMID
                                    //    * * *
                                    //    * *
                                    //    * 
    int rows, cols;
    cout << "Enter the how much row of INVERTED HALF PYRAMID you want : " << endl;
    cout << "Row : ";
    cin >> rows;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < rows - row ; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    */

    /*                        //(5.)  NUMERIC HALF PYRAMID
                                    //    1
                                    //    1 2 
                                    //    1 2 3 
                                    //    1 2 3 4
    int rows, cols;
    cout << "Enter the how much row of NUMERIC HALF PYRAMID you want : " << endl;
    cout << "Row : ";
    cin >> rows;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << (col+1) << " " ;
        }
        cout << endl;
    }
    */


    /*                        //(6.)  NUMERIC INVERTED HALF PYRAMID
                                //    1 2 3 4
                                //    1 2 3
                                //    1 2
                                //    1
    int rows, cols;
    cout << "Enter the how much row of NUMERIC INVERTED HALF PYRAMID you want : " << endl;
    cout << "Row : ";
    cin >> rows;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < rows - row ; col++)
        {
            cout << col+1 << " ";
        }
        cout << endl;
    } 
    */


/*
                            //(7.)  FULL PYRAMID
                                //            *
                                //           * *
                                //          * * *
                                //         * * * *
    cout << "Enter how much rows of FULL PYRAMID you want : ";
    int size;
    cin >> size;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size-row-1; col ++)
        {
            cout << " ";
        }
        for (int col = 0; col < row; col++)
        {
            cout << "* ";
        }
        cout << "*";
        cout << endl;
    }
*/    


     
    /*                      //(8.)  NUMERIC FULL PYRAMID
                            //            1
                            //          2 3 2
                            //        3 4 5 4 3
                            //      4 5 6 7 6 5 4

    cout << "Enter how much rows of NUMERIC FULL PYRAMID you want : ";
    int rows;
    cin >> rows;
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < rows-row-1; col ++)
        {
            cout << "  ";
        }
        for (int col = 0; col < row+1; col++)
        {
            cout << (row+1)+col << " ";
        }
        for (int col = 0; col < row; col++)
        {
            cout << 2*row-col << " ";
        }
        cout << endl;
    }
*/


/*
                          //(8.)  NUMERIC FULL HOLLOW PYRAMID
                                //            1
                                //           1 2
                                //          1   3
                                //         1     4
                                //        1 2 3 4 5
    cout << "Enter how much rows of NUMERIC FULL HOLLOW PYRAMID you want : ";
    int size;
    cin >> size;

    for (int row = 0; row < size; row++)
    {
        if (row == size-1 )
        {
            for (int col = 0; col < row+1; col++)
            {
                cout << (col+1) << " ";
            }
            
        }
        else
        {
            for (int col = 0; col < (size-1)-row; col++)
            {
                cout << " ";
            }
            cout << "1";
            for (int col = 0; col < (2*row)-1; col++)
            {
                cout << " ";
            }
            if (row != 0)
            {
                cout << (row+1);
            }
            
            
            
        }
        cout << endl;
    }
*/



/*                      //(9.) CROSS PATTERN
    cout << "size : ";
    int size;
    cin >> size;

    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            if ( row==col || row+col==size-1 )
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
*/


/*                          
                    //(10.) DIAMOND PATTERN
//                                 *                            *
//                                * *                          * *
//                               * * *                        * * * 
//                              * * * *                      * * * *
//         here n= 5           * * * * *                    * * * * *
//                             * * * * *                     * * * *
//                              * * * *                       * * *
//                               * * *                         * *                       
//                                * *                           *
//                                 * 

    



    int size,temp;
    cout << "enter size : ";
    cin >> size;
    //upper pyramid
    for (int row = 0; row < size; row++)
    {
        //space
        for (int col = 0; col < size-row-1; col++)
        {
            cout << " ";
        }
        //for star pattern
        for (int col = 0; col < row+1; col++)
        {
            cout << "* ";
        }
        
        cout << endl;
    }
    
    //down pyramid
    for (int row = 0; row < size-1; row++)
    {
        //for space
        for (int col = 0; col < row; col++)     //NOTE : For prober diamond col < row+1
        {
            cout << " ";
        }
        //for star
        for (int col = 0; col < size-row; col++)   //NOTE : For prober diamond col < n-row-1
        {
            cout << "* ";
        }
        

        cout << endl;
    }
*/

/*
               //(11.) HOLLOW DIAMOND PATTERN
//                       *                           *
//                      * *                         * *
//                     *   *                       *   *
//  HERE size = 4     *     *        OR           *     *
//                    *     *                      *   *
//                     *   *                        * *
//                      * *                          *
//                       *

    
    cout << " enter the size of hollow diamond you want : ";
    int size;
    cin >> size;

    //for upper portion
    for (int row = 0; row < size; row++)
    {
        //for space
        for (int col = 0; col < size-row-1; col++)
        {
            cout << " ";
        }
        //for star
        for (int col = 0; col < 2*row+1; col++)
        {
            if (col==0 || col == 2*row )
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        
        cout << endl;
    }

    //for down portion
    for (int row = 0; row < size; row++)
    {
        //for space
        for (int col = 0; col < row; col++)         //NOTE : For proper hollow diamond col < row+1
        {
            cout << " ";
        }
        //for star
        for (int col = 0; col < 2*size-2*row-1; col++)      //NOTE : For proper hollow diamond col < 2*size-2*row-3
        {
            if (col==0 || col == 2*size-2*row-2)            //NOTE : For proper hollow diamond col(2nd wala) == 2*size-2*row-4
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        
        cout << endl;
    }
*/

/*
                               //(12.) FLIPPED SOLID DIAMOND 
//                                          **** ****                     
//                                          ***   ***                     
//                                          **     **                     
//                  HERE size = 4           *       *
//                                                              
//                                          *       *                    
//                                          **     **                    
//                                          ***   ***                    
//                                          **** ****

    
    cout << " enter the size of hollow diamond you want : ";
    int size;
    cin >> size;

    //for upper portion
    for (int row = 0; row < size; row++)
    {
        //for left star part
        for (int col = 0; col < size-row; col++)
        {
            cout << "*";
        }
        //for space
        for (int col = 0; col < 2*row+1; col++)
        {
            cout << " ";
        }
        //for right star part
        for (int col = 0; col < size-row; col++)
        {
            cout << "*";
        }
        
        
        cout << endl;
    }

    cout << endl;   //for extra line

    //for down portion
    for (int row = 0; row < size; row++)
    {
        //for left star part
        for (int col = 0; col < row+1; col++)
        {
            cout << "*";
        }
        //for space
        for (int col = 0; col < 2*size-2*row-1; col++)
        {
            cout << " ";
        }
        //for right star part
        for (int col = 0; col < row+1; col++)
        {
            cout << "*";
        }
        
        
        cout << endl;
    }
*/


/*
                         //(13.)    FANCY PATTERN   
//                                        1
//                                        2*2
//                                        3*3*3
//             HERE n = 4                 4*4*4*4
//                                        4*4*4*4
//                                        3*3*3
//                                        2*2
//                                        1

    cout << "Enter the size of this fancy pattern you want : ";
    int size;
    cin >> size;

    //for upper portion
    for (int row = 0; row < size; row++)
    {   
        //for number of element in column
        for (int col = 0; col < row+1; col++)
        {
            if (col == row)
            {
                cout << row+1;
            }
            else
            {
                cout << row+1 << "*";
            }
            
        }

        cout << endl;
    }

    //for down portion
    for (int row = 0; row < size; row++)
    {   
        //for number of element in column
        for (int col = 0; col < size-row; col++)
        {
            if (col == size-row-1)
            {
                cout << size-row;
            }
            else
            {
                cout << size-row << "*";
            }
            
        }

        cout << endl;
    }
*/ 
}


