#include<iostream>
using namespace std;
const int row = 4;
const int col = 4;
int findHourGlassSum(int mat[row][col]){
   if (row<3 || col<3)
      return -1;
   int maxSum = 0;
   for (int i=0; i<row-2; i++){
      for (int j=0; j<col-2; j++){
         int hrSum = (mat[i][j]+mat[i][j+1]+mat[i][j+2])+ (mat[i+1][j+1])+ (mat[i+2][j]+mat[i+2][j+1]+mat[i+2][j+2]);
         maxSum = max(maxSum, hrSum);
      }
   }
   return maxSum;
}
int main() {
   int mat[row][col] = {
      {2, 4, 0, 0},
      {0, 1, 1, 0},
      {4, 2, 1, 0},
      {0, 3, 0, 1}};
      int maxSum = findHourGlassSum(mat);
      if (maxSum == -1)
         cout<<"Not possible";
      else
         cout<<"Maximum sum of hour glass created is "<<maxSum;
      return 0;
}