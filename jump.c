#include <stdio.h>
#include <math.h>

int linears(int a[], int l,int n, int key)
{
    for (int i = l;i < n;i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int jumps(int a[],int n,int key)
{
    int s=sqrt(n);
    int p=0,c=0;
    while(a[s]<=key && s<n)
    {
        p=s;
        s=s+sqrt(n);
        if(s>n-1)
            s=n;
    }
    c=linears(a,p,s,key);
    if(c==-1)
    {
        printf("Not found");
    }
    else
        printf("found at %d index ",c);
}

void main()
{
    int n, key;
    printf("enter n ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements ");
    for (int i = 0;i < n;i++) {
        scanf("%d", &a[i]);
    }
    printf("enter key to search ");
    scanf("%d", &key);
    jumps(a, n, key);
}