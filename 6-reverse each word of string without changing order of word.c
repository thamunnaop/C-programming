#include<stdio.h>
int start=0,end=0,i,flag;
void str_rev(char*str,int start,int end);
void rev_each_word(char *str)
{
    
    int i = 0, start = 0;

    while (str[i] != '\0') {
        // Start of a word
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            start = i;
        }

        // End of a word
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')) {
            str_rev(str, start, i);
        }

        i++;
    }

    printf("%s\n",str);
}
void str_rev(char*str,int start,int end)
{
    
     while(start<end)
     {
    char temp=str[start];
     str[start]=str[end];
     str[end]=temp;
     start++;
     end--;
   }

}
int main()
{
    char str[100];
    printf("enter the string: ");
    scanf("%[^\n]",str);
    printf("%s\n",str);
    rev_each_word(str);
}