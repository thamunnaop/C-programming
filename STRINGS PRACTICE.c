//my practice code
// #include<stdio.h>
// int main()
// {
//     printf("hello world \n");
//     return 0;
// }

//program to reverse a string

// #include <stdio.h>
// #include<stdio_ext.h>
// void my_reverse(char *str,int size)
// {
//     int start=0,end=size-1;
//     char temp;
//     while(start<end)
//     {
//         temp=str[start];
//         str[start]=str[end];
//         str[end]=temp;
//         start++;
//         end--;
//     }

// }


// int main()
// {
   
//     int size;
//     printf("enter size: ");
//     scanf("%d",&size);
//     char str[size];
//     __fpurge(stdin);
//     printf("enter the string: ");
//     scanf("%99[^\n]",str);
//     my_reverse(str,size);
//     printf("%s\n",str);
//     return 0;

// }

//reverse a array
// #include<stdio.h>
// void my_reverse(int *arr,int size)
// {
//     for(int i=0;i<size/2;i++)
//     {
//         int temp=arr[i];
//         arr[i]=arr[size-i-1];
//         arr[size-i-1]=temp;
//     }
// }
// int main()
// {
//     int size,i;
//     printf("enter the size: ");
//     scanf("%d",&size);
//     int arr[size];
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     my_reverse(arr,size);
//     printf("reversed aray is: ");
//    for(i=0;i<size;i++)
//    {
//     printf("%d ",arr[i]);
//    }
//     return 0;

// }

//print all alphabets using pointer
// #include<stdio.h>
// void fun(char *c)
// {
//     while(*c>='A'&& *c<='Z')
//     {
//     printf("%c ",*c);
//     (*c)++;
//     }
//     printf("\n");
// }
// int main()
// {
//  char ch='A';
//   fun(&ch);
//   return 0;
// }

//write a program to print elements of array in reverse order using pointers
// #include <stdio.h>
// void my_reverse(int *arr,int size)
// {
//     int i;
//     for(i=0;i<size/2;i++)
//     {
//        int temp=arr[i];
//        arr[i]=arr[size-i-1];
//        arr[size-i-1]=temp;
//     }
// }

// int main()
// {
//     int size,i;
//     printf("enter the size: ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("enter the elements to array: ");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     my_reverse(arr,size);
//     printf("reversed array is:\n");
//     for(i=0;i<size;i++)
//     {
//         printf("element %d is %d ",i,arr[i]);
//         printf("\n");
//     }
//     printf("\n");
//     return 0;
// }

//write a program to sort an array using pointer
// #include<stdio.h>
// void sort_arr(int *arr,int size)
// {
//     for(int i=0;i<size-1;i++)
//     {
//         for(int j=0;j<size-1-i;j++)
//         {
//             if(*(arr+j)>*(arr+j+1))
//             {
//                 int temp=*(arr+j);
//                 *(arr+j)=*(arr+j+1);
//                 *(arr+j+1)=temp;
//             }
//         }
//     }
// }


// int main()
// {
//     int size,i;
//     printf("enter the size: ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("enter the array elements: ");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     sort_arr(arr,size);
//     for(i=0;i<size;i++)
//     {
//         printf("%d ",*(arr+i));
//     }
//     printf("\n");
//     return 0;
// }
 //program to count number of vowels and consonants in a string using pointer


//  #include<stdio.h>
//  int main()
//  {
//     char str[100];
//     scanf("%99[^\n]",str);
//     char *ch;
//     ch=str;
//     int vcount=0,ccount=0;
//     while(*ch!='\0')
//     {
//         if(*ch>='a'&&*ch<='z'||*ch>='A'&&*ch<='Z')
//         {
//     if(*ch=='a'||*ch=='e'||*ch=='i'||*ch=='o'||*ch=='u'||*ch=='A'||*ch=='E'||*ch=='I'||*ch=='O'||*ch=='U')
//     {
//        vcount++;
//     }
//     else
//     {
//       ccount++;
//     }
//     ch++;
//     }
//     }
//     printf("vowels count is %d\nconsonant count is %d\n",vcount,ccount);
//     return 0;
//  }

//write a program to find sum of all elements in array using pointers

// #include<stdio.h>
// int sum_of_arr(int *arr,int size)
// {
//     int sum=0,i;
//     for(i=0;i<size;i++)
//     {
//     sum=sum+*(arr+i);
//     }
//     return sum;
// }
// int main()
// {
//     int size,i,result;
//     printf("enter the size: ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("enter the array elements: ");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     result=sum_of_arr(arr,size);
//     printf("sum of the eleemnts in array is %d\n",result);
//     return 0;
// }
//program to find the length of string

