#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if (s1 == "Ro" && s2 == "Sc" && s3 == "Sc"){
        cout << 1 << endl;
	}else if (s1 == "Sc" && s2 == "Pa" && s3 == "Pa"){
        cout << 1 << endl;
	}else if (s1 == "Pa" && s2 == "Ro" && s3 == "Ro"){
        cout << 1 << endl;
	}else if (s1 == "Ro" && s2 == "Sc" && s3 == "Sc"){
        cout << 1 << endl;
	}else if (s1==s2==s3||s1!=s2!=s3){
        cout << "==" << endl;
	}else{
        cout << 1 + (s1 != s2) + (s2 != s3) + (s3 != s1) << endl;
	}
    return 0;
}
