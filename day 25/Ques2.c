#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];

    scanf("%s", s1);
    scanf("%s", s2);

    printf("Common Characters: ");

    for(int i = 0; s1[i] != '\0'; i++) {
        for(int j = 0; s2[j] != '\0'; j++) {
            if(s1[i] == s2[j]) {
                printf("%c ", s1[i]);
                break;
            }
        }
    }

    return 0;
}