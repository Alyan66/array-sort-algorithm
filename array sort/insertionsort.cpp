#include<iostream>
using namespace std;
class node {
public:
	int data;
	node* next;
	node(int val) {
		data = val;
		next = NULL;
	}
};
void insertathead(node*& head, int val) {
	node* n = new node(val);
	if (head == NULL) {
		n->next = n;
		n = head;
		return;
	}
	node* temp = head;
	while (temp->next != head) {
		temp = temp->next;
	}
	temp->next = n;
	n->next = head;
	head = n;
}
void insertatlast(node*& head, int val) {
	node* n = new node(val);
	if (head == NULL) {
		insertathead(head, val);
		return;
	}

	node* temp = head;
	while (temp->next != head) {
		temp = temp->next;
	}
	temp->next = n;
	n->next = head;
}
void display(node* head) {
	node* temp = head;
	do {
		cout << temp->data << " ->";
		temp = temp->next;
	} while (temp != head);

	cout << endl;
}
int main() {
	node* head = NULL;
	for (int i = 1; i <= 4; i++) {
		insertathead(head, i);
	}
	display(head);
}
