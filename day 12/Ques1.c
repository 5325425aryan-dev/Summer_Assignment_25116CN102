#include <stdio.h>

int isPalindrome(int n)
 {
    int temp = n, rev = 0;

    while(n > 0)
     {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return (temp == rev);
}

int main()
 {
    int n;
    scanf("%d", &n);

    if(isPalindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}