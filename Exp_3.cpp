#include<iostream>
using namespace std;


int linearSearch(int arr[], int data, int size){
	for(int i = 0; i < size; i++){
		if(arr[i] == data){
			return i;
		}
	}
	return -1;
}

int main(){
	
	int size, data;
	
	cout << "Enter the size of the array: ";
	cin >> size;
	
	int arr[size];
	cout << "Enter the array elements: ";
	for(int i = 0; i < size; i++){
		cin >> arr[i];
	}


	cout << "Enter the element to find: ";
	cin >> data;

	int result = linearSearch(arr, data, size);

	if(result == -1){
		cout << "Element is not present in the array";
	}else {
		cout << "The element is present at the index: " << result;
	}

return 0;
}