//block swap algorithm for array rotation

#include<iostream>
using namespace std;

void printArray(int arr[], int size);
void swap(int arr[],int fi,int si, int d);

void leftRotate(int arr[], int d, int n){
	if(d==0 || d==n){
		return;
	}
	if(d > n){
		d=d%n; //2
	} //7-2 = 5 == 2 false
	if( n-d == d ){ // 3 == 2
		swap(arr,0,n-d,d);
		return;
	}
	//2 < 7-2 =5
	if(d < n-d){ // 2 < 3
		swap(arr,0,n-d,d); //[], 0, 5, 2 --> [],0,3,
		leftRotate(arr,d,n-d); // [] , 2 ,5
	}
	else{
		swap(arr,0,d,n-d);
		leftRotate(arr+n-d,2*d-n,d);
	}
}

void printArray(int arr[],int size){
	int i;
	for(i = 0;i < size; i++){
		cout << arr[i] << " "<<endl;
	}
}

void swap(int arr[], int fi, int si, int d){ // [], 0, 5, 2
	int i,temp;
	for( i=0; i<d; i++){ // 
		temp =arr[fi + i]; //temp = arr[0+ 0] =1
		arr[fi + i] = arr[si + i];//1 = arr[5+0] = 6
		arr[si + i] = temp;
	}
}


int main(){
	int arr[] = {1,2,3,4,5,6,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	int a;
	
	cout << "enter number";
	cin >> a;
	leftRotate(arr,a,n);
	printArray(arr,n);
	return 0;
}
