#include<stdio.h>
#include<string.h>
int main()
{
    char str2[]="Hello boy";
    char str1[]="Hello";
    strcpy(str2,str1);
    printf("%s %s\n",str1,str2);
    printf("%u %u",str1,str2);
    return 0;
}
