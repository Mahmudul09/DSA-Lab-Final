#include<stdio.h>
void quick(int a[100],int lb, int ub)
{
    int s,e,swap,pivot;
    s=lb;
    e=ub;
    pivot=lb;
    if(lb<ub)
    {
        while(s<e)
        {
            while(a[s]<=a[pivot])
            {
                s++;
            }
            while(a[e]>a[pivot])
            {
                e--;
            }
            if(s<e)
            {
                swap=a[s];
                a[s]=a[e];
                a[e]=swap;
            }
        }
        swap=a[e];
        a[e]=a[pivot];
        a[pivot]=swap;
        quick(a,lb,e-1);
        quick(a,e+1,ub);

    }
}

int main()
{

    int a[100],n,i;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter %d elements:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    quick(a,0,n-1);
    printf("Sorting array:");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
