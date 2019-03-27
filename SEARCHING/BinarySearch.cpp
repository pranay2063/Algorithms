#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int N = 10;

int randomGenerator(int a[], int n){
	srand(time(0));
	for(int i = 0; i < n; ++i)
		a[i] = rand()%(2*N);
}

int binarySearch(int a[], int n, int x){
	//Binary search can be applied on sorted array
	int start = 0, end = n;
	while(start <= end){
		int mid = (start+end)/2;
		if(x == a[mid]) return mid;
		else if(x < a[mid]) end = mid-1;
			 else start = mid+1;
	}
	return -1;
}

int main() {
	
	int num;
	int *a = new int[N];
	randomGenerator(a, N);
	sort(a, a+N);
	cout<<"Sorted array : ";
	for(int i = 0; i < N; ++i)
		cout<<a[i]<<" ";
	cout<<endl;	
	num = rand()%(2*N);
	int res = binarySearch(a, N-1, num);
	if(res == -1)
		cout<<num<<" does not exist in specified array"<<endl;
	else	cout<<num<<" exists in specified array"<<endl;	
		
	
	return 0;
}
