#include<stdio.h>
int main()
{
    int arr[100],i,j,temp;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0; i<n; i++){
        scanf("%d ",&arr[i]);
    }
    for(i=1 ; i<n; i++){
        temp=arr[i];
        for(j=i-1; j>=0 && arr[j]>temp; j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }
    printf("Sorting array:");
    for(i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
