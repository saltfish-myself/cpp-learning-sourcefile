#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 0}, {16, 12, 14, 11, 29}};
	for(int i = 0;i<3;i++){
		for(int j = 0;j<5;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
