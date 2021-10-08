//SakhinetiPraveena
//Code for constructing a balanced binary search tree from the given array.
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
// As the given array is sorted, to construct balanced BST the mid element is taken as root

Node* ConstructBST(int arr[],int start, int end_){
    if(start>end_) return NULL;
    int mid=(start+end_)/2;
    Node * root=new Node(arr[mid]);
    root->left=ConstructBST(arr,start,mid-1);
    root->right=ConstructBST(arr,mid+1,end_);
    return root;
}

// Function to print the inorder of BST
void print_inorder(Node* root){
    if(root==NULL) return;
    if (root != NULL){
        print_inorder(root->left);
        cout << root->data <<" ";
        print_inorder(root->right);
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    Node* root=ConstructBST(arr,0,n-1);
    cout<<"Inorder for the BST is :";
    print_inorder(root);
}
