#include<bits/stdc++.h>
using namespace std;
#define n 8

bool isSafe(int chess[n][n], int row, int col){

    for(int j=0; j<col; j++){
        if(chess[row][j] == 1)
            return false;
    }

    for(int i=row,j=col; i<n,j>=0; i++,j--){
        if(chess[i][j] == 1)
            return false;
    }

    for(int i=row,j=col; i>=0,j>=0; i--,j--){
        if(chess[i][j] == 1)
            return false;
    }
    return true;

}

bool solveNQUtil(int chess[n][n], int col){

    if(col>=n)
        return true;
    for(int i=0; i<n; i++){
        if(isSafe(chess, i, col) == true){
            chess[i][col] = 1;
            if(solveNQUtil(chess, col+1) == true)
                return true;
            chess[i][col] = 0;
        }
    }
    return false;
}

void printChess(int chess[n][n]){

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<chess[i][j]<<" ";
        }
        cout<<endl;
    }

}

void solveNQ(int chess[n][n]){

    if(solveNQUtil(chess, 0) == false)
        cout<<"There is no solution for this problem"<<endl;
    cout<<"The solution for the problem is (the 1s denote the position of the queens) : "<<endl<<endl;
    printChess(chess);

}

int main(){

    int chess[n][n] = {

                        {0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0}

                    };


    cout<<endl<<endl;
    solveNQ(chess);
    cout<<endl<<endl;

    return 0;
}