 #include<stdio.h>


int main()
{
    //declare the string
    char str[1000];
    
    //declare the variables 
    int start=0,end=0,max_len=0,max_start=0;
    printf("enter the string: ");
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]!=' ' )&& (i==0||str[i-1]==' '))
        {
            start=i;
        }
        if((str[i]!=' ') && (str[i+1]==' '||str[i+1]=='\0'))
        {
            end=i;
            int word_len=end-start+1;
             if(word_len>max_len)
             {
                max_len=word_len;
                 max_start=start;
             }
//            
        }

    }
    printf("the largest word in the sentence is: ");
    for(int i=max_start;i<max_len+max_start;i++)
    {
        putchar(str[i]);

    }
    printf(" ");
  printf("the largest word length is  %d\n",max_len);
  return 0;
}

