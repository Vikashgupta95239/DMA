#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *ptr;
    int i;
    printf("enter the text ");
    ptr=(char *)malloc(sizeof(char));
    while(*ptr!='\n')
    {
        scanf("%c",(ptr+i));
        i++;
        printf("%c",*ptr);
    }
    printf("you have enterd text is ");
    // for(i=0;i<'\n';i++)
    // {
        printf("%s",*ptr);
    
    free(ptr);

}