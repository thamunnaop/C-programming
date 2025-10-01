#include<stdio.h>
struct book
{
    int price;
    char title[10];
    char author[10];
};
int main()
{
struct book b[3];
for(int i=0;i<3;i++)
{
     scanf("%d\n",&b[i].price);
     scanf("%[^\n]",b[i].title);
     scanf(" %[^\n]",b[i].author);
}
for(int i=0;i<3;i++)
{
     printf("the price %d\n",b[i].price);
     printf("the title %s\n",b[i].title);
     printf("the author %s\n",b[i].author);
}
printf("most priced book: ");

if(b[0].price>b[1].price)
{
    if(b[0].price>b[2].price)
    {
         printf("the price %d\n",b[0].price);
        printf("the title %s\n",b[0].title);
       printf("the author %s\n",b[0].author);
    }
}
else if(b[1].price>b[0].price)
{
    if(b[1].price>b[2].price)
    {
        
         printf("the price %d\n",b[1].price);
        printf("the title %s\n",b[1].title);
       printf("the author %s\n",b[1].author);
    }
}
else
{
    printf("the price %d\n",b[2].price);
        printf("the title %s\n",b[2].title);
       printf("the author %s\n",b[2].author);
}
return 0;
}