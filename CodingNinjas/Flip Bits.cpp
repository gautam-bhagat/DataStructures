#include<iostream>
#include<algorithm>
using namespace std;

int kadane(int arr[],int n){
    int max_so_far=0, max_ending_here=0;
    for(int i=0; i<n; i++){
        
        max_ending_here=max(arr[i], max_ending_here+arr[i]);
        max_so_far=max(max_so_far, max_ending_here);

    }
    return max_so_far;
}

int flipBits(int* arr, int n) 
{
    // WRITE YOUR CODE HERE
    int cnt =0;
    for(int i =0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            arr[i]= -1;
        }
        else{
            arr[i] = 1;
        }
    }

    int maxSum  = kadane(arr,n);
    return maxSum+cnt;
}

int main(){

    return 0;
}