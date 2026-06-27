#include<stdio.h>

int main()
 {
    char s[100];

    gets(s);

    for(int i=0;s[i];i++) 
    {
        int flag=0;

        for(int j=0;j<i;j++)
            if(s[i]==s[j])
                flag=1;

        if(!flag)
            printf("%c",s[i]);
    }
}