#include <iostream>
#include <stdio.h>
using namespace std;
long int count = 0;
long long merge(long long A[],int start,int mid,int end);
long long merge_sort(long long A[],int start,int end);
int main()
{
	int n;
	scanf("%d",&n);
	long long A[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	merge_sort(A,0,n-1);
	/*for (int i = 0; i < n; ++i)
	{
		cout<<A[i]<<" ";
	}*/
	cout<<count<<"\n";
	return 0;
}
long long merge(long long A[],int start,int mid,int end)
{
	int n1 = mid - start + 1;
	int n2 = end - mid;
	long long k,L[n1],R[n2],i,j;
	for (int i = 0; i < n1; ++i)
	{
		L[i] = A[start + i];
	}
	for (int i = 0; i < n2; ++i)
	{
		R[i] = A[mid + 1 +i];
	}
	i = 0;
	j = 0;
	k = start;
	while(i < n1 && j < n2)
	{
		if(L[i] <= R[j])
		{
			A[k] = L[i];
			i++;
		}
		else
		{
			A[k] = R[j];
			count+= (n1-i) ;// very important and main step 
			j++;
		}
		k++;
	}
	while(i < n1)
	{
		A[k] = L[i];
		i++;
		k++;
	}
	while(j < n2)
	{
		A[k] = R[j];
		j++;
		k++;
	}
}

long long merge_sort(long long A[],int start,int end)
{
	if (start < end)
	{
		int mid = (start+end)/2;
		merge_sort(A,start,mid);
		merge_sort(A,mid+1,end);
		merge(A,start,mid,end);
	}
}