#include<stdio.h> 
int insertion_sort(int arr[], int len){
        int i,j,key;
        for (i=1;i<len;i++){
                key = arr[i];
                j=i-1;
                while((j>=0) && (arr[j]>key)) {
                        arr[j+1] = arr[j];
                        j--;
                }
                arr[j+1] = key;
        }
} 
int main()
{
	int i=0;
	int arr[15]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    insertion_sort(arr,15);
	for(i=0;i<15;i++)
	printf("%d ",arr[i]);
	return 0;
}
