#include<iostream>
using namespace std;

int main(){
    int size, data;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the array elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to find: ";
    cin >> data;

    int low = 0;
    int upper = size-1;
    int mid = 0;

    while(low <= upper) {
        int mid = (low + upper) / 2; 
        if(arr[mid] == data){
            mid = mid;               
        }
        else if(arr[mid] < data){
            low = mid + 1;
        }
        else {
            upper = mid - 1;
        }
    }

    if(mid){ 
        cout << "Middle: " << mid;
    } 
    return 0;
}