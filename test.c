// //check the string is palindrome
// #include<stdio.h>
// void my_strcpy(char *p1,char*p2)
// {
//     while(*p2!='\0')
//     {
//         *p1=*p2;
//         p1++;
//         p2++;
//     }
//     *p1='\0';
// }
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
// rev_str(char *str)

// {
//     int size=my_strlen(str);
//     int start,end=size-1;
//     while(start<end)
//     {
//         char temp;
//         temp=str[start];
//         str[start]=str[end];
//         str[end]=temp;
//         start++;
//         end--;
//     }
    
// }
// int my_strcmp(char *p4,char*p5)
// {
//     while(*p5!='\0' && *p4!='\0')
//     {
//         if(*p4==*p5)
//         {
//             p4++;
//             p5++;
//         }
//         else{
//             break;
//         }
//     }
//     return *p4-*p5;
// }

// int main()
// {
//     char str1[100],str2[100];
//     int len,res;
//     printf("enter the string: ");
//     scanf("%99[^\n]",str1);
//     my_strcpy(str2,str1);
//     printf("print my strring %s",str2);
//     len=my_strlen(str1);
//     rev_str(str1);

//     res=my_strcmp(str1,str2);
//     if(res==0)
//     {
//         printf("sring is palindrome\n");

//     }
//     else
//     {
//         printf("string is not palindrome\n");
//     }

// }


//macro to find largest of 3 numbers

// #include<stdio.h>
// #define MAX(a,b,c) ((a>b)?((a>c)?a:c):((b>c)?b:c))
// int main()
// {
//     int x,y,z;
//     printf("enter 3 number: ");
//     scanf("%d %d %d",&x,&y,&z);
//     printf("the largest number is %d\n",MAX(x,y,z));
//     return 0;
// }

//average of command line argument

// #include<stdio.h>
// #include<stdlib.h>
// int main(int argc,char **argv)
// {
//     int i,sum=0;
//     float avg;
//     for(i=1;i<argc;i++)
//     {
//       sum=sum+atoi(argv[i]);

//       }
//       avg=(float)sum/(argc-1);
//       printf("avg=%f\n",avg);


// }

//program to find the bits of a number

// #include<stdio.h>
// int main()
// {
//     int num,i;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     printf("bits of number %d are : ",num);
//     for(i=31;i>=0;i--)
//     {
//         if(num&(1<<i))//get the bit
//         {
//             printf("1");
//         }
//         else{
//             printf("0");
//         }
//     }
//     printf("\n");
    
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// typedef struct node
// {
//     int data;
//     struct node * link;
// }Slist;

// void insert_last(Slist **head,int data)
// {
//   Slist *new=malloc(sizeof(Slist));
//   if(new==NULL)
//   {
//     return 1;
//   }
//   new->data=data;
//   new->link=NULL;

//   if(*head==NULL)
//   {
//     *head=new;
//      return 0;
//   }
//   Slist *temp=*head;
//   if(temp->link!=NULL)
//   {
//     temp=temp->link;
//   }
//   temp->link=new;
//   return 0;
// }

// void print_link(Slist **head)
// {
   
// }



//CHACK A STRING IS PALINDROME OR NOT

// #include<stdio.h>
// int my_strlen(char *str1)
// {
//     int count;
//     while(*str1!='\0')
//     {
//         count++;
//         str1++;
//     }
//     return count;
// }
// void my_strcpy(char *str2,char *str1)
// {
//     while(*str1!='\0')
//     {
//         *str2=*str1;
//         str1++;
//         str2++;
//     }
//     *str2='\0';
// }
// void my_strrev(char *str1,int len)
// {
//     int start=0,end=len-1;
//     while(start<end)
//     {
//         char temp=str1[start];
//         str1[start]=str1[end];
//         str1[end]=temp;
//         start++;
//         end--;
//     }
// }

// int my_strcmp(char *str1,char*str2)
// {
//     while(*str1!='\0'&& *str2!='\0')
//     {
//         if(*str1==*str2)
//         {
//             str1++;
//             str2++;
//         }
//         else{
//             break;
//         }
//     }
//     return *str1-*str2;
// }

// int main()
// {
//     char str1[100], str2[100];
//     int len,res;
//     printf("enter the string: ");
//     scanf("%[^\n]",str1);
//     len=my_strlen(str1);
//      my_strcpy(str2,str1);
//     my_strrev(str1,len);
//     res=my_strcmp(str1,str2);
//     if(res==0)
//     {
//         printf("string is palindrome\n");
//     }
//     else{
//         printf("string is not palindrome\n");
//     }
//     return 0;

// }

//get the bits of a number
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("enter the number: ");
//     scanf("%d",&num);
//     for(int i=31;i>=0;i--)
//     {
//        if(num&(1<<i))
//        {
//         printf("1");
//        }
//        else
//        {
//         printf("0");
//        }
//     }
//     printf("\n");
// }

//count the number odf set bits in a number
// #include<stdio.h>
// int main()
// {
//     unsigned char iter=15;
//     int  static count=0;
//     for(count=0;iter!=0;iter=iter>>1)
//     {
//         if(iter&1)
//         {
//             count++;
//         }
//     }

// printf("the number of set bits is %d \n",count);
// }

// #include<stdio.h>
// void prime_num(int n)
// {
//     int flag=0,num;
//     for( num=2;num<=n;num++)
//     {
//         for(int j=2;j<num/2;j++)
//         {
//             if(num%j==0)
//             {
//                 flag=1;
//                 break;
//             }
            
//         }
//         if (flag==0)
//            {
//                printf("%d ",num);
//           }
//     }

// }
// int main()
// {
//     int n,num=1,res;
//     printf("enter the value of n: ");
//     scanf("%d",&n);
//    prime_num(n);
    
// }

// #include<stdio.h>
// int main()
// {
//     char str[10];
//     printf("enter the name: ");
//     scanf("%s",str);
//     printf("%s\n",str);
// }

//reverse the elements of array 

// #include<stdio.h>
// int main()
// { int size;
//     printf("entert he size of array: ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("enter the elements of array: ");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("elements of array before: ");
//     for(int i=0;i<size;i++)
//     {
//         printf("%d",arr[i]);
//     }
//     printf("\n");
//     int temp;
//     int first=0;
//     int last =size-1;
//     while(first<last)
//     {
//         temp=arr[first];
//         arr[first]=arr[last];
//         arr[last]=temp;
//         first++;
//         last--;

//     }
// printf("elements of array after: ");
//     for(int i=0;i<size;i++)
//     {
//         printf("%d",arr[i]);
//     }
//     printf("\n");
// }
//sort the array

// #include<stdio.h>
// void sort_arr(int *arr,int size)
// {
//     for(int i=0;i<size-1;i++)
//     {
//         for(int j=0;j<size-i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[size-i-1];
//                 arr[size-i-1]=temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int size;
//     int element=8;
//     printf("entert he size of array: ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("entert he elements to array: ");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("array elements are: ");
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     //sort the array element 
//     sort_arr(arr,size);
//      printf("array elements are: ");
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==element)
//         {
//             printf("element found at index %d \n",i);
//             break;
//         }
    
//      }
     
