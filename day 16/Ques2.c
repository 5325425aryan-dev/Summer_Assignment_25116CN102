#include <stdio.h>

int main() 
{
    int n;

    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int maxCount=0, element;

    for(int i=0;i<n;i++)
     {
        int count=1;

        for(int j=i+1;j<n;j++) 
        {
            if(arr[i]==arr[j])
                count++;
        }

        if(count>maxCount)
         {
            maxCount=count;
            element=arr[i];
        }
    }

    printf("%d",element);

    return 0;
}