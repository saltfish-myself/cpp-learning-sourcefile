#include<bits/stdc++.h>
using namespace std;

int count(int n) {
        public int minMoves(int[] nums) {
        int min =nums[0];
        for(int i: nums){
            if(i<min){
                min=i;
            }
        }
        int ans =0;
        for(int i : nums){
            ans += i-min;
        }
        return ans ;
    }
}

int main(){
	int x,num[10010];
	cin>>x;
	for(int i = 1;i<=x;i++){
		cin>>num[i];
	}
	cout<<count(x);
	return 0;
}
