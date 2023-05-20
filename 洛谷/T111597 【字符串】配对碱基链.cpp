#include<bits/stdc++.h>
using namespace std;

int main(){
	string DNA;
	string rDNA = "";
	cin>>DNA;
	int len = DNA.size();
	for(int i = 0;i<=len;i++){
		if(DNA[i]=='A'){
			rDNA += 'T';
		}else if(DNA[i]=='G'){
			rDNA += 'C';
		}else if(DNA[i]=='T'){
			rDNA += 'A';
		}else if(DNA[i]=='C'){
			rDNA += 'G';
		}
	}
	cout<<rDNA;
}
