#include<stdio.h>

bool linear_search(int ar[],int size,int key)
      {
        int i,flag=0;
        for(i=0;i<size,i++)
		{
			if(ar[i]==key)
				{
					flag=1;
					break;
				}
		}
	  if(flag==1)
		{
			return true;
	else
			return false;
		}
bool binary_search(int ar[],int size,int key)
   {
	selection_sort(array,size);
	int i,mid,low,high;
	low=0,flag=0;
	high=size-1;
      for(i=0;i<size;i++)
	 {
		mid=(low+high)/2;
		if(ar[mid]==key)
			flag=1;
			break;
		elseif(ar[mid]<key)
			low=mid+1;
		else
			high=mid-1;
         }
		if(flag==1)
			return true;
		else
			return false;
   }