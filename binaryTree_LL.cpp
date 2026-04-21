#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
	
	Node(int val) : data(val), left(nullptr), right(nullptr) {}	

};

Node* insertNode(Node* root, int val){
	Node* newNode = new Node(val);
	
	if(root == nullptr){
		return newNode;  // first val becomes root node
	}
	
	queue<Node*> q; // for storing the other childern values
	q.push(root); // adds root node to the queue
	
	while(!q.empty()){
		Node* temp = q.front();
		q.pop();
		
		if(temp->left == nullptr){
			temp->left = newNode;
			break;
		}else{
			q.push(temp->left);
		}
		
		if(temp->right == nullptr){
			temp->right = newNode;
			break;
		}else{
		q.push(temp->right);
		}
	}
	return root;
}

void preOrder(Node* root){
	if(root == nullptr) return;
	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right); 
}

void inOrder(Node* root){
	if(!root) return;
	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}

void postOrder(Node* root){
	if(root == nullptr) return;
	postOrder(root->left);
	postOrder(root->right);
	cout<< root->data<< " ";
}

int main(){
	Node* root = nullptr;
	int n, value;
	
	cout << "How many nodes do you want to add: ";
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cout << "Enter value for Node: ";
		cin >> value;
		root = insertNode(root, value);
	}
	
	cout << "\nTree created successfully!" << endl;
	cout << "Pre-order Traversal: ";
	preOrder(root);
	cout << endl;
	cout << "In-order Traversal: ";
	inOrder(root);
	cout << endl;
	cout << "Post-order Traversal: ";
	postOrder(root);
	cout << endl;
	return 0;
}
