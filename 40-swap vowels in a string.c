#include<stdio.h>
char*swap_vowels(char*s)
{
    int i=0,j=0;
    //find len of string
    while(s[j]!='\0')
    {
      j++;
    }
    j--;//now j points to last character

 

    // loop from both ends
    while (i < j) {
        // move i forward until vowel
        while (i < j && !(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
                          s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')) {
            i++;
        }
        // move j backward until vowel
        while (i < j && !(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||
                          s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')) {
            j--;
        }
        // swap if both vowels found
        if (i < j) {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
    return s; // return modified string
    
}
int main()
{
    char str[100],*p;
    printf("enter the string: ");
    scanf("%[^\n]",str);
    printf("%s\n",str);
    p=swap_vowels(str);
    printf("%s\n",p);
    return 0;
}