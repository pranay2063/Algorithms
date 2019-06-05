
#include <bits/stdc++.h>

using namespace std;

class Node{
	//class to create node
	public:
	int data;
	Node *right;
	Node *left;
	Node(int data){
		//constructor to initialize node with data
		this->data = data;
		right = NULL;
		left = NULL;
	}
};

void MorrisInorder(Node *root){

	//Morris traversal creates additional links and then breaks them to bring original tree back
	if(root == NULL) return;

	Node *current = root;
	while(current != NULL){
		//left child of current is NULL
		if(current->left == NULL){
			cout<<current->data<<" ";
			current = current->right;
		}
		else{
			
			Node *pre = current->left;
			while(pre->right != NULL && pre->right != current)
				pre = pre->right;

			if(pre->right == NULL){
				pre->right = current;
				current = current->left;
			}
			else{
				cout<<current->data<<" ";
				pre->right = NULL;
				current = current->right;
			}

		}
	}
}

int main(){

	Node *root = new Node(10);
	root->left = new Node(5);
	root->right = new Node(2);
	root->left->left = new Node(11);
	root->left->right = new Node(13);
	root->right->left = new Node(41);
	root->right->right = new Node(37);
	root->left->left->left = new Node(6);
	root->left->left->right = new Node(18);

	cout<<"Inorder : ";
	MorrisInorder(root); 
	cout<<endl;

	return 0;

}

