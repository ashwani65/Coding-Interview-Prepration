#include <sys/time.h>
#include <iostream>
using namespace std;

long getTimeinMicroSeconds()
{
	struct timeval start;
	gettimeofday(&start,NULL);
	return start.tv_sec*1000000+start.tv_usec;
}

void selectionSort(int a[],int n){
	for(int j=0;j<n-1;j++){
		int min=a[j];
		int pos=j;
		for(int i=j+1;i<n;i++){
			if(a[i]<min){
				min=a[i];
				pos=i;
			}
			int temp=a[j];
			a[j]=min;
			a[pos]=temp;
		}
	}
}

int main(){
	for(int n=10;n<=1000000;n*=10){
		int *arr=new int[n];
		long starttime,endtime;
		for(int i=0;i<n;i++){
			arr[i]=n-i;
		}
		starttime=getTimeinMicroSeconds();
		selectionSort(arr,n);
		endtime=getTimeinMicroSeconds();

		cout<<"Slection Sort n= "<<n<<" Time= "<<endtime-starttime<<endl;
	}
}