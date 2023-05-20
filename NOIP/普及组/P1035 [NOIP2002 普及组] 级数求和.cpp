#include<bits/stdc++.h>
const double gamma=0.5772156649;
int main() {
    int k,n;
    scanf("%d",&k);
    n=exp(k-gamma)+0.5;
    printf("%d",n);
    return 0;
}
