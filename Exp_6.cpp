#include<bits/stdc++.h>
using namespace std;

class Stack{
    private:
        int top;
        int size;
        int* arr;
    
    public:
        Stack(int s){
            size = s; // We initialized size only because we have declared it in main method and other two are initialized here
            top = -1;
            arr = new int[size];
        }
        
        //Destructor for deleting the dynamic allocated memory space
        ~Stack() {
            delete[] arr; 
        }
    
        void push(int x){
            if(top == size-1){
                cout << "Stack overflow" << endl;
            }else{
                arr[++top] = x;
                cout << "The vlaue " << x << " is pushed to stack" << endl;
                cout << endl;
            }
        }
        
        void pop(){
            if(top == -1){
                cout << "Stack underflow" << endl;
            }else{
                cout << "The element " << arr[top--] << " is popped. " << endl;
            }
            cout << endl;
        }
        
        bool isFull(){
            if(top == size-1){
                return true;
            }else{
                return false;
            }
            cout << endl;
        }
        
        bool isEmpty(){
            if(top == -1){
                return true;
            }else{
                return false;
            }
            cout << endl;
        }
        
        void peak(){
            if(top == -1){
                cout << "Stack is empty" << endl;
            }else{
                cout << "The top element is " << arr[top] << endl;
            }
            cout << endl;
        }
};



int main(){
	int choice,num,size;
	cout << "----Stack as Array----" << endl;
	
	cout << "Enter the size of the stack: ";
	cin >> size;
	
	Stack s1(size);
	
	while(true){
	    cout <<"Select the option to perform the operation on Stack " << endl;
	    cout << "1.push" << endl;
	    cout << "2.pop" << endl;
	    cout << "3.isFull" << endl;
	    cout << "4.isEmpty" << endl;
	    cout << "5.peak" << endl;
	    cin >> choice;
	    
	    switch(choice){
		case 1:
		    cout << "You selected push operation" << endl;
			cout << endl;
		    if(s1.isFull()){
		        cout << "Stack is already full"<< endl;
		    }else{
		        while(!s1.isFull()){
		            cout << "Enter a number you want to push: ";
			        cin >> num;
			        s1.push(num);
		        }
		        cout << "Stack is overflowing... Returning to main menu" << endl;
		        cout << endl;
		    }
            break;
          
        case 2:
            cout << "You selected pop operation" << endl;
            s1.pop();
            break;
            
        case 3:
            cout << "You selected isFull operation" << endl;
            if(s1.isFull()){
                cout << "True" << endl;
            }else{
                cout << "False" << endl;
            }
            cout << endl;
            break;
            
        case 4:
            cout << "You selected isEmpty operation" << endl;
            if(s1.isEmpty()){
                cout << "True" << endl;
            }else{
                cout << "False" << endl;
            }
            cout << endl;
            break;
            
        case 5:
            cout << "You selected peak operation"<< endl;
            s1.peak();
            break;
            
        default:
            cout << "Invalid Choice" <<endl;
            cout << endl;
            break;
	}
	}
return 0;
}