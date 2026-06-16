#include <stdio.h>

int main() 
{
    int n,key,pos=-1;

    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    scanf("%d",&key);

    for(int i=0;i<n;i++) 
    {
        if(arr[i]==key) 
        {
            pos=i;
            break;
        }
    }

    if(pos==-1)
        printf("Not Found");
    else
        printf("Found at index %d",pos);

    return 0;
}