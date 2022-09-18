//program for array rotation approach 2
#include<iostream>
using namespace std;

int arrayRotation(int arr[], int a, int n){
	int p=0; // initially p is 0
	while(p < a){
		int last = arr[0]; //storing 1 postion in under while loop
		for (int i = 0; i < n; i ++){
			arr[i] = arr[i + 1];
		}
		arr[n-1] = last;
		p++;	
	}
	
}

int printArray(int arr[], int n){
	for (int i = 0; i< n; i++){
		cout << "\n" << arr[i];
	}
}

int main() {
	int arr[] = {1,2,3,4,5,6,7};
	int a;
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout << "enter number" ;
	cin >> a;
	arrayRotation(arr, a, n);
	printArray(arr, n);
	return 0;
}
