#include<stdio.h>
#include<conio.h>
int  main()
{
    int a[100],num,i,n;
    printf("Enter the limit of array \n");
    scanf("%d",&n);
    printf("Enter the elements of array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched \n");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            printf("Given no is present in the array at index %d",i);
            return;
        }
    }
    printf("Given number is not present in array!");
    return 0;
}
