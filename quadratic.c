#include<stdio.h>
#include<complex.h>
#include<math.h>
int main()
{
    int n,i,j,a,b,c=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<n-1;i++){
        if(ar[i+1]==ar[i]){
            c++;
        }
    }
    printf("c= %d\n",c);
    for(i=0;i<n-1;i++){
        a=ar[i];
        b=ar[i+1];
        if(a==b){
            for(j=b;j<n;j++){
                ar[j-1]=ar[j];
            }
        }
        a++;
        b++;
    }
    c=n-c;
    for(i=0;i<c;i++)
        printf("%d ",ar[i]);
    return 0;
}
