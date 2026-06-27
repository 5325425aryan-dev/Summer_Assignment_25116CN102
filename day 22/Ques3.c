#include<stdio.h>

int main()
 {
    char s[100],ch;
    int count=0;

    gets(s);
    scanf("%c",&ch);

    for(int i=0;s[i];i++)
        if(s[i]==ch)
            count++;

    printf("%d",count);
}