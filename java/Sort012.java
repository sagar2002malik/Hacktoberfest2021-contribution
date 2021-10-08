// Problem Statement -
// Given an array containing only 0's, 1's, and 2's. Sort the given array in increasing order and in linear time.

// Solution
import java.io.*;
import java.util.*;

public class Main {

  public static void sort012(int[] arr){
    //write your code here
    
    // Take 3 variables for defining regions for 0 , 1 and 2.
    int j=0; // 0 to j-1 -> 0's area
    int i=0; // j to i-1 -> 1's area
    int k=arr.length-1; // k+1 to end -> 2's area
    
    // Initially unknown area is i to k
    
    //  loop will run till there are unknowns left
    while(i<=k){
        if(arr[i]==1){
            i++;
        }
        else if(arr[i]==0){
            swap(arr,i,j);
            i++;j++;
        }
        else{
            swap(arr,i,k);
            k--;
        }
    }
    
  }

  // used for swapping ith and jth elements of array
  public static void swap(int[] arr, int i, int j) {
    System.out.println("Swapping index " + i + " and index " + j);
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  public static void print(int[] arr){
    for(int i = 0 ; i < arr.length; i++){
      System.out.println(arr[i]);
    }
  }
  public static void main(String[] args) throws Exception {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int[] arr = new int[n];
    for(int i = 0 ;i < n; i++){
      arr[i] = scn.nextInt();
    }
    sort012(arr);
    print(arr);
  }

}
