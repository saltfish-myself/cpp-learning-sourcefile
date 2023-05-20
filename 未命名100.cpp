#include<bits/stdc++.h>
using namespace std;

int main(){
	int f(int n, int m){
    return n == 1 ? n : (f(n - 1, m) + m - 1) % n + 1;
}
}

