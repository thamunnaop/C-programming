/*for example :string:hello world umbrella
  Enter the substring: bre
  Substring found*/

  #include<stdio.h>
  
  int str_str(char *main,char*sub)
  {
    while(*main!='\0')
    {
        char*s1=main;
        char*s2=sub;
    
  
    while(*s1!='\0'&&*s2!='\0' && *s1==*s2)
    {
       s1++;
       s2++;
    }
    if(*s2=='\0')
    {
        return 1;//substring matched
    }
    main++;
}

    return 0;
    
  }
  int main(int argc,char **argv)
  {
    if(argc<2)
    {
        printf("insufficient cla passed: ");
        return 0;
    }
    char substr[100];
    int flag=0;
    printf("enter the substring: ");
    scanf("%[^\n]",substr);

    for(int i=1;i<argc;i++)
    {
        if(str_str(argv[i],substr))
        {
          flag=1;
          break;
        }
    }
    if(flag==1)
    {
        printf("substring found\n");
    }
    else{
        printf("substring not found\n");
    }
    return 0;
  }