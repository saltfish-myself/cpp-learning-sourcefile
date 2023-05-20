#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,s,k,g,h;
	cin>>n>>s>>k;
	queue<int> m,w;//m为男性，w为女性 
	for(int i = 1;i<=n;i++){
		m.push(i);
	}
	for(int i = 1;i<=s;i++){
		w.push(i);
	}
	for(int i = 1;i<=k;i++){
		cout<<m.front()<<" "<<w.front()<<endl;
		g = m.front();//g为男性
		h = w.front();
		m.pop();
		w.pop(); 
		m.push(g);
		w.push(h);
	}
	return 0;
}