// }
//print second largest element in array
// #include<stdio.h>
// int sec_large_element(int *arr,int size)
// {
//     int largest=arr[0];
//     for(int i=1;i<size;i++)
//     {
//         if(arr[i]>largest)
//         {
//             largest=arr[i];
//         }
//     }
//     int smallest=arr[0];
//     for(int i=1;i<size;i++)
//     {
//         if(arr[i]<smallest)
//         {
//             smallest=arr[i];
//         }
//     }
//     int sec_large=smallest;
//     for(int i=1;i<size;i++)
//     {
//         if(arr[i]>smallest && arr[i]<largest)
//         {
//             sec_large=arr[i];
//         }
//     }
//     return sec_large;
// }

// int main()
// {
//     int size;
//     printf("enter the size of array: ");
//     scanf("%d",&size);
//     int arr[size],res;
//     printf("enter the elemnts of array: ");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     res=sec_large_element(arr,size);
//     printf("sec-largest element of array is %d \n",res);
//     return 0;
// }
//program to create a file and put some content to it usiing cla

// #include<stdio.h>
// int main(int argc,char **argv)
// {
//     if(argc<3)
//     {
//         printf("invalid cla\n");
//         return 1;
//     }

//     FILE *fp;
//     fp=fopen(argv[1],"w+");
//     if(fp==NULL)
//     {
//         printf("file does not exist\n");
//         return 2;
//     }
//     fwrite(argv[2],1,1,fp);
//       fseek(fp,0,SEEK_SET);
//     char arr[2];
//     fread(arr,1,1,fp);
  
//     printf("%s\n",arr);

// }

//PROGRAM TO SORT ARRAY IN ASCENDING ORDER

// #include<stdio.h>
// void sort_ascent(int *arr,int size)
// {
//     for(int i=0;i<size-1;i++)
//     {
//         for(int j=0;j<size-1-i;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int size;
//     printf("enter array size: ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("enter array elements: ");
//     for(int i=0;i<size;i++)
//     {
//       scanf("%d",&arr[i]);
//     }
//     printf("\n");
//     printf("before sorting array elements are: ");
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     sort_ascent(arr,size);
//     printf("after sorting array elements are: ");
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//    return 0;

// }

//PROGRAM TO SWAP TWO NUMBER WITHOUT USING TEMPERORY VARIABLE

// #include<stdio.h>
// void swap(int *num1,int*num2)
// {
//     *num1=*num1+*num2;
//     *num2=*num1-*num2;
//     *num1=*num1-*num2;
// }
// int main()
// {
//     int num1,num2;
//     printf("entert he numbers: ");
//     scanf("%d %d",&num1,&num2);
//     printf("numbers before swap is %d and %d\n",num1,num2);
//     swap(&num1,&num2);
//     printf("numbers afteer swap is %d and %d\n",num1,num2);
//     return 0;
// }

//program to swap with temp variable

// #include<stdio.h>
// void swap(int *num1,int *num2)
// {
    
//     int temp=*num1;
//     *num1=*num2;
//     *num2=temp;
// }
// int main()
// {
//     int num1,num2;
//     printf("entert he numbers: ");
//     scanf("%d %d",&num1,&num2);
//     printf("numbers before swap is %d and %d\n",num1,num2);
//     swap(&num1,&num2);
//     printf("numbers afteer swap is %d and %d\n",num1,num2);
//     return 0;
// }

//program to print the frequency of occurence of a number

// #include<stdio.h>
// int main()
// {
//     int arr[15];
//     printf("enter the array elements:");
//     for(int i=0;i<15;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("\n");
//  printf("array elements are: ");
//  for(int i=0;i<15;i++)
//  {
//     printf("%d ",arr[i]);
//  }
//  printf("\n");
//  int freq[100]={0};
//  int printed[100]={0};
//  //count the freq
//  for(int i=0;i<15;i++)
//  {
//   freq[arr[i]]++;
//  }

//  //print the freq of each element
//  printf("output: ");
//  for(int i=0;i<15;i++)
//  {

//     if(!printed[arr[i]])
//     {
//         printf("%d ",freq[arr[i]]);
//         printed[arr[i]]=1;
//     }
//  }
//  printf("\n");
//  return 0;
// }


//program to remove duplicate eleemnt of the array

// #include<stdio.h>

// int main()
// {
//     int size;
//     printf("enter the size: ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("enter the array elements: ");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("\n");
//     printf("array eleemnts are: ");
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//      int unique_arr[size];
//    int unique_index=0,flag;
//     unique_arr[0]=arr[0];
//    unique_index++;
//     for(int i=1;i<size;i++)
//     {
//         flag=0;
//           for(int j=0;j<unique_index;j++)
//           {
//               if(arr[i]==unique_arr[j])
//               {
//                 flag=1;
//                 break;
//               }
              
//           }
//        if(flag==0)
//        {
        
//                    unique_arr[unique_index++]=arr[i];
                   
              
//        }   
//     }
//        printf("unique array eleemnts are: ");
//     for(int i=0;i<unique_index;i++)
//     {
//         printf("%d ",unique_arr[i]);
//     }
//     printf("\n");
// }


//program to swap two number of any datatype
// #include<stdio.h>
// void swap(void* ptr1,void * ptr2,int size)
// {
//     char temp;
//     for(int i=0;i<size;i++)
//     {
//         temp=*(char*)ptr1;
//         *(char*)ptr1=*(char*)ptr2;
//         *(char*)ptr2=temp;
//         ptr1++;
//         ptr2++;
//     }
// }
// int main()
// {
//     int num1,num2;
//     printf("enter 2 int numbers: ");
//      scanf("%d %d",&num1,&num2);
//      printf("%d %d\n",num1,num2);
//      float f1,f2;
     
//       printf("enter 2 float numbers: ");
//      scanf("%f %f",&f1,&f2);
//      printf("%f %f\n",f1,f2);
//      swap(&num1,&num2,sizeof(int));
//        printf("%d %d\n",num1,num2);
// swap(&f1,&f2,sizeof(float));
// printf("%f %f\n",f1,f2);
// }

// read and print string

// #include<stdio.h>
// int main()
// {
//     //read string
//     char str[10];
//     printf("enterr the string: ");
//     scanf("%[^\n]",str);
//     printf("the string is %s\n",str);
//     return 0;
// }

//static 2d array
// #include<stdio.h>
// int main()
// {
//     int rows,cols,i,j;
//     printf("enter the reows and col: ");
//     scanf("%d %d",&rows,&cols);
//     int arr[rows][cols];
//     printf("enter the eleemnts" );
//     for(int i=0;i<rows;i++)
//     {
//         for(int j=0;j<cols;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//  printf("elements of array are: ");
  
//     for(int i=0;i<rows;i++)
//     {
//         for(int j=0;j<cols;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//  printf("\n");
// }

//dynamci array

//pass by reference add two numbers
// #include<stdio.h>
// void add(int *a,int *b,int *sum)
// {
//     *sum=*a+*b;

