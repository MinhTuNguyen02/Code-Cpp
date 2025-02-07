#include <iostream>
#include <ctime>

using namespace std;

typedef struct tagNode{
	int data;
	tagNote *pNext;
}NODE;

typedef NODE* NodePointer;
Nodepointer phead;

NODE *CreateNode(int x);
void InsertFirst(NodePointer &phead, int x);
void CreateList1(NodePointer &phead);
void CreateList2(NodePointer &phead, int n);

int main(){
	
	return 0;
}

NODE *CreateNode(int x){
	NODE* node;
	node = new NODE;
	if(node==NULL) exit(1);
	node->data = x;
	node->pNext = NULL;
	return node;
}

void InsertFirst(NodePointer &phead, int x){
	NODE* p = CreateNode(x);
	if(p!=NULL){
		p->pNext = phead;
		phead = p;
	}
}

void CreateList1(NodePointer &phead){
	int x;
	while(1){
		cout << "Nhap gia tri node thu " << i+1 << ": ";
		cin >> x;
		if(x!=0)
			InsertFirst(phead,x);
		else
			break;
	}
}

void CreateList2(NodePointer &phead, int n){
	int x,dau;
	srand(time(0));
	for(int i=0; i<n; i++){
		dau=rand()&1?1:-1;
		x=(rand % 100+1)*dau;
		InsertFirst(phead,x);
	}
}
