#include<stdio.h>
#include<math.h>

int main()
{
    //Hollow equilateral triangle
    int i,j,n;
    printf("Enter the value of 'n'\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=1;j<=2*n-1;j++){
            if(j>i && j<2*n-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}