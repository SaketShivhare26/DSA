/*
The basic idea of this approach is to print the elements row-wise. The elements are printed in two ways; top-down and bottom-up. It has been observed that the odd rows are printed in a bottom-up manner, and even ones are printed in a top-down manner. We will use two loops, the first loop will iterate through the number of columns, and the second loop will print the element row-wise.

 

Here is the algorithm:

 

Run a loop from ‘I’ = 0 to ‘M_COL’ (Number of columns given)
If the current row is even, then the elements will be printed from top to bottom.
Run an inner loop from ‘J’ = 0 to ‘N_ROW’ (Number of rows given)
Print all the elements.
Else if the current row is odd, then the elements will be printed from bottom to top.
Run another loop from ‘J’ = ‘N_ROWS - 1’ to 0.
Print all the elements.
Time Complexity
O(N * M), where N is the number of rows and M is the number of columns.

 

Because we are iterating to every element of the given matrix, as N * M elements present in the matrix, the time complexity is O(N * M).

Space Complexity
O(M*N), where N is the number of rows and M is the number of columns.

 

Because we are storing all the elements in a vector, as the total number of elements in the given matrix is M*N, hence the space complexity is O(M*N).


*/


#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> ans;
    for(int col=0; col<mCols; col++){
        if(col&1){
            //odd Index:  bottom to up
            for(int row=nRows-1; row>=0; row--)
                ans.push_back(arr[row][col]);
        }
        else{
            // Even Index: up to bottom
            for(int row=0; row<nRows; row++){
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
