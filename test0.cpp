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
    int i,m=0,n,h,min[10]={0},wood[100];
    while(~scanf("%d",&n),n!=0)
    {
        h=0;
        for(i=0;i<n;i++)
        {scanf("%d",&wood[i]);
        h+=wood[i];}
        int aver=h/n;
        selectionsort(wood,n);
        for(i=0;i<n;i++)
        {
            if(wood[i]<aver)
                min[m]+=(aver-wood[i]);
            else if(wood[i]>aver)
                min[m]+=(wood[i]-aver);
        }
        m++;
    }
    for(i=0;i<m;i++)
    {printf("%d\n",min[i]/2);
    printf("\n");}
    return 0;
}
