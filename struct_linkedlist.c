#include<stdio.h>
void factors(int n,int *k,int c){
    if(c==n)
        return;
    if(n%c==0){
        *k=*k+1;
        factors(n,k,c+1);
    }
    else
        factors(n,k,c+1);
}
int main()
{
    printf("Enter the number which you want to check\n");
    int n,c=1;
    scanf("%d",&n);
    factors(n,&c,1);
    if(c==2)
        printf("Prime number\n");
    else
        printf("Not a prime number\n");
    return 0;
}