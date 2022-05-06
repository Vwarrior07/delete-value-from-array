#include<stdio.h>
int main()
{
 int a[10],b;
    for (int i=0;i<10;i++)//1
    {
        printf("please enter the no. ");
        scanf("%i",&a[i]);
    }
    printf("please enter the position for the no to be deleted: ");//2
    scanf("%i",&b);
    for (int f=0;f<10;f++)
    {
        if (f>=b)
        {
            a[f]=a[f+1];
        }
        
    }
    for(int j=0;j<10;j++)
    {
        printf("%i\n",a[j]);
    }
    return 0;
}