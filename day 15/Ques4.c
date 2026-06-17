#include <stdio.h>

int main() 
{
    int n,k=0;

    scanf("%d",&n);

    int arr[n],temp[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<n;i++) 
    {
        if(arr[i]!=0)
            temp[k++]=arr[i];
    }

    while(k<n)
        temp[k++]=0;

    for(int i=0;i<n;i++)
        printf("%d ",temp[i]);

    return 0;
}