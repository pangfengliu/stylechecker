#include <stdio.h>
 
int w[1000], r[1000];
 
int max(int a, int b){
    return a>b?a:b;
}
 
int cnt(int i, int W){
    if(W < 0)
        return -1e9;
    if(i < 0 || W == 0)
        return 0;
    return max(cnt(i-1, W), cnt(i-1, W-w[i])+r[i]);
}
 
int main(){
    int n, W;
    scanf("%d %d", &n, &W);
    for(int i = 0; i < n; i++)   
        scanf("%d %d", &w[i], &r[i]);
    printf("%d", cnt(n-1, W));
    return 0;
}
