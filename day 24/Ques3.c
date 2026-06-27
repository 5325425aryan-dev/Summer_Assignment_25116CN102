#include<stdio.h>
#include<string.h>

int main()
 {
    char s[100],word[100],longest[100];
    int i=0,j=0,max=0;

    gets(s);

    while(1) {
        if(s[i]==' '||s[i]=='\0') 
        {
            word[j]='\0';

            if(j>max) {
                max=j;
                strcpy(longest,word);
            }

            j=0;
            if(s[i]=='\0')
                break;
        }
        else
            word[j++]=s[i];

        i++;
    }

    puts(longest);
}