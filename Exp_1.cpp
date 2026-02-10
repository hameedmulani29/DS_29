#include <iostream>
using namespace std;

int main() {
int n, choice;
cout << "Enter number of elements in array: ";
cin >> n;
int arr[n];
cout << "Enter " << n << " elements:\n";
for(int i = 0; i < n; i++) {
    cin >> arr[i];
}

cout << "\n---- MENU ----\n";
cout << "1. Find Maximum Number\n";
cout << "2. Find Minimum Number\n";
cout << "3. Display 2nd Element\n";
cout << "4. Add All Elements\n";
cout << "Enter your choice: ";
cin >> choice;

switch(choice) {
case 1: {
int max = arr[0];
for(int i = 1; i < n; i++) {
if(arr[i] > max)
max = arr[i];
}
cout << "Maximum number is: " << max;
break;
}

case 2: {
int min = arr[0];
for(int i = 1; i < n; i++) {
if(arr[i] < min)
min = arr[i];
}
cout << "Minimum number is: " << min;
break;
}

case 3:
if(n >= 2)
cout << "Second element is: " << arr[1];
else
cout << "Array does not have a second element.";
break;

case 4: {
int sum = 0;
for(int i = 0; i < n; i++) {
sum += arr[i];
}
cout << "Sum of all elements is: " << sum;
break;
}
default:
cout << "Invalid choice!";
}
return 0;
}