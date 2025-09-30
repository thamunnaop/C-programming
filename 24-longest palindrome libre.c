#include<stdio.h>
int main()
{
    
    char str[1000];
    printf("enter the string: ");
    scanf("%[^\n]",str);
    char left[1000],middle[2]="",right[1000];
    int freq[256]={0};
     int l=0,r=0;
     //for counting freq of each character
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
        freq[(int)str[i]]++;
        }
    }

    for(int i=255;i>0;i--)
    {
        if(freq[i]%2==0)
        {
            for(int j=0;j<freq[i]/2;j++)
            {
            left[l++]=(char)i;
            right[r++]=(char)i;
            }
        }
        else
        {
            for(int j=0;j<freq[i]/2;j++)
            {

            left[l++]=(char)i;
            right[r++]=(char)i;
            }

                if(middle[0]=='\0')
                {
                    middle[0]=(char)i;
                    middle[1]='\0';

                 }
        
         }
    }
    //now reverse the right part
    right[r]='\0';
    for(int i=0;i<r/2;i++)
    {
        char temp=right[i];
        right[i]=right[r-1-i];
        right[r-1-i]=temp;
    }
left[l]='\0';
printf("%s%s%s\n",left,middle,right);
return 0;

}