#include<stdio.h>
int main()
{
    int arr[100],i,j,swap,n,flag;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter %d elements:");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n-1; i++){
        flag=0;
        for(j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=swap;
                flag=1;
            }
        }
        if(flag=0)
        break;
    }
    printf("Sorting array:");
    for(i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
