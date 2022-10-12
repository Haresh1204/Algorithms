#include <iostream>
using namespace std;

template <class T>
struct DoubleLinkedList{
	struct Node{
		T data;
		Node *next;
		Node *prev;
	};

	Node *n=NULL, *head=NULL, *tail=NULL, *x=NULL;

	void addNewNode(T i){
		n = new Node;
		n->data = i;
		n->prev = NULL;
		head = n;
		tail = n;
		tail->next = NULL;
	}

	void addNodeLast(T i){
		n = new Node;
		n->data = i;
		n->prev = tail;
		tail->next = n;
		tail = n;
		tail->next = NULL;
	}

	void addNodeFront(T i){
		n = new Node;
		n->data = i;
		n->next = head;
		head->prev = n;
		n->prev = NULL;
		head = n;
	}

	void addNodeMiddle(T i, T j){
		x = head;
		while(x->data != j) x = x->next;
		n = new Node;
		n->data = i;
		n->next = x->next;
		x->next = n;
		n->prev = x;
		x = n->next;
		x->prev = n;
	}

	void addData(T i){
		if(head == NULL)
			addNewNode(i);
		else
			addNodeLast(i);
	}

	void readDataFront(){
		x = head;
		while(x!=NULL){
			cout << x->data << " ";
			x = x->next;
		}
	}

	void readDataLast(){
		x = tail;
		while(x!=NULL){
			cout << x->data << " ";
			x = x->prev;
		}
	}

	void deleteDataFront(){
		x = head;
		head = head->next;
		delete(x);
		x = NULL;
		head->prev = NULL;
	}

	void deleteDataMiddle(T i){
		Node *temp = NULL;
		x = head;
		while(x->data != i){
			temp = x;
			x = x->next;
		}
		temp->next = x->next;
		temp = x->next;
		temp->prev = x->prev;
		delete(x);
		x = NULL;
	}

	void deleteDataLast(){
		x = tail;
		tail = tail->prev;
		delete(x);
		x = NULL;
		tail->next = NULL;
	}


	bool searchData(T i){
		x = head;
		while(x!=NULL){
			if (i == x->data) return true;
			x = x->next;
		}
		return false;
	}

	void DeleteData(T i){
		if(!cariData(i)) return;
		
		if (i == head->data)
			deleteDataFront();
		else if (i == tail->data)
			deleteDataLast();
		else
			deleteDataMiddle(i);
	}
};
int main(){
	DoubleLinkedList<string> list;
	list.addData("Hasan");
	list.addData("budi");
	list.addData("Taufiq");
	list.addData("Andi");
	list.readDataFront();
	cout << endl;
	list.readDataLast();
}
