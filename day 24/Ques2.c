#include<stdio.h>

int main() {
    char s[100];
    gets(s);

    int count=1;

    for(int i=0;s[i];i++) 
    {
        if(s[i]==s[i+1])
            count++;
        else 
        {
            printf("%c%d",s[i],count);
            count=1;
        }
    }
}