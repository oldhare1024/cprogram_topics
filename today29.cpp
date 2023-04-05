#include<stdio.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionsort(int arr[], int len)
{
    int i,j;
    for (i = 0 ; i < len - 1 ; i++)
    {
        int min = i;
        for (j = i + 1; j < len; j++)    
            if (arr[j] < arr[min])    
                min = j;    
        swap(&arr[min], &arr[i]);    
    }
}
int main()
{
    int i,n,h,min,wood[100];
    while(~scanf("%d",&n),n!=0)
    {
        h=0,min=0;
        for(i=0;i<n;i++)
        {scanf("%d",&wood[i]);
        h+=wood[i];}
        int aver=h/n;
        selectionsort(wood,n);
        for(i=0;i<n;i++)
        {
            if(wood[i]<aver)
                min+=(aver-wood[i]);
            else if(wood[i]>aver)
                min+=(wood[i]-aver);
        }
        printf("%d\n",min/2);
    }
    return 0;
}
