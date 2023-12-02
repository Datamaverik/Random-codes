#include<stdio.h>
int returnmax(int n);
int main()
{
    int t,i,n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        printf("%d\n",returnmax(n));
    }
    return 0;
}
int returnmax(int n){
    int r=0;
    if(n%2==0){
        r=n/2;
    }
    else{
        r=n/2+1;
    }
    return r;
}