#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr;
    
    char str[1024];
    // fgets(str,1024,stdin);
    // fputs(str,ptr);  
    // fclose(ptr);
    // ptr=fopen("Firs_file.txt","a");
    // if(ptr==NULL){
    //     printf("File handling failed\n");
    //     return 1;
    // }
    // fgets(str,1024,stdin);
    // fputs(str,ptr);
    // fclose(ptr);
    ptr=fopen("Firs_file.txt","r");
    while(fgets(str,1024,ptr)!=NULL)
        printf("%s",str);
    return 0;
}