// recursive algorithm for roatation of array
//concept is to divide array in two parts and then reverse the array then merge it
#include <iostream>

using namespace std;

int reverseArray(int arr[], int start, int end){
	while(start < end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void leftRotate(int arr[],int d, int n){
	if(d == 0){
		return;
	}
	d=d%n;
	reverseArray(arr, 0, d-1);
	reverseArray(arr, d, n-1);
	reverseArray(arr, 0, n-1); 
	 
}

int printTheArray(int arr[], int n){
	for(int i = 0 ; i < n; i++){
		cout << "\n" << arr[i];
	}
}


int main (){
	int arr[] = {1,2,3,4,5,6,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	int d ;
	
	cout << "Enter value for rotation";
	cin >> d;
	leftRotate(arr,d,n);
	printTheArray(arr,n);
	return 0;
}
