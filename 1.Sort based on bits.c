#include <stdio.h>


int setbits (int x)
{
    int count = 0;
    while (x)
    {
        if (x&1)
        {
            count ++;
        }
        x = x>>1;
    }
    return count;
}

void sortarray (int *x , int *count , int num)
{
    for (int i=0; i<num ; i++)
    {
        for (int j = 0; j<num-1-i ; j++)
        {
            if (count[j] > count[j+1])
            {
                int temp = count[j];
                count[j] = count[j+1];
                count[j+1] = temp;

                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }
}

int main ()
{
    int x [] = {25 , 56 , 31, 69 , 108 , 6 , 54};
    int count[7];
    int z = (sizeof(x)/sizeof(int));
    for (int i=0 ; i<(sizeof(x)/sizeof(int)) ; i++)
    {
        count [i]= setbits(x[i]);
    }
    sortarray(x,count,z);    
    for (int k =0 ; k< z ; k++)
    {
        printf("%d ",x[k]);
    }

    return 0;
}