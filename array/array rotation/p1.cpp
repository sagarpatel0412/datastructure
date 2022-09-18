//program for array rotation approach 1

#include<iostream>
using namespace std;

int arrayRotation(int arr[], int a, int n){
	int rarr[n]; //temp array for rotation 
	
	int k =0; 
	for(int i = a; i < n ; i ++ ){
		rarr[k] = arr[i];  // logic for neglecting first 'a' position of array stroing after that 
		k++; 
	}
	cout << k;
	for (int i =0; i < a; i ++ ){
		rarr[k] = arr[i]; //appending first a element from original array after kth postion 
		k++;
	}
	
	for (int i=0; i < n; i++){
		arr[i] = rarr[i]; // storing value from temp array to original array
	}
}
int printArray(int arr[], int n){
	for (int i = 0; i < n; i++){
		cout << "\n "<<arr[i]; //logic for printing array
	}
}


int main(){
int arr[] = {1,2,3,4,5,6,7};
int a;
cout << "Give a number for rotating of array";
cin >> a;

int n = sizeof(arr)/sizeof(arr[0]);

arrayRotation(arr, a, n);
printArray(arr, n);

return 0;
}