// }
// int main()
// {
//     int a,b,sum=0;
//     int *ptr=&sum;
//     printf("enter the value of a and b: ");
//     scanf("%d%d",&a,&b);
//     add(&a,&b,&sum);
//     printf("sum of numbers is %d\n",sum);
//     return 0;
// }

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
// int main()
// {
//     char str[100];
//     int res;
//     printf("enter the string: ");
//     scanf("%[^\n]",str);
//     res=my_strlen(str);
//     printf("then length of string is %d\n",res);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(int argc,char **argv)
// {
//     int sum=0;
//     float avg;
//     if(argc<3)
//     {
//         printf("in sufficient cla\n");
//     }
//     for(int i=1;i<argc;i++)
//     {
//      sum=sum+atoi(argv[i]);
//     }
//     avg=(float)sum/(argc-1);
//     printf("average of cla is %f\n",avg);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int num=15;
//     int count=0;
//     while(num)
//     {
//       if(num&0x01)
//       {
//         count++;
//       }
//       num=num>>1;
//     }
//     printf("no:of set bits is %d\n",count);
//     if(count&1)
//     {
//         printf("it is odd parity\n");
//     }
//     else{
//         printf("it is even parity\n");
        
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     //get nth bit;
//     int num=15;
//     int n=2;
//     int m=3,res=0;
//     if(num&(1<<n))
//     {
//         //clea mth bit
//         res=num&(~(1<<m));
//         printf("after clear the mth bit number becomes %d\n",res);


//     }
//     return 0;
// }

//get n bits og given number
// #include<stdio.h>
// int main()
// {
//     int num=15;
//     int n=4;
//     for(int i=3;i>=0;i--)
//     {
//         if(num&(1<<i))
//         {
//             printf("1 ");
//         }
//         else{
//             printf("0 ");
//         }
//     }
// }


//program to get prime numbers upto limit
// #include<stdio.h>
// int main()
// {
//     int limit =1000,flag=0;
//     for(int num=2;num<limit;num++)
//     {
//         flag=0;
//      for(int i=2;i<num/2;i++)
//      {
//         if(num%i==0)
//         {
//             flag=1;
//             break;
//         }
//      }
//       if(flag==0)
//     {
//      printf("%d ",num);
//     }
//     }
//    return 0;
// }


//roman to integer

// #include<stdio.h>
// int value(char s)
// {
//     switch(s)
//     {
//         case 'I':return 1;
//         case 'V':return 5;
//         case 'X':return 10;
//         case 'L':return 50;
//         case 'C': return 100;
//         case 'D':return 500;
//         case 'M': return 1000;
//         default:return 0;
//     }
// }
// int roman_to_int(char *str)
// {
//     int res=0;
//     for(int i=0;i<str[i]!='\0';i++)
//     {
        
//         int s1=value(str[i]);
//         int s2=value(str[i+1]);
    
//     if(s1<s2)
//     {
     
//      res=res+(s2-s1);
//      i++;
//     }
//     else 
//     {
//         res=res+s1;
//     }
// }
//     return res;

// }
// int main()
// {
//     char str[100];
//     int result;
//     printf("enter the roman number: ");
//     scanf("%[^\n]",str);
//     printf("roman number is %s\n",str);
//     result=roman_to_int(str);
//     printf("the integer of given roman number is %d\n",result);
//     return 0;
// }



// #include<stdio.h>
// int bits_in_num(int num)
// {
//     int i=0,count=0;
// while(num>0)
// {
//  if(num&1)
//  {
//   count++;
//  }
//  num=num>>1;
// }
// return count;
// }
// int main()
// {
//     int num[]={15,2,7,3};
//     int size=sizeof(num)/sizeof(num[1]);
//     int count[size],max=0;
//     for(int i=0;i<size;i++)
//     {
//     count[i]=bits_in_num(num[i]);
//     }
//     printf("the sorted array basedd on bits is: ");
//    for(int i=0;i<size;i++)
//    {
//   for(int j=0;j<size-1-i;j++)
//   {
//     if(count[j]>count[j+1])
//     {
//         int temp_count=count[j];
//         count[j]=count[j+1];
//         count[j+1]=temp_count;

//         int temp=num[j];
//         num[j]=num[j+1];
//         num[j+1]=temp;
//     }
//   }
 
//    }
//    for(int i=0;i<size;i++)
//    {
//     printf("%d ",num[i]);
//    }
   
// }


//recursion

// #include<stdio.h>
// int factorial_fun(int num)
// {
    
//     if(num==1)
//     {
//         return 1;
//     }
    
//     return num*factorial_fun(num-1);
    
// }
// int main()
// {
//     int num,res;
//     printf("enter the number whosw factorial need to be found\n");
//     scanf("%d",&num);
//     res=factorial_fun(num);
//     printf("factorial of num is %d \n",res);

// }

// #include<stdio.h>
// int main()
// {
//     unsigned int  num=5;
//     printf("sizeof num is %ld bytes \n",sizeof(num));
//     return 0;
// }


// #include <stdio.h>
// void solve() {
// char ch[10] = "abcdefghij";
// int ans = 0;
// for (int i = 0; i < 10; i++) {
// ans += (ch[i] - 'a');
// }
// printf("%d", ans);
// }
// int main() {
// solve();
// return 0;
// }


// #include <stdio.h>
// void main() {
// char c[] = "GATE2011";
// char *p = c;
// printf("%s", p + p[3] - p[1]);
// }

// #include<stdio.h>
// int main()
// {
//     int x = 5;
//      printf("%d%d", x++, ++x); 
  
// }

// #include<stdio.h>
// #pragma pack(1);
// struct student
// {
//     int id;
//     char name[10];
//     float mark;
// };
// int main()
// {
//     struct student s1;
//     printf("the size of structure is %zu\n",sizeof(s1));
//     return 0;
// }


//find unique elements in array
// #include<stdio.h>
// int main()
// {
//     int arr[10],unique_arr[10];
//     printf("enter the array eleemnts:  ");
//     for(int i=0;i<10;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("array eleements before are: ");
//      for(int i=0;i<10;i++)
//     {
//         printf("%d",arr[i]);
//     }
//     printf("\n");
//    int  unique_index=0,flag;
    
//      unique_arr[0]=arr[0];
// unique_index++;
//     for(int i=1;i<10;i++)
//     {
//         flag=0;
//         for(int j=0;j<unique_index;j++)
//         {
//             if(arr[i]==unique_arr[j])
//             {
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==0)
//         {
//             unique_arr[unique_index++]=arr[i];
//         }
//     }
//       printf("array eleements after are: ");
//      for(int i=0;i<unique_index;i++)
//     {
//         printf("%d ",unique_arr[i]);
//     }
//     printf("\n");
// }

//to seperate even and odd elements in an array
// #include<stdio.h>
// int main()
// {
//     int arr[10];
//     printf("enter the array elements: ");
//     for(int i=0;i<10;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("the array elements are: ");
//     for(int i=0;i<10;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     int even_size=0,odd_size=0;
//     int even_arr[10],odd_arr[10];
//     for(int i=0;i<10;i++)
//     {
//         if(arr[i]%2==0)
//         {
//             even_arr[even_size++]=arr[i];
//         }
//         else 
//         {
//           odd_arr[odd_size++]=arr[i];
//         }
//     }
//     printf("even_eleemnts of array are: ");
//     for(int i=0;i<even_size;i++)
//     {
//         printf("%d ",even_arr[i]);
//     }
//     printf("\n"); 
//      printf("odd elements  of array are: ");
//     for(int i=0;i<odd_size;i++)
//     {
//         printf("%d ",odd_arr[i]);
//     }
//     printf("\n"); 
// }

