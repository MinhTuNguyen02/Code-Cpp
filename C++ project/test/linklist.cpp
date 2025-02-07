#include <iostream>

using namespace std;

typedef struct TagNode{
	int data;
	TagNode *pNext;
}NODE;

typedef struct TagList{
	NODE *pHead;
	NODE *pTail;
}LIST;

void Initialize(LIST &l);
int IsEmpty(LIST l);
NODE *CreateNode(int x);
void InsertFirst(LIST &l, int x);
void InsertLast(LIST &l, int x);
void CreateList(LIST &l);
void ShowList(LIST l);
void InsertAfter(NODE q, int x);
NODE *Search(LIST l, int x);
void Sort(LIST &l);

int main(){
	LIST l;
	Initialize(l);
	
	cout << IsEmpty(l) << "\n";
	
//	InsertFirst(l,8);
//	InsertFirst(l,4);
//	InsertFirst(l,23);
	CreateList(l);
	
	ShowList(l);
	Sort(l);
	ShowList(l);
	
//	cout << Search(l,23);
	return 0;
}

void Initialize(LIST &l){
	l.pHead = NULL;
	l.pTail = NULL;
}

int IsEmpty(LIST l){
	return (l.pHead==NULL);
}

NODE *CreateNode(int x){
	NODE *node;
	node = new NODE;
	if(node==NULL) exit(1);
	node->data = x;
	node->pNext = NULL;
	return node;
}

void InsertFirst(LIST &l, int x){
	NODE *p = CreateNode(x);
	if(p==NULL)
		exit(1);
	if(l.pHead==NULL){
		l.pHead = p;
		l.pTail = p;
	}
	else{
		p->pNext = l.pHead;
		l.pHead = p;
	}
}

void InsertLast(LIST &l, int x){
	NODE *p = CreateNode(x);
	if(p==NULL)
		exit(1);
	if(l.pHead==NULL){
		l.pHead = p;
		l.pTail = p;
	}
	else{
		l.pTail->pNext = p;
		l.pTail = p;
	}
}

void CreateList(LIST &l){
	int n;
	cout << "Nhap n: ";
	cin >> n;
	for(int i=0; i<n; i++){
		int x;
		cout << "Nhap gia tri cho node thu " << i+1 << ": ";
		cin >> x;
//		InsertFirst(l,x);
		InsertLast(l,x);
	}
}

void ShowList(LIST l){
	if(l.pHead!=NULL){
		NODE *p = l.pHead;
		while(p!=NULL){
			cout << p->data << " ";
			p = p->pNext;
		}
		cout << "\n";
	}
}

void InsertAfter(NODE *q, int x){
	NODE *tam;
	if(q!=NULL){
		tam = CreateNode(x);
		tam->pNext = q->pNext;
		q->pNext = tam;
	}
}

NODE *Search(LIST l, int x){
	NODE *p = l.pHead;
	while(p->data!=x && p!=NULL){
		p = p->pNext;
	}
	return p;
}

void Sort(LIST &l){
	if(l.pHead!=NULL){
		NODE *i, *j, *min;
		i = l.pHead;
		while(i->pNext!=NULL){
			min = i;
			j = i->pNext;
			while(j!=NULL){
				if(j->data<min->data) min = j;
				j = j->pNext;
			}
			swap(min->data,i->data);
			i = i->pNext;
		}
	}
}
