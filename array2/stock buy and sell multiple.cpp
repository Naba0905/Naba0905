#include <bits/stdc++.h>
using namespace std;
int maxprofit(vector<int> &arr){
    int n=arr.size();
    int res=0;
    for(int i=0;i<n-1;i++){
        for(int i=i+1;i<n;i++){
            if(arr[i]>=arr[j]){
                res=max(res,arr[j-1]-arr[i]);
                res+=res;
            }
        }
    }
    
}
int main() {
	// your code goes here

}
