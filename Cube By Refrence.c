#include<stdio.h>

int sum(int*arr,int size)
{
int res =0;
for (int i=0;i<size;i++)
{
res+=*(arr+i);
}
return res;
}
int main()
{
int arr[10]={1,2,3,4,5,6,7,8,9,10};
printf("%d",sum(arr,10));
return 0;
}
