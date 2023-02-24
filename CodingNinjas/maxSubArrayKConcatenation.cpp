#include <bits/stdc++.h> 
using namespace std;

long long maxSubSumKConcat(vector<int> &arr, int n, int k)
{
	// Write your code here.
	int curSum = 0, totalMax = arr[0];
 
    for (int i = 0; i < n*k; i++)
    {
    
        curSum = curSum + arr[i%n];

        if (totalMax < curSum){
            totalMax = curSum;
		}
		
		if (curSum < 0){
            curSum = 0;
		}
        
    }
    return totalMax;
}

int main(){
    return 0;
}