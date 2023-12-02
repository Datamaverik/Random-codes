#include<stdio.h>
#include<math.h>
int main()
{
    //Hollow equilateral triangle
    int i,j,n;
    printf("Enter the value of 'n'\n");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++){
        for(j=1;j<=2*n-1;j++){
            if(i<=n){
                if(j>(n-i) && j<(n+i))
                    printf("*");
                else
                    printf(" ");
            }
            else{
                if(j>(i-n) && j<(3*n-i))
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}