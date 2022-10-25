#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size,*ptr;
    printf("enter the size of array");
    scanf("%d",&size);
    ptr=(int *)malloc(sizeof(int));
    if(ptr==NULL)
    {
        printf("memory allocation field");
        return 0;
    }
    printf("enter the %d element ",size);
    for(int i=0;i<size;i++)
    {
      scanf("%d",(ptr+i));
    }
    int sum=0;
   for(int i=0;i<size;i++)
   {
    sum=sum+*(ptr+i);
 }
 printf("sum of the total number is %d",sum);
 free(ptr);
}