// #include<stdio.h>
// int main()
// {
//     int arr[]={5,3,2,8,1};
//     int largest=arr[0];
//     int smallest=arr[0];
//     for(int i=0;i<5;i++)
//     {
//         if(arr[i]>largest)
//         {
//             largest=arr[i];
//         }
//     }
//     for(int i=0;i<5;i++)
//     {
//         if(arr[i]<smallest)
//         {
//             smallest=arr[i];
//         }
//     }
//     int second_largest=smallest;
//     for(int i=0;i<5;i++)
//     {
//     if(arr[i]>second_largest && arr[i]<largest)
//     {
//         second_largest=arr[i];
//     }
//     }
//     printf("the second largest element is %d\n",second_largest);
// }
//check parity of number using bitwise operator
// #include<stdio.h>
// int set_bits(int num)
// {
//     int count=0;
//     while(num)
//     {
//         if(num&1)
//         {
//             count++;
//         }
//         num=num>>1;
//     }
//     return count;
// }
// int main()
// {
//     int num,res;
//     printf("enter the number: ");
//     scanf("%d",&num);
//    res= set_bits(num);
//    if(res&1)
//    {
//     printf("number is odd parity\n");
//    }
//    else
//    {
//     printf("number is even parity\n");
//    }
//    return 0;
// }


//reverse the string
// #include<stdio.h>
// int my_strlen(char *str)
// {
//     int count=0;
//     while(*str!='\0')
//     {
//          count++;
//          str++;

//       }
//       return count;
// }
// void rev_string(char *s,int size)
// {
//     int start=0,end=size-1;
//     while(start<end)
//     {
//         char temp=s[start];
//         s[start]=s[end];
//         s[end]=temp;
//         start++;
//         end--;
//     }
// }
// int main()
// {
//     char str[100];
//     int len;
//     printf("enter the string: ");
//     scanf("%[^\n]",str);
//     printf("string before reverse is %s\n",str);
//     len=my_strlen(str);
//      rev_string(str,len);
//       printf("string after reverse is %s\n",str);
//       return 0;
// }

//    #include <stdio.h>
//     void main()
//     {
//         float x;
//         int y;
//         printf("enter two numbers \n");
//         scanf("%f %f", &x, &y);
//         printf("%f, %d", x, y);
//     }


//reverse each character of word in a string
// #include<stdio.h>
// int my_strlen(char *s)
// {
//     int count=0;
//     while(*s!='\0')
//     {
//      count++;
//      s++;
//     }
//     return count;
    
// }

// void reverse_each_char(char *s,int len)
// {
//     int i=0;
// while(i<len)
// {
//     int start=i,end=0;
//     while(s[i]!=' '&& s[i]!='\0')
//     {
//         i++;
//     }
//     end=i-1;
//     //swap
//     while(start<end)
//     {
//         char temp=s[start];
//         s[start]=s[end];
//         s[end]=temp;
//         start++;
//         end--;
//     }
//     i++;
// }
// }
// int main()
// {
//     char str[100];
//     int len;
//     printf("enter the string: ");
//     scanf("%[^\n]",str);
//     printf("%s\n",str);
//     len=my_strlen(str);
//     reverse_each_char(str,len);
//     printf("%s\n",str);
//     return 0;
// }

//reverse each word in a string

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
// void reverse_string(char *s,int len)
// {
//     int start=0,end=len-1;
//     while(start<end)
//     {
//         char temp=s[start];
//         s[start]=s[end];
//         s[end]=temp;
//         start++;
//         end--;
//     }

// }
// void reverse_each_word(char *str,int len)
// {
//     int i=0;
//     while(i<len)
//     {
//       int start=i,end=0;
//       while(str[i]!=' '&& str[i]!='\0')
//       {
//         i++;
//       }
//       end=i-1;
//       //swap string
//       while(start<end)
//       {
//       char temp=str[start];
//       str[start]=str[end];
//       str[end]=temp;
//       start++;
//       end--;
//       }
//       i++;
//     }
    
// }
// int main()
// {
//     char str[100];
//     int len;
//     printf("enter the string: ");
//     scanf("%[^\n]",str);
//     printf("%s\n",str);
//     len=my_strlen(str);
//     reverse_string(str,len);
//     printf("%s\n",str);
//     reverse_each_word(str,len);
//     printf("%s\n",str);

// }

// find the 
// #include<stdio.h>
// int sum_of_oddindeces(int *arr,int size)
// {
//     int sum1=0,sum2=0;
//     for(int i=0;i<size;i++)
//     {
//         if(i%2!=0)
//         {
//         sum1=sum1+arr[i];
        
//         }
//         else
//         {
//          sum2=sum2+arr[i];

//         }
//     }
//     return sum2-sum1;
// }
// int main()
// {
// int arr[5]={1,2,3,4,5};
// int res;
// int size=sizeof(arr)/sizeof(arr[0]);
// res=sum_of_oddindeces(arr,size);
// printf("difference in  odd indeces is %d\n",res);
// return 0;
// }

//WAP, based on given i/p, gets the desired o/p
//(If i/p is 0XAF0031CB the o/p should be A3.)

// #include<stdio.h>
 
// int main()
// {
//     unsigned int num=0xAF0031CB;
//     unsigned int b1,b2,res=0;
//     b1=(num>>8)& 0xff;
//     b2=(num>>24)& 0xff;
//     res=((b2&0xf0)>>4)*0x10+((b1&0xf0)>>4);
//     printf("%x\n",res);

// }

//spiral matrix
// #include<stdio.h>
// #define N 5
// int main()
// {
//   int mat[N][N];
//   int top=0,bottom=N-1;
//   int left=0,right=N-1;
//   int num=1;
//   while(top<=bottom && left<=right)
//   {
//     //first row
//     for(int i=left;i<=right;i++)
   
//     {
//         mat[top][i]=num++;
//     }
//     top++;
//    //last col
//     for(int i=top;i<=bottom;i++)
   
//     {
//         mat[i][right]=num++;
//     }
//     right--;
//    //bottom row
//     for(int i=right;i>=left;i--)
   
//     {
//         mat[bottom][i]=num++;
//     }
//     bottom--;
//     //first col
//     for(int i=bottom;i>=top;i--)
   
//     {
//         mat[i][left]=num++;
//     }
//     left++;


// }

//  // Print the matrix
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             printf("%-4d", mat[i][j]); // aligned spacing
//         }
//         printf("\n");
//     }

//     return 0;
// }

//gcd of two number
// #include<stdio.h>
// int gcd_of_numbers(int num1,int num2)
// {
//     while(num2!=0)
//     {
//     int temp=num2;
//     num2=num1%num2;
//     num1=temp;
//     }
//     return num1;
    
// }
// int main()
// {
// int num1,num2,res;
// printf("enter the 2 numbers: ");
// scanf("%d %d",&num1,&num2);
// res=gcd_of_numbers(num1,num2);
// printf("gcd of numbers is %d\n",res);
// return 0;
// }

//check given number is prime or not
// #include<stdio.h>
// void prime_or_not(int num)
// {
//     int flag=0;
//     for(int i=2;i<num/2;i++)
//     {
//         if(num%i==0)
//         {
//             flag=1;
//             break;
//         }
        
//     }
//     if(flag==0)
//     {
//         printf("%d-number is prime\n",num);
//     }
//     else
//     {
//         printf("%d-number is not prime\n",num);
        
