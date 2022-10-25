#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int size;
    printf("enter the size of array");
    scanf("%d",&size);
    ptr=(int *)malloc(sizeof(int));
    printf("enter the element %d ",size);
    for(int i=0;i<size;i++)
    {
       scanf("%d",(ptr+i));
    }
    int temp;
    temp=*(ptr);
    for(int i=1;i<size;i++)
    {   
        if(temp<*(ptr+i)) 
        {
            temp=*(ptr+i);
        }  
    }
    printf("greatest number is =%d",temp);
    free(ptr);
}
