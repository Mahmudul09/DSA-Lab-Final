#include<stdio.h>
int main()
{
    int arr[100],i,n,search;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0; i<n; i++){
        scanf("%d ",&arr[i]);
    }
    printf("Enter searching value:");
    scanf("%d",&search);
    for(i=0; i<n; i++){
        if(arr[i]==search){
            printf("%d location at %d",search,i+1);
        }
    }
    if(i==n){
        printf("%d isn't located in this array",search);
    }
    return 0;
}
