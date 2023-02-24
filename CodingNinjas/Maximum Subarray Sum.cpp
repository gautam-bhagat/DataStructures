#include <bits/stdc++.h> 
using namespace std;
int maxSubarraySum(int arr[], int n)
{
    
    int sum = 0;
    int maxSum = 0;

    for(int i=0;i<n;i++){
        sum += arr[i];

        
        if(maxSum < sum){
            maxSum = sum;
        }
        
        if( sum < 0){
            sum = 0;
        }
        
    }
    return maxSum;
}

int main(){

    return 0;
}