#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,n,k;
    printf("Enter the value of 'n'\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        k=i-1;
        for(j=1;j<=2*n-1;j++){
            if(j>n-i && j<n+i){
                if(j<=n){
                    k++;
                    printf("%d",k);
                }
                else{
                    k--;
                    printf("%d",k);
                }
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}