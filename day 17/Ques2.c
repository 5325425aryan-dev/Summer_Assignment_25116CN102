#include<stdio.h>
int main()
 {
    int n1,n2,i,j,flag;
    scanf("%d%d",&n1,&n2);

    int a[n1],b[n2];
    for(i=0;i<n1;i++) scanf("%d",&a[i]);
    for(i=0;i<n2;i++) scanf("%d",&b[i]);

    for(i=0;i<n1;i++) printf("%d ",a[i]);

    for(i=0;i<n2;i++) 
    {
        flag=0;
        for(j=0;j<n1;j++)
            if(b[i]==a[j]) flag=1;

        if(!flag) printf("%d ",b[i]);
    }
    return 0;
}