// #include<stdio.h>
// int my_strlen(char *str)
// {
//     int count=0;
//     while(*str!='\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }
// void my_strcpy(char *p1,char*p2)
// {
//     while(*p2!='\0')
//     {
//         *p1=*p2;
//         p2++;
//         p1++;
//     }
//     *p1='\0';
    
// }
// void  my_char(char *p1)
// {
//     int i=0;
//     while(*p1!='\0')
//     {
//         printf("%c ",*p1);
//         p1++;
//     }
//     printf("\n");
// }

// int main()
// {
//     char str[100];
//     char str1[100];
//     int res;
//     printf("Enter the string: ");
//     scanf("%99[^\n]",str);
//    res= my_strlen(str);
//    my_strcpy(str1,str);
//    my_char(str);
//    printf("length of string is %d\n",res);
//    printf("copied string is %s\n",str1);
//    return 0;
// }
//program to count the number of words in a string
// #include<stdio.h>
// int my_strword(char *str)
// {
//     int count=0;
//     while(*str!='\0')
//     {
//         if(*str==' ')
//         {
//          *str='\0';
//          count++;
//         }
//         str++;
        
//     }
//     return count+1;
// }

// int main()
// {
//     char str[100];
//     int res;
//     printf("enter the string: ");
//     scanf("%99[^\n]",str);
//     res=my_strword(str);
//     printf("number of words in the string is %d\n",res);
//     return 0;
// }
//program to count number of alphabets ,numbers and special characters in string
// #include<stdio.h>
// void my_string(char *str,int *alphacount,int *digitcount,int*spclcount)
// {
//     *alphacount=0;
//     *digitcount=0;
//     *spclcount=0;
//     while(*str!='\0')
//     {
//         if(*str>='a'&&*str<='z'||*str>='A'&&*str<='Z')
//         {
//           (*alphacount)++;
         
//         }
//         else if(*str>='0'&&*str<='9')
//         {
//             (*digitcount)++;
           
//         }
//         else{
//             (*spclcount)++;
           
//         }
//         str++;
//     }
// }


// int main()
// {
//     char str[100];
//     int alphacount,digitcount,spclcount;
//     printf("enter the string: ");
//     scanf("%99[^\n]",str);
//     my_string(str,&alphacount,&digitcount,&spclcount);
//     printf("alphabets in string =%d\ndigits in string =%d\nspecial characters in string is %d\n",alphacount,digitcount,spclcount);
//     return 0;
// }
//write a program to find maximum characters in a string
// #include<stdio.h>
// void fun(char *frq,char *str)
// {
// char max='\0';
// int maxcount=0;

//     //count frequency to each character
//     for (int i=0;str[i]!='\0';i++)
//     {
//         frq[(unsigned char)str[i]]++;
//     }
//     //find the character with max frequency
//     for(int i=0;str[i]!='\0';i++)
//     {
//         if(frq[(unsigned char)str[i]]>maxcount){
//             maxcount=frq[(unsigned char)str[i]];
//             max=str[i];
//         }
//     }
// printf("the character '%c' occurs the most with %d times\n",max,maxcount);
// }
// int main()
// {
//     char frq[256]={0};
//     char str[100];
//     printf("enter the string: ");
//     scanf("%99[^\n]",str);
//     fun(frq,str);
//     return 0;
// }
//program to sort string array on ascending order
// #include<stdio.h>
// void sort_str(char *str,int size)
// {
//     int i,j;
//     for(i=0;i<size-1;i++)
//     {
//         for (j=0;j<size-1-i;j++)
//         {
//             if(str[j]>str[j+1])
//             {
//                 char temp=str[j];
//                 str[j]=str[j+1];
//                 str[j+1]=temp;
//             }
//         }
//     }
// }



// int main()
// {
//     int size;
//     printf("enter the size: ");
//     scanf("%d",&size);
//     char str[size];
//     printf("enter the string: ");
//     scanf("%s",str);
//     sort_str(str,size);
//     printf("the orderd string is %s\n",str);
//     return 0;
// }

//write a program to extract a substring from main string
// Test Data :
// Input the string : this is test string
// Input the position to start extraction :9
// Input the length of substring :4

// Expected Output :test

// #include<stdio.h>
// int main()
// {
//     char str[100];
//     int pos,len,count=0;
//     printf("enter the string: ");
//     scanf("%99[^\n]",str);
//     printf("enter the position: ");
//     scanf("%d",&pos);
//     printf("enter the length: ");
//     scanf("%d",&len);
//     while(count<len)
//     {
//         str[count]=str[pos+count-1];
//         count++;
//     }
//     str[count]='\0';
//     printf("the substring is %s\n",str);
//     return 0;
// }

