
// Problem Statement -

/***********

  There are 3 towers. Tower 1 has n disks, where n is a positive number. Tower 2 and 3 are empty.
  The disks are increasingly placed in terms of size such that the smallest disk is on top and largest disk is at bottom.
   You are required to -
        Print the instructions to move the disks.
        from tower 1 to tower 2 using tower 3 
        following the rules
              move 1 disk at a time.
              never place a smaller disk under a larger disk.
              you can only move a disk at the top.

***********/

/***
 Sample Input - 
              3
              10
              11
              12

 Sample Output - 1[10 -> 11]
                 2[10 -> 12]
                 1[11 -> 12]
                 3[10 -> 11]
                 1[12 -> 10]
                 2[12 -> 11]
                 1[10 -> 11]

 ***/



#include<iostream>
using namespace std;


void tOH(int n,int t1id,int t2id,int t3id){

// Base Case
if(n==0){
    return;
}

// Move n-1 disks from tower1 to tower3 using tower2 and print its instructions
tOH(n-1,t1id,t3id,t2id);

// Place nth disk from tower1 to tower 2
cout<<n<<"["<<t1id<<" -> "<<t2id<<"]"<<endl;

// Move n-1 disks from tower3 to tower2 using tower1 and print its instructions
tOH(n-1,t3id,t2id,t1id);

}

int main(){

    int numTowers;
    // numTowers represent number of towers
    cin>>numTowers;

    int n1,n2,n3;
    // n1,n2,n3 represents tower1, tower2, tower3
    cin>>n1>>n2>>n3;

   // Call to function toh(towerOfHanoi)
   tOH(numTowers,n1,n2,n3);

   return 0;

}

