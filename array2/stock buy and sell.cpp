#include <bits/stdc++.h>
using namespace std;
int stock(vector <int> &arr){
    int n=arr.size();
    int res=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            res=max(res,arr[j]-arr[i]);
            
        }
    }
    return res;
}
int main() {
	vector<int> arr={4,2,3,6,9};
	
	cout<<stock(arr)<<endl;
	return 0;

}