//     }
// }
// int main()
// {
//     int num;
//     printf("enter the number: ");
//     scanf("%d",&num);
//     prime_or_not(num);
// }

//program of pattern
//       *
//   *       *
//*      *      *
// #include <stdio.h>

// int main() {
//     int n = 3;  // number of rows
//     for (int i = 1; i <= n; i++) 
//     {
//         // Print spaces
//         for (int j = i; j < n; j++)
//          {
//             printf("  ");
//         }
//         // Print stars with spaces in between
//         for (int j = 1; j <= i; j++)
//          {
//             printf("*   ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//swap two values wothout using third variable
// #include<stdio.h>
// void swap(int *num1,int *num2)
// {
//   *num1=*num1+*num2;
//   *num2=*num1-*num2;
//   *num1=*num1-*num2;
// }
// int main()
// {
//     int num1,num2;
//     printf("enter the num1 and num2: ");
//     scanf("%d %d",&num1,&num2);
//     printf("%d %d \n",num1,num2);
//     swap(&num1,&num2);
//     printf("%d %d \n",num1,num2);
// }

// #include<stdio.h>
// int factorial_fun(int num)
// {
//   if(num<=0)
//   {
//     return 1;
//   }
   
//      return num*factorial_fun(num-1);
     
   

// }
// int main()
// {
//     int num,res;
//     printf("enter the number: ");
//     scanf("%d",&num);
//     res=factorial_fun(num);
//     printf("the factorial of number is %d\n",res);
//     return 0;
// }

//write a program to find n terms of  odd natural numbers and find their sum and return to main function
// #include<stdio.h>
// int sum_of_odd(int n)
// {
//     int sum = 0;
//     int count = 0;   // how many odd numbers taken
//     int i = 1;       // start from 1

//     while(count < n) // until n odd numbers are taken
//     {
//         sum += i;    // add the odd number
//         i += 2;      // next odd number
//         count++;     // increase count
//     }
//     return sum;
// }

// int main()
// {
//     int n, res;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     res = sum_of_odd(n);
//     printf("Sum of first %d odd terms is %d\n", n, res);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *a;
//     a=(int*)malloc(sizeof(int));
//     *a=100;
//     printf("*a=%d@%p\n",*a, a);
//     free(a);
//     a=(int*)malloc(sizeof(int));
//     *a=200;
//     printf("*a=%d@%p\n",*a, a);
// }

// remove duplicate from sorted array
// #include<stdio.h>
// int main()
// {
//     int size,flag,unique_index=0;
//     printf("enter the size: ");
//     scanf("%d",&size);
//     int arr[size],unique_arr[size];
//     printf("enter the array elements: ");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<size;i++)
//     {
//     printf("%d ",arr[i]);
//     }
//     printf("\n");
//     unique_arr[unique_index]=arr[0];
//     unique_index++;
//     for(int i=1;i<size;i++)
//     {
//         flag=0;
//         for(int j=0;j<unique_index;j++)
//         {
//             if(arr[i]==unique_arr[j])
//             {
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==0)
//         {
//             unique_arr[unique_index]=arr[i];
//             unique_index++;
//         }
//     }
//     for(int i=0;i<unique_index;i++)
//     {
//         printf("%d ",unique_arr[i]);
//     }
// }


// #include<stdio.h>
// int count_set_bits(unsigned int num)
// {
//     int count=0;
//     while(num!=0)
//     {
//        if(num&1)
//        {
//         count++;
//        } 
//        num=num>>1;
//     }
//     return count;
// }
// int main()
// {
//     int num,count;
//     printf("enter the number: ");
//     scanf("%d",&num);
//     count=count_set_bits(num);
//     if(count&1)
//     {
//         printf("the parity is odd-%d\n",count);
//     }
//     else{
//         printf("the parity is even %d\n",count);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     unsigned int num;
//     printf("enter the number: ");
//     scanf("%x",&num);
//     unsigned int nibble1,nibble3,res1,res2,res;
//     nibble1=(num>>24)&0xff;
//     nibble3=(num>>8)&0xff;
//     res1=(nibble1 & 0xf0);
//     res2=((nibble3 & 0xf0)>>4);
//     res=res1|res2;
//     printf("%x\n",res);


// }

// #include<stdio.h>
// int main()
// {
//     unsigned int num,temp,reversed=0,res=0;
//     printf("enter the number: ");
//     scanf("%x",&num);
//     //array to store unique nibbles
//     int seen[16]={0};
//     temp=num;
//     while(temp!=0)
//     {
//         //extract each nibble from right
//         int nibble=temp&0xf;
//         temp=temp>>4;
//         if(seen[nibble]==0)
//         {
//             seen[nibble]=1;
//             reversed=reversed<<4|nibble;

//         }
//     }
//         //reverse the order
//         while(reversed!=0)
//         {
//             int nibble=reversed&0xf;
//             reversed=reversed>>4;
//             res=res<<4|nibble;


//         }
//         printf("%X\n",res);
//         return 0;

    

// }

//program to check bit is set or not 
// #include<stdio.h>
// int main()
// {
//     unsigned int num;
//     int bit;
//     printf("enter the number: ");
//     scanf("%x",&num);
//    printf("enter the bit you want to check set or not: ");
//    scanf("%d",&bit);
//    if((num&(1<<bit)))
//    {
//     printf("bit is set\n");

//    }
//    else{
//     printf("bit is not set\n");
//    }
//    return 0;
    

// }

// #include<stdio.h>
// int main()
// {
//     unsigned int num,mask=0x84;
//     printf("enter the num: ");
//     scanf("%x",&num);
//     printf("%x\n",num);
//     num=num|mask;
//     printf("%x\n",num);
//     return 0;
 

    

// }

// //we want to count number of set bits in a number
// #include<stdio.h>
// int count_set_bit(int num)
// {
//     int count=0;
//     while(num)
//     {
//         if(num&1)
//         {
//             count++;
//         }
//         num=num>>1;
       
//     }
//      return count;
// }
// int main()
// {
//     unsigned int num,res;
//     printf("enter the number: ");
//     scanf("%x",&num);
//     res=count_set_bit(num);
//     printf("number of set bits is %d\n",res);
//     return 0;
// }

//program to swap nibbles of byte
// #include<stdio.h>
// int main()
// {
//     unsigned char num,res;
//     printf("enter the nmber in hex: ");
//     scanf("%hhx",&num);
//     res=((num>>4)&0x0f)|((num<<4)&0xf0);
//     printf("%x\n",res);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int size;
//     printf("enter size: ");
//     scanf("%d",&size);
//     int arr[size];
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("the array elements are: ");
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
   
//     int smallest=arr[0];
//     int largest=arr[0];
//      for(int i=1;i<size;i++)
//     {
//         if(arr[i]>largest)
//         {
//             largest=arr[i];
//         }
//     }
//     for(int i=1;i<size;i++)
//     {
//         if(arr[i]<smallest)
//         {
//             smallest=arr[i];
//         }
//     }
//     int second_largest=smallest;
//     for(int i=1;i<size;i++)
//     {
//     if(arr[i]>second_largest && arr[i]<largest)
//     {
//     second_largest=arr[i];
//     }
//     }
//     printf("second_largest element of array is %d\n",second_largest);
    
