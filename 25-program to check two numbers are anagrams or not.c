//anagrams means takeing two number comparing the digits in each and both contains same didgit for same number of times it is called anagrams
#include<stdio.h>
int anagram_or_not(int num1,int num2)
{
    int count1[10]={0};//to store freq of each digit in num1
    int count2[10]={0};
    while(num1>0)
    {
        count1[num1%10]++;
        num1=num1/10;
    }
    while(num2>0)
    {
        count2[num2%10]++;
        num2=num2/10;
    }
    for(int i=0;i<10;i++)
    {
    if(count1[i]!=count2[i])
    {
        return 0;
    }
    }
    return 1;
}
int main()
{
    int num1,num2;
    printf("enter num1 and num2: ");
    scanf("%d %d",&num1,&num2);
    if(anagram_or_not(num1,num2))
    {
        printf("the given numbers are anagram\n");
    }
    else
    {
       printf("the given numbers are not anagram\n");
    }

}