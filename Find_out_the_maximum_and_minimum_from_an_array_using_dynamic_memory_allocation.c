#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,size,temp=0;
    printf("enter the size of array\n");
    scanf("%d",&size);
    ptr=(int *)malloc(sizeof(int));
    printf("enter the element %d\n",size);
   for(int i=0;i<size;i++)
   {
    scanf("%d",(ptr+i));
   }
   for(int i=0;i<size;i++)
   {
    for(int j=i;j<size-1-i;j++)
    {
        if(*(ptr+i)<*(ptr+j))
        {
          temp=*(ptr+i);
          *(ptr+i)=*(ptr+j);
          *(ptr+j)=temp;
        }
    }
   }
   printf("%d",*(ptr+3));
// printf("max->%d\nmin->%d",*(ptr+size-1),*(ptr)); 
}