// }

//revrse the given string
// #include<stdio.h>
// int my_strlen(char *str)
// {
//     int count=0;
//     while(*str!='\0')
//     {
//       count++;
//       str++;
//     }
//     return count;
// }
// char* reverse_string(char *str,int len)
// {
//     int start=0,end=len-1;
//     while(start<end)
//     {
//         char temp=str[start];
//         str[start]=str[end];
//         str[end]=temp;
//         start++;
//         end--;
//     }
//     return str;
// }

// void reverse_each_word(char *str1,int len)
// {
//     int i=0; 
//     while(i<len)
//     {
//         int start=i,end=0;
//         while(str1[i]!=' '&& str1[i]!='\0')
//         {
//             i++;
//         }
//         end=i-1;
    
//         //swap
//         while(start<end)
//         {
//             char temp=str1[start];
//             str1[start]=str1[end];
//             str1[end]=temp;
//             start++;
//             end--;
//         }
//         i++;
//     }
    
// }
// int main()
// {
//     char str[100];
//     int len;
//     char *s1;
//     printf("enter the string: ");
//     scanf("%[^\n]",str);
//     printf("%s\n",str);
//     len=my_strlen(str);
//     s1=reverse_string(str,len);
//     printf("%s\n",str);
//     reverse_each_word(s1,len);
//     printf("%s\n",str);
//     return 0;
// }


// #include<stdio.h>
// int odd_and_even_indices(int *arr,int size)
// {
//     int sum1=0,sum2=0,difference=0;
//     for(int i=0;i<size;i++)
//     {
//         if(i%2==0)
//         {
//            sum1=sum1+arr[i];
//         }
//         else
//         {
//             sum2=sum2+arr[i];
//         }

//     }
//     printf("sum of element in even indices is %d\n",sum1);
//     printf("sum of element in odd indices is %d \n",sum2);
//     difference=sum2-sum1;
//     return difference;
// }
// int main()
// {
//     int size,diff;
//     printf("enter the size: ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("enter the array elemnts: ");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("array elements are: ");
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     diff=odd_and_even_indices(arr,size);
//     printf("difference of odd and even indices is %d\n",diff);
//     return 0;
// }

 //set clear nth bit

//  #include<stdio.h>
//  int main()
//  {
//      unsigned int num,num1,num2;
//     int n;
//     printf("enter the num: ");
//     scanf("%x",&num);
//     printf("the bit to set get or clear: ");
//     scanf("%d",&n);
//     //to set the bit
//     num1=num|(1<<n);
//     printf("the number after nth bit is set is %x\n",num1);
//     //to clear the bit
//     num2=num&~(1<<n);
//      printf("the number after nth bit is clear  is %x\n",num2);
//      //get the bit
//      if(num&(1<<n))
//      {
//         printf("1");
//      }
//      else
//      {
//         printf("0");
//      }
//      return 0;
//  }
   
//print the bits of number
// #include<stdio.h>
// int get_the_bits(int num,int n)

// {
//    int res=0;
//    res=num&((1<<n)-1);
//    return res;
// }
// int main()
// {
//     int num,n,result;
//     printf("enter the number: ");
//     scanf("%d",&num);
//     printf("enter the number of bit to print: ");
//     scanf("%d",&n);
//     result=get_the_bits(num,n);
//     printf("result is %d\n",result);
// }

// #include<stdio.h>
// int main()
// {
//     int num,n,val,res1,res2,res3;
//     printf("enter tthe number: ");
//     scanf("%d",&num);
//     printf("enter the number of bits: ");
//     scanf("%d",&n);
//     printf("enter the val: ");
//     scanf("%d",&val);
//     //fetch n bits from lsb of val
//     res1=val&(1<<n)-1;
//     //clear the n bits from lsb of num
// res2=num&(~((1<<n)-1));
// //set the bits
// res3=res1|res2;
// printf("the final num is %d\n",res3);
// return 0;


// }

//toggle 3rd and 8th bit of a number
// #include<stdio.h>
// int main()
// {
//     int num,mask,res;
//     printf("enter the number: ");
//     scanf("%d",&num);
//     mask=(1<<3)|(1<<8);
//     res=num^mask;
//     printf("after toggling the bit number becomes %d\n",res);
//     return 0;

// }
// #include<stdio.h>
// int sum_of_diff_odd_indices(int *arr,int size)
// {
//         int sum = 0;
//     for (int i = 1; i + 2 < size; i += 2) {  // only odd indices, safe bound
//         sum =sum+( arr[i] - arr[i+2]);
//     }
//     return sum;

// }
// int main()
// {
//     int size,res;
//     printf("enter the sizee: ");
//     scanf("%d",&size);
//     int arr[size];
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<size;i++)
//     {
//         printf("%d",arr[i]);
//     }
//     res=sum_of_diff_odd_indices(arr,size);
//     printf("sum is %d\n",res);
//     return 0;
// }

// #include<stdio.h>

// int sum_of_diff_odd_indices(int *arr,int size)
// {
//     int sum = 0;
//     for (int i = 1; i + 2 < size; i += 2) {
//         sum += arr[i] - arr[i+2];
//     }
//     return sum;
// }

// int main()
// {
//     int size, res;
//     printf("Enter the size: ");
//     scanf("%d",&size);

//     int arr[size];
//     printf("Enter %d elements:\n", size);
//     for(int i=0;i<size;i++) {
//         scanf("%d",&arr[i]);
//     }

//     printf("Array: ");
//     for(int i=0;i<size;i++) {
//         printf("%d ",arr[i]);
//     }

//     res = sum_of_diff_odd_indices(arr,size);
//     printf("\nSum of differences of odd indices = %d\n",res);

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter size of array: ");
//     scanf("%d", &n);

//     if (n <= 0) {
//         printf("Array is empty.\n");
//         return 0;
//     }

//     int arr[n];
//     printf("Enter %d elements: ", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int sum_even = 0, sum_odd = 0;
//     int diff_even = 0, diff_odd = 0;
//     int first_even = 1, first_odd = 1;

//     for (int i = 0; i < n; i++) {
//         if (i % 2 == 0) {   // even index
//             sum_even += arr[i];
//             if (first_even) {
//                 diff_even = arr[i];
//                 first_even = 0;
//             } else {
//                 diff_even -= arr[i];
//             }
//         } else {            // odd index
//             sum_odd += arr[i];
//             if (first_odd) {
//                 diff_odd = arr[i];
//                 first_odd = 0;
//             } else {
//                 diff_odd -= arr[i];
//             }
//         }
//     }

//     printf("Sum of even indices = %d\n", sum_even);
//     printf("Difference of even indices = %d\n", diff_even);
//     printf("Sum of odd indices = %d\n", sum_odd);
//     printf("Difference of odd indices = %d\n", diff_odd);

//     return 0;
// }

//program to check number is 2 s power or not
// #include<stdio.h>
// void pwr_of_2(int num)
// {
//     int res=1;
//     for(int i=1;i<num;i++)
//     {
//      res=res*2;
//       printf("%d ",res);
// }
//     }
   
// int main()
// {
//     int num;
//     printf("enter the number: ");
//     scanf("%d",&num);
//     pwr_of_2(num);
// }

