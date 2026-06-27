#include<stdio.h>
int main()
 {
    int n,key,l=0,r,mid,i;
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    scanf("%d",&key);

    r=n-1;

    while(l<=r) 
    {
        mid=(l+r)/2;

        if(a[mid]==key) 
        {
            printf("Found");
            return 0;
        }
        else if(a[mid]<key)
            l=mid+1;
        else
            r=mid-1;
    }

    printf("Not Found");
    return 0;
}