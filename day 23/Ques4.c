#include<stdio.h>

int main()
 {
    char s[100],maxChar;
    int freq[256]={0},max=0;

    gets(s);

    for(int i=0;s[i];i++)
        freq[s[i]]++;

    for(int i=0;i<256;i++)
        if(freq[i]>max)
         {
            max=freq[i];
            maxChar=i;
        }

    printf("%c",maxChar);
}