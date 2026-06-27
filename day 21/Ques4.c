#include<stdio.h>

int main()
 {
    char s[100];
    gets(s);

    for(int i=0;s[i];i++) 
    {
        if(s[i]>='a'&&s[i]<='z')
            s[i]-=32;
    }

    puts(s);
}