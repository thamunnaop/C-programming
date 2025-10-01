   /*write a c program that takes an integer input from the userr and calculates
    the sum of all even digits present in the number,
    if the sum is more than two digits,repeeatedly sum the even digits of the result
    until a single digit sum is obtained
   */ 
    
    
    // #include<stdio.h>
    // int sum_of_even(int num)
    // {
    //     if(num<0)
    //     {
    //         num=-num;
    //     }
    //     int digit=0,i=0,sum=0;
    //     static int arr[100];
    //     while(num>0 || num<0)
    //     {
            
    //         digit=num%10;
           
            
    //         if(digit%2==0)
    //         {
    //             arr[i]=digit;
    //             sum=arr[i]+sum;
    //         }
           
    //         else
    //         {
    //           arr[i]=0;
              
    //         }
    //         i++;
    //          num=num/10;
            
    //     }
    //      printf("sum of even digit is %d \n",sum);
    //   return sum;
    // }
    // int sum_check(int sum2)
    // {
        
       
    //     if(sum2>9)
    //     {
    //     sum_of_even(sum2);
    //     }
    //     else
    //     {
    //        return sum2; 
    //     }
    // }
    // int  main()
    // {
    //     int num,res1,res;
    //     printf("enter the number: ");
    //     scanf("%d",&num);
    //     printf("num=%d\n",num);
    //     res1=sum_of_even(num);
    //     res=sum_check(res1);
    //     printf("sum of even digits after reductn is %d\n",res);
    //     return 0;
    // }


    /*given a time in 12-hour format,convert it to 24-hr time*/

    // #include<stdio.h>
    // void hrs_24hrs(char *time)
    // {
        
    //     int hours=(time[0]-'0')*10+(time[1]-'0');
    //      int min=(time[3]-'0')*10+(time[4]-'0');
    //       int sec=(time[6]-'0')*10+(time[7]-'0');

          
    // if (time[8] == 'A' && time[9] == 'M') {
    //     if (hours == 12) {
    //         hours = 0;
    //     }
    // } else if (time[8] == 'P' && time[9] == 'M') {
    //     if (hours != 12) {
    //         hours += 12;
    //     }
    // }

    //       printf("%d:%d:%d%c%c",hours,min,sec,time[8],time[9]);
    // }
    // int main()
    // {
    //     char time[11];
    //     printf("enter the time: ");
    //     scanf("%[^\n]",&time);
    //     printf("the time in hours format: ");
    //     printf("%s\n",time);
    //     hrs_24hrs(time);
    // }


//#include<stdio.h>


// unique_element(char *str)
// {
//     char freq[26]={0};
//    for(int i=0;str[i]!='\0';i++)
//    {
//      freq[str[i]]++;

//    }
//    char printed_str[100];
//     for(int i=0;str[i]!='\0';i++)
//    {
//      printed_str[str[i]]++;

//    }

// }
// int main()
// {
//     char str[100];
//     int len;
//     printf("enter the string: ");
//     scanf("%[^\n]",&str);
//     printf("the string is %s\n",str);
//     len=my_strlen(str);
//     unique_element(str,len);
// }

 
// #include<stdio.h>
// int main()
// {
//     unsigned int num;
//     int count=0,res=0;
//     scanf("%x",&num);
//    for(int i=31;i>=0;i--)
//    {
//     res=num&(1<<i);
//     if(res==0)
//     {
//     count++;
//     }
//    }
   
//     printf("the number of zeroes in integer is %d\n",count);
// }


#include<stdio.h>
int count_set_bit(int * arr)
{
    int count=0;
    for(int i=31;i>=0;i--)
    {
        if(arr[i]&(1<<i))
        {
            count++;
        }
    }
    return count;
}

struct s
{
    int value;
    int set_bit;
};
 
void sort_arr(int *arr,int size)
{
    struct s st[size];
    for(int i=0;i<size;i++)
    {
     
     st[i].value=arr[i];
     st[i].set_bit=count_set_bit(arr);
    }

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(st[j].set_bit>st[j+1].set_bit)
            {
                struct s temp=st[j];
                st[j]=st[j+1];
                st[j+1]=temp;
            }
        }
    }
   
}
int main()
{
    int size;
    printf("enter size: ");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements to array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf(" elements of array: ");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }

     sort_arr(arr,size);
     return 0;
}


