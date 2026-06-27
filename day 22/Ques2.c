#include<stdio.h>

int main()
 {
    char s[100];
    int count=1;

    gets(s);

    for(int i=0;s[i];i++)
        if(s[i]==' ')
            count++;

    printf("%d",count);
}