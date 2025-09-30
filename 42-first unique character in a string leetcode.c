// Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

 

// Example 1:

// Input: s = "leetcode"

// Output: 0

// Explanation:

// The character 'l' at index 0 is the first character that does not occur at any other index.

// Example 2:

// Input: s = "loveleetcode"

// Output: 2

// Example 3:

// Input: s = "aabb"

// Output: -1

 

// Constraints:

// 1 <= s.length <= 105
// s consists of only lowercase English letters.



#include<stdio.h>
int first_uniquecharacter(char *s)
{
    int i=0;
    int freq[26]={0};
    for(i=0;s[i]!='\0';i++)
    {
       freq[s[i]-'a']++;
    }
    for(i=0;s[i]!='\0';i++)
    {
        if(freq[s[i]-'a']==1)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    char str[100],res;
    printf("enter the string: ");
    scanf("%[^\n]",str);
    printf("%s\n",str);
    res=first_uniquecharacter(str);
    if(res==-1)
    {
        printf("no unique character\n");

    }
    else
    {
        printf("unique character at index %d\n",res);
    }
    return 0;
}