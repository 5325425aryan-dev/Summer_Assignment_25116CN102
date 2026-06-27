#include<stdio.h>
#include<string.h>

int main()
 {
    char s[100];

    gets(s);

    for(int i=0;s[i];i++)
     {
        int count=0;

        for(int j=0;s[j];j++)
            if(s[i]==s[j])
                count++;

        if(count==1)
         {
            printf("%c",s[i]);
            break;
        }
    }
}