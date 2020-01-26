//Author:ashwani Singh
#include <sys/time.h>
#include <iostream>
using namespace std;

long getTimeinMicroSeconds()
{
	struct timeval start;
	gettimeofday(&start,NULL);
	return start.tv_sec*1000000+start.tv_usec;
}

void merge(int arr[],int start,int mid,int end){
	int temp[end-start];
	int i=start;
	int j=mid-1;
	int k=0;
	while(i<=mid && j<=end){
		if(arr[i]<arr[j]){
			temp[k++]=arr[i++];
		} else{
			temp[k++]=arr[j++];
		}
	}
	if(i<mid){
		while(i<=mid){
			temp[k++]=arr[i++];
		}
	}
	else if(j<=end){
		while(j<=end){
			temp[k++]=arr[j++];
		}
	}
	k=0;
	for(int l=start;l<=end;l++){
		arr[l]=temp[k++];
	}
}

void mergesort(int arr[],int start,int end){
	if(start>=end){
		return;
	}
	int mid=(end+start)/2;
	mergesort(arr,start,mid);
	mergesort(arr,mid+1,end);
	merge(arr,start,mid,end);
}

int main(){
	for(int n=10;n<=1000000;n*=10){
		int *arr=new int[n];
		long starttime,endtime;
		for(int i=0;i<n;i++){
			arr[i]=n-i;
		}
		starttime=getTimeinMicroSeconds();
		mergesort(arr,0,n-1);
		endtime=getTimeinMicroSeconds();

		cout<<"Merge sort n= "<<n<<" Time= "<<endtime-starttime<<endl;
	}
}
