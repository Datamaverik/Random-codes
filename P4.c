#include<stdio.h>
#include<math.h>

int main()
{
    //Hollow equilateral triangle
    int i,j,n;
    printf("Enter the value of 'n'\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
            if(j==(n-i+1) || j==(n+i-1))
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
    }
    for(i=2;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
            if(j==(i) || j==(2*n-i))
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}