//program to find frequency of chara cter in a string
// #include<stdio.h>
// void freq_char(char *str)
// {
//     int i=0;
//     char freq[256]={0};
//     for(int i=0;str[i]!='\0';i++)
//     {
//         freq[(unsigned char)str[i]]++;
//     }

//     for(int i=0;str[i]!='\0';i++)
//     {
//         if(freq[(unsigned char)str[i]]!=0)
//         {
//             printf("%c-%d\n",str[i],freq[str[i]]);
//             freq[(unsigned char)str[i]]=0;
//         }
//     }
// }
// int main()
// {
//     char str[100];
//     printf("enter the string: ");
//     scanf("%[^\n]",str);
//     freq_char(str);

// }

//reverse each word of string without changing the order
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
// void reverse_string(char *str,int len)
// {int i=0;
//   while(i<len)
//   {
//     int start=i,end=0;
//     while(str[i]!=' ' && str[i]!='\0')
//     {
//        i++;
//     }
//     end=i-1;
//     //swap
//     while(start<end)
//     {
//     char temp=str[start];
//     str[start]=str[end];
//     str[end]=temp;
//     start++;
//     end--;
//     }
//    i++;
//   }
  
// }
// int main()
// {
//     char str[100];
//     int len;
//     printf("enter the string: ");
//     scanf("%[^\n]",str);
//     len=my_strlen(str);
//     printf("%s\n",str);
//     reverse_string(str,len);
//     printf("%s\n",str);
//     return 0;
// }
// #include<stdio.h>
// void swaap_numbers(int* num1,int *num2)
// {
//     int temp=*num1;
//     *num1=*num2;
//     *num2=temp;
// }
// int main()
// {
//     int num1,num2;
//     printf("enter the num1 and num2");
//     scanf("%d %d",&num1,&num2);
//     printf("%d %d\n",num1,num2);
//     swaap_numbers(&num1,&num2);
//     printf("%d %d\n",num1,num2);
// }


// #include<stdio.h>
// int sum_of_diff(int *arr,int size)
// {
//     int sum=0;
// for(int i=1;i+2<size;i=i+2)
// {
// sum=sum+(arr[i]-arr[i+2]);
// }
// return sum;
// }
// int main()
// {
//     int size,res;
//     printf("enter the size: ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("enter the array elements: ");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("the array elements are: ");
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     res=sum_of_diff(arr,size);
//     printf("sum of difference of elements in odd indices is %d\n",res);
//     return 0;
// }
//delete an element in the array
// #include<stdio.h>
// int delete_element(int *arr,int size,int var)
// {
//     int k=0;
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]!=var)
//         {
//             arr[k]=arr[i];
//             k++;
         
//         }
         
   
//     }
//     return k;
    
// }
// int main()
// {
    
//     int size,var,new_size;
//     printf("enter the size: ");
//     scanf("%d",&size);
    
//     int arr[size];
//     printf("enter the array elements: ");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("the array elements are: ");
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     printf("enter the eleemnt to be deleted: ");
//     scanf("%d",&var);
//    new_size= delete_element(arr,size,var);
//    for(int i=0;i<new_size;i++)
//    {
//     printf("%d ",arr[i]);
//    }
//    printf("\n");
// }

// #include<stdio.h>
// int element_present(int *arr,int size,int element)
// {
//     int flag=0;
//     for(int i=0;i<size;i++)
//     {
//         if (arr[i]==element)
//         {
//             flag=1;
//             break;
//         }
//     }
//     return flag;
// }
// int main()
// {
//     int size,element,flag;
//     printf("enter the size: ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("enter the array elemets: ");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("enter element to be searched: ");
//     scanf("%d",&element);
//     flag=element_present(arr,size,element);
//     if(flag==1)
//     {
//         printf("%d exists in array\n",element);
//     }
//     else
//     {
//         printf("%d not exist in array\n ",element);
//     }
//     return 0;
    

// }
// #include<stdio.h>
// int set_bits(int num)
// {
//     int count=0;
//     while(num!=0)
//     {
//         if(num&1)
//         {
//             count++;
//         }
//         num=num>>1;
//     }
//     return count;
// }
// int main()
// {
//     unsigned int num,count;
//     printf("enter the number: ");
//     scanf("%d",&num);
//     count=set_bits(num);
//     if(count&1)
//     {
//         printf("the parity is odd\n");
//     }
//     else
//     {
//         printf("the parity is even\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// unsigned int desired_num(int num)
// {

//     unsigned int num1,num2,nibble1,nibble2,res;
//     num1=(num>>8)& 0xff;
//      num2=(num>>24)& 0xff;

//      nibble1=(num2&0xf0)>>4;
//      nibble2=(num1&0xf0)>>4;
//      res=(nibble1<<4)|nibble2;
//      return res;


// }
// int main()
// {
//     unsigned int num,res;
//     printf("enter the number: ");
//     scanf("%x",&num);
//     printf("%X\n",num);
//     res=desired_num(num);
//     printf("output=%X\n",res);
//     return 0;
// }

// #include<stdio.h>
// void remove_duplicates(int num)
// {
//     int count[16]={0};
//     unsigned int temp=num,nibble,reversed,res;
//     while(temp!=0)
//     {
        
//         nibble=temp&0x0f;
//         temp=temp>>4;
//         if(count[nibble]==0)
//         {
//             count[nibble]=1;
//             reversed=reversed<<4|nibble;
//         }
      
//     }
    
//      while(reversed!=0)
//      {
//         nibble=reversed&0x0f;
//         reversed=reversed>>4;
//         res=res<<4|nibble;
//      }
//      printf("%x\n",res);
   
// }
// int main()
// {
//     unsigned int num;
//     printf("enter the number: ");
//     scanf("%x",&num);
//     printf("%X\n",num);
//     remove_duplicates(num);
// }


// #include<stdio.h>
// int main()
// {
//     unsigned char num,res;
//     printf("enter the number: ");
//     scanf("%hhx",&num);
//     printf("%x\n",num);
//     res=((num>>4)&0x0f)|((num<<4)&0xf0);
//     printf("%x\n",res);
//     return 0;
// }

// #include<stdio.h>
// #define N  4
// int main()
// {
// int mat[N][N];
// int num=1;
// int left=0,right=N-1;
// int top=0,bottom=N-1;
// while(top<=bottom && left<=right)
// {
// for(int i=left;i<=right;i++)
// {
//    mat[top][i]=num++;
// }
// top++;
// for(int i=top;i<=bottom;i++)
// {
//    mat[i][right]=num++;
// }
// right--;
// for(int i=right;i>=left;i--)
// {
//    mat[bottom][i]=num++;
// }
// bottom--;
// for(int i=bottom;i>=top;i--)
// {
//    mat[i][left]=num++;
// }
// left++;
// }
// for(int i=0;i<N;i++)
// {
//     for(int j=0;j<N;j++)
//     {
//         printf("%-4d ",mat[i][j]);
//     }
//     printf("\n");
// }

// }


//program to check little/big endian
// #include<stdio.h>
// int main()
// {
//      int num=0x12345678;
//    char *p=(char*)&num;
//     if(*p==0x78)
//     {
//         printf("yours is little indian\n");
//     }
//     else{
//         printf("bid endian\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// union endianess
// {
//     int num;
//     char p;
// };
// int main()
// {
    
