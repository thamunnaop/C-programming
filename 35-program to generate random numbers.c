#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("enter the random numbers you need: ");
    scanf("%d",&n);

    srand(1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",rand());
    }
    printf("\n");
    return 0;
}