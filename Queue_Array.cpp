#include<bits/stdc++.h>
using namespace std;

class Queue{
	private:
		int size;
		int *arr;
		int front;
	public:	
		Queue(int s){
			size = s;
			front = -1;
			arr = new int[size];
		}
		
		~Queue(){
			delete[] arr;
		}
		
		void push(int x){
			if(front == size - 1){
				cout << "Queue Overflow" << endl;
			}else{
				arr[++front] = x;
				cout << "The value " << x << " is pushed to queue" << endl;
				cout << endl;
			}
		}
		
		void pop(){
			if(front == -1){
				cout << "Stack UnderFlow" << endl;
				cout << endl;
			}else{
				cout << "The element " << arr[front--] << " is removed from the queue" << endl;
				cout << endl;
			}
		}
		
		bool isFull(){
			if(front == size -1){
				return true;
			}else{
				return false;
			}
		}
		
		bool isEmpty(){
			if(front == -1){
				return true;
			}else{
				return false;
			}
			cout << endl;
		}
};


int main(){
	
	int size, choice, num;
	
	cout << "-----Queue as an array-----"<< endl;
	
	cout << "Enter the size of the queue: ";
	cin >> size;
	
	
	Queue q1(size);
	
	while(true){
	
	cout << "Select the option to perform opertion on queue: " << endl;
	cout << "1.push" << endl;
	cout << "2.pop" << endl;
	cout << "3.isFull" << endl;
	cout << "4.isEmpty" << endl;
	cin >> choice;
	cout << endl;
	
	switch(choice){
		case 1:
			cout << "You selected push operation: " << endl;
			if(q1.isFull()){
				cout << "Queue is already full" << endl;
			}else{
				while(!q1.isFull()){
					cout << "Enter a number to push into queue: ";
					cin >> num;
					q1.push(num);
				}
				cout << "Queue is overflowing" << endl;
				cout << endl; 
			}
			break;
			
		case 2:
			cout << "You selected delete operation: " << endl;
			q1.pop();
			break;
			
		case 3:
			cout << "You selected is Full operation: " << endl;
			if(q1.isFull()){
				cout << "True - Queue is Full" << endl;
			}else{
				cout << "False - Queue is Empty" << endl;
			}
			cout << endl;
			break;
		
		case 4:
			cout << "You selected is Empty operation: " << endl;
			if(q1.isEmpty()){
				cout << "True" << endl;
			}else{
				cout << "False" << endl;
			}
			cout << endl;
			break;
		
		default:
			cout << "You entered Invalid choice !!" << endl;
			break;
			
	}
	}
	return 0;
}