//   union endianess e;
//   e.num=0x12345678;
//   if(e.p==0x78)
//   {
//     printf("little indian\n");
//   }
//   else
//   {
//     printf("big endian\n");
//   }
//   return 0;
// }

// #include<stdio.h>
// void swap_num(void*p1,void *p2,int size)
// {
//  for(int i=0;i<size;i++)
//  {
//     char temp=*(char*)p1;
//     *(char*)p1=*(char*)p2;
//     *(char*)p2=temp;
//     p1++;
//     p2++;
//  }
// }
// int main()
// {
//     int num1,num2;
//     printf("enter num1 and num2: ");
//     scanf("%d %d",&num1,&num2);
//     swap_num(&num1,&num2,sizeof(num1));
//     printf("%d %d\n",num1,num2);
//     float f1,f2;
//     printf("enter num1 and num2: ");
//     scanf("%f %f",&f1,&f2);
//     swap_num(&f1,&f2,sizeof(f1));
//     printf("%g %-1g\n",f1,f2);
//     return 0;
// }


//merge 2 array and find the median 
// #include<stdio.h>
// #include<stdlib.h>
// float merge_arr(int *a1,int*a2,int s1,int s2)
// {
//     int total_size=s1+s2;
//     int i=0,j=0;
//     int*res_arr=(int*)malloc(total_size*sizeof(int));
//     for( i=0;i<s1;i++)
//     {
//         res_arr[j++]=a1[i];

//     }
     
//     for(int i=0;i<s2;i++)
//     {
//       res_arr[j++]=a2[i];
      
//     }

//     //median
//     float median;
    
//     if(total_size%2==1)
//     {
//     median=(float)res_arr[total_size/2];
//     }
//     else
//     {
//         median=(float)((res_arr[total_size/2])+(res_arr[(total_size/2)-1]))/2;
//     }
//     return median;
// }
// int main()
// {
//     int size1,size2;
//     float res;
//     printf("enter the size: ");
//     scanf("%d %d",&size1,&size2);
//     int arr1[size1],arr2[size2];
//     printf("enter elements to array 1");
//     for(int i=0;i<size1;i++)
//     {
//         scanf("%d",&arr1[i]);
//     }
//     printf("enter elements to array 2");
//     for(int i=0;i<size2;i++)
//     {
//         scanf("%d",&arr2[i]);
//     }
//     res=merge_arr(arr1,arr2,size1,size2);
//     printf("median is %f\n",res);
//     return 0;
// // }

// #include<stdio.h>
// int main()
// {
//     int size,element;
//     printf("enter the size of array: ");
//     scanf("%d",&size);
//     int arr[size];
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);

//     }
//     printf("enter the element to be dlt: ");
//     scanf("%d",&element);
//     int j=0;
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]!=element)
//         {
//             arr[j]=arr[i];
//             j++;
//         }
//     }
//     for(int j=0;j<size-1;j++)
//     {
//         printf("%d ",arr[j]);
//     }
//     return 0;
// }

//string palindrome or not 

#include<stdio.h>
int my_strlen(char *s)
{
    int count=0;
    while(*s!='\0')
    {
        count++;
        s++;
    }
    return count;
}

void my_strcpy(char *s1, char*s2)
{
    while(*s2!='\0')
    {
        *s1=*s2;
        s1++;
        s2++;
    }
    *s2='\0';
}
void reverse_str(char *s,int len)
{
    int i=0,start=i,end=len-1;
    while(start<end)
    {
        char temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;
    }
}

// int my_strcmp(char *p1,char *p2)
// {
//     while(*p1!='\0'&&*p2!='\0')
//     {
//         if(*p1==*p2)
//         {
//             p1++;
//             p2++;
//         }
//         else
//         {
//         break;
//         }
//     }
//     return *p1-*p2;
// }
// int main()
// {
//     char str[100],str1[100];
//     int len,res;
//     printf("enter the string: ");
//     scanf("%[^\n]",str);
//     printf("%s\n",str);
//     len=my_strlen(str);
//     my_strcpy(str1,str);
//     reverse_str(str,len);
//     printf("%s\n",str);
//    res= my_strcmp(str,str1);
//    if(res==0)
//    {
//     printf("the string is palindrome\n");
//    }
//    else{
//     printf("string is not palindreom\n");
//    }
//    return 0;

// }



// #include<stdio.h>
// void third_largest(int *arr,int size)
// {
//     int largest,smallest;
//     largest=arr[0];
//     smallest=arr[0];
//     for(int i=0;i<size;i++)
//     {
//        if(arr[i]>largest)
//        {
//         largest=arr[i];
//        }
//        else if(arr[i]<smallest)
//        {
//         smallest=arr[i];
//        }
//     }
//     printf("largest=%d,smallest=%d\n",largest,smallest);
//     int sec_largest=smallest;
//     int third_largest=smallest;
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]>sec_largest && arr[i]<largest)
//         {
//             sec_largest=arr[i];
//         }
       
//     }
//  for(int i=0;i<size;i++)
//  {
//      if(arr[i]>third_largest&&arr[i]<sec_largest)
//         {
//             third_largest=arr[i];
//         }
//     }
//     printf("sec_largest=%d ,third_largest-%d\n",sec_largest,third_largest);

// }
// int main()
// {
//     int size;
//     printf("enter the size: ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("enter the eleemnts to array: ");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     third_largest(arr,size);
// }

//remove duplicate nibbles
// #include<stdio.h>
// unsigned int remove_duplicate(unsigned int num)
// {
//  int seen[16]={0};
//  unsigned int temp,nibble[16],res=0;
//  int count=0;
//  temp=num;
//  while(temp!=0)
//  {
//   //extract nibble
//   nibble[count++]=(temp)&0x0f;
//   temp=temp>>4;
//  }
//   for(int i=count-1;i>=0;i--)
//   {
//   if(seen[nibble[i]]==0)
//   {
//     seen[nibble[i]]=1;
//     res=(res<<4)|nibble[i];
//   }
//   }

 
 
// return res;
// }

// int main()
// {
//     unsigned int num,result;
//     printf("enter the number: ");
//     scanf("%x",&num);
//     printf("%X\n",num);
//     result=remove_duplicate(num);
//     printf("after removinf the duplicates umber is %X\n",result);
//     return 0;
// }

// #include <stdio.h>

// unsigned int remove_duplicate(unsigned int num)
// {
//     int seen[16] = {0};
//     unsigned int nibbles[16]; // store each nibble
//     int count = 0;

//     // Step 1: Extract all nibbles (right to left)
//     unsigned int temp = num;
//     while (temp != 0) {
//         nibbles[count++] = temp & 0x0F;
//         temp >>= 4;
//     }

//     // Step 2: Rebuild number left to right (reverse traversal of array)
//     unsigned int res = 0;
//     for (int i = count - 1; i >= 0; i--) {
//         if (seen[nibbles[i]] == 0) {
//             seen[nibbles[i]] = 1;
//             res = (res << 4) | nibbles[i];
//         }
//     }

//     return res;
// }

// int main()
// {
//     unsigned int num, result;
//     printf("Enter the number (in hex): ");
//     scanf("%x", &num);

//     printf("Original number: %X\n", num);
//     result = remove_duplicate(num);
//     printf("After removing duplicates: %X\n", result);

//     return 0;
// }

