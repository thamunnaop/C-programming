/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true

 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.*/

#include<stdio.h>
#include<stdbool.h>
#define MAX 100
bool is_valid(char *s)
{
   
  
    //declare a stack 
    char stack[MAX];
    int top=-1;
    while(*s!='\0')
    {
        if(*s=='('||*s=='{'||*s=='[')
        {
            stack[++top]=*s;//push

        }
        else
        {
            if(top==-1)
            {
                return false;

            }
            char topchar=stack[top--];
            if((*s==')'&&topchar!='(')||(*s==']'&&topchar!='[')||(*s=='}'&&topchar!='{'))
            {
                return false;
            }
        }
        s++;
    }
    return top==-1;
}
int main()
{
    char str1[]="()[]{}";
    char str2[]="(]";
    char str3[]="({[]})";
    //call function to check valid parathesis
    printf("%s-%s\n",str1,is_valid(str1)?"true":"false");
     printf("%s-%s\n",str2,is_valid(str2)?"true":"false");
      printf("%s-%s\n",str3,is_valid(str3)?"true":"false");
}