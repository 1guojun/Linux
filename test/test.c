#include"Sort.h"

int main()

{
  int a[]={3,2,5,8,4,7,6,9};
  int  n=sizeof(a)/sizeof(a[0]);
  QuickSort(a,0,n-1);
  int  i =0;
  for(;i<n;++i)
  {
    printf("%d ",a[i]);
  }
  printf("\n");
  return 0;
}
