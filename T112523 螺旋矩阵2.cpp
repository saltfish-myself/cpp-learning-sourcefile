#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[110][110],l,c = 1;
	cin>>l;
	for(int j = 0;j<l;j++){
		if(j == l - 1){
			for(int i = 0;i<l;i++){
				if(i == l - 1){
					for(int j = 0;j<l;j--){
						if(j == l - 1){
							for(int i = 0;i<l--;i--){
								if(i == l){
									for(int k = 0;k<l;k++){
										for(int w = 0;w<l;w++){
											cout<<a[k][w]<<" ";
										}
										cout<<endl;
									}
								}
							}
						}
						a[i][j] = c;
						c++;
					}
				}else{
					a[i][j] = c;
					c++;
				}
			}
		}else {
			a[j][1] = c;
			c++;
		}
	}
	for(int k = 0;k<4;k++){
		for(int w = 0;w<4;w++){
		cout<<a[k][w]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
