#include<stdio.h>

int main()
 {
    char s[100];
    int v=0,c=0,i=0;

    gets(s);

    while(s[i]) 
    {
        char ch=s[i];

        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
         {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
               ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                v++;
            else
                c++;
        }
        i++;
    }

    printf("Vowels=%d\nConsonants=%d",v,c);
}