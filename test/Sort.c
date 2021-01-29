#include"Sort.h"

int GetMidIndex(int*a,int begin,int end)
{
  int mid=(begin+end)/2;

  if(a[mid]>a[begin])
  {
    if(a[mid]<a[end])
      return mid;
    else if(a[begin]>a[end])
      return begin;
    else 
      return end;
  }
  else//a[mid]<a[begin] 
  {
    if (a[mid]>a[end])
      return mid;
    else if (a[begin]<a[end])
      return begin;
    else 
      return end;
  }

}

void Swap(int*x,int *y)
{
  int tmp=*x;
  *x=*y;
  *y=tmp;
}

int PartSort(int*a,int begin,int end)
{
  int midIndex= GetMidIndex(a,begin, end);
  Swap(&a[midIndex],&a[end]);

  int key=a[end];

  while(begin<end)
  {
    while(begin<end&&a[begin]<=key)
      ++begin;
    //左边找到比key大的，填到右边的坑里
    a[end]=a[begin];

    while(begin<end&&a[end]>=key)
      --end;
    //右边找小的填到左边的坑中
    a[begin]=a[end];

  }
  a[begin]=key;
  return begin;
}

void QuickSort(int *a,int left,int right)
{
  if(left<right)
  {
    
    int div= PartSort(a,left,right);
    QuickSort(a,left,div-1);
    QuickSort(a,div+1,right);
  }

}

