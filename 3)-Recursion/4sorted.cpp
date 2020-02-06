#include <iostream>
#include <vector>
using namespace std;

//alternatively
bool is_sorted2(int a[], int size) {
	if (size == 0 || size ==1) {
		return true;
	}

	bool isSmallerOutput = is_sorted2(a + 1, size -1);
	if (!isSmallerOutput) {
		return false;
	}
	if (a[0] > a[1]) {
		return false;
	} else {
		return true;
	}

}

bool is_sorted(int a[], int size) {
	if (size == 0 || size ==1) {
		return true;
	}

	if (a[0] > a[1]) {
		return false;
	}
	bool isSmallerSorted = is_sorted(a + 1, size - 1);
	return isSmallerSorted;
	/*if (isSmallerSorted) {
		return true;
	} else {
		return false;
	}*/
}


int main()
{ 
	
	int n; cin>>n;
    vector<int> A(n);
     for(int i=0;i<n;++i){
            cin>>A[i];
        }
	cout<<is_sorted(A,n);
	// cout<<is_sorted2(A,n);
	return 0;
}