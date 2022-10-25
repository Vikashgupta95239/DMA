#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,c;
    int i=0,size=0,sum=0;
    printf("enter the size of array");
    scanf("%d",&size);
    ptr=(int *)calloc(size,sizeof (int));
    if(ptr==NULL)
    {
        printf("memory allocation failed\n");
        return 0;
    }
    printf("\n the enterd %d values\n",size);
        for(i=0;i<size;i++)
{
    scanf("%d",ptr+i);
}
    for(i=0;i<size;i++)
{
    sum=sum+ *(ptr+i);
}
printf("average is %d \n",sum/size);
free(ptr);
return 0;
}

