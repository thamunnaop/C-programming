#include<stdio.h>
int main()
{
    int rows,cols,flag=0,k,p;
    printf("enter no:of rows: ");
    scanf("%d",&rows);
     printf("enter no:of cols: ");
    scanf("%d",&cols);
    int arr[rows][cols];
    //enter array elements
    printf("enter array elements: ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    //print the array elements
     printf("print array elements:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

//to check which row and col to be made 0
int row[3]={0},col[3]={0};

    //check if any elements the array is 0
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(arr[i][j]==0)
            {
                row[i]=1;
                col[i]=1;
                
            }
        }
    }
    
     for(int i=0;i<rows;i++)
     {
        for(int j=0;j<cols;j++)
        {
            if(row[i]==1||col[j]==1)
            {
            arr[i][j]=0;
            }
        }
     
    }
    printf("print array elements:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


  return 0;

}