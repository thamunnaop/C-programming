/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.*/

#include<stdio.h>
#include<string.h>
int my_strlen(char*str)
{
    int count=0;
    while(*str!='\0')
    {
        count++;
        str++;
    }
    return count;
}
char*longest_prefix(char **str,int strsize)
{
    if(strsize==0)
    {
        return 0;
    }
    for(int i=0;i<my_strlen(str[0]);i++)
    {
        char c=str[0][i];
        for(int j=1;j<strsize;j++)
        {
            if(i>=my_strlen(str[j])||str[j][i]!=c)
            {
                //mismatch or out of bound
                //cut the string at mismatch
                str[0][i]='\0';
                
                return str[0];
            }
        }
    }
    return str[0];
}
int main()
{
    //decclare a array of pointers to store the words
    char *str[]={"flower","flow","flight"};
    //find the size of array
    int strsize=sizeof(str)/sizeof(str[0]);
    //as modifying the code segment array is not possiblr 
    //we use
      char prefix[100];
    strcpy(prefix, str[0]);
    char *strs_for_func[sizeof(str)/sizeof(str[0])];
    strs_for_func[0] = prefix;
    for(int i = 1; i < strsize; i++)
        strs_for_func[i] = str[i];
    //call the function which chek longest prefix in the given strings
    char *result=longest_prefix(strs_for_func,strsize);
    printf("longest common prefix:%s\n",result);
    return 0;
}