#include<stdio.h>
void freq_str(char *str)
{
    int freq[256]={0};//to hold all asci
    int i=0;
    for( i=0;str[i]!='\0';i++)
    {
        freq[(unsigned char)str[i]]++;
        
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if(freq[(unsigned char)str[i]]!=0)
        {
        printf("%c-%d\n",str[i],freq[str[i]]);
        freq[(unsigned char)str[i]]=0;
        }
    }
}
int main()
{
    char str[100];
   
    printf("enter the string: ");
    scanf("%[^\n]",str);//dont use & as str is already a address
     
    freq_str(str);
}