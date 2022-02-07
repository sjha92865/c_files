/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int paths(int m,int n){
    // Reference table to store subproblems.
    int dp[m][n];                   

    // Paths to reach a cell in column 1.
    for (int i = 0; i < m; i++) {   
        dp[i][0] = 1; 
    }

    // Paths to reach a cell in row 1.
    for (int j = 0; j < n; j++) {   
        dp[0][j] = 1; 
    }       

    // Bottom up approach.
    for (int i = 1; i < m; i++) {   
        for (int j = 1; j < n; j++) { 
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];  
        }
    } 

    // Returning answer.
    return dp[m - 1][n - 1];        
}

int main()
{
    int m=4;
    int n=4;
    cout<<"Number of paths is: "<<paths(m,n);
}
