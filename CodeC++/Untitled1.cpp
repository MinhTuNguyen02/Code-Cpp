#include <iostream>
#include <cmath>
using namespace std;

typedef struct TNODE{
	int key;
	struct TNODE *pLeft;
	struct TNODE *pRight;
}*TREE;

void Init(TREE &t);
bool IsEmpty(TREE t);
TNODE* CreateNode(int x);
void AddNode(TREE &t, int x);
void NLR(TREE t);
void Delete(TREE &t);
void DelNode(TREE &t, int x);
void TimTheMang(TREE &p, TREE&q);
void DelNode2Con(TREE &t, int x);
bool IsSNT(int x);

int main(){
	TREE t;
	Init(t);
	AddNode(t,9);
	AddNode(t,5);
	AddNode(t,4);
	AddNode(t,6);
	AddNode(t,22);
	AddNode(t,17);
	AddNode(t,18);
	AddNode(t,91);
	AddNode(t,45);
	AddNode(t,32);

	NLR(t);

	Delete(t);
	
	NLR(t);
	return 0;
}

void Init(TREE &t){
	t = NULL;
}

bool IsEmpty(TREE t){
	return (t==NULL);
}

TNODE* CreateNode(int x){
	TNODE *p = new TNODE;
	if(p==NULL) exit(1);
	p->key = x;
	p->pLeft = NULL;
	p->pRight = NULL;
	return p;
}

void AddNode(TREE &t, int x){
	if(t!=NULL){
		if(x==t->key)
			exit(1);
		else
			if(x>t->key) AddNode(t->pRight,x);
			else AddNode(t->pLeft,x);
	}
	else{
		TNODE *p = CreateNode(x);
		t = p;
	}
}

void NLR(TREE t){
	if(t!=NULL){
		cout << t->key << " ";
		NLR(t->pLeft);
		NLR(t->pRight);
	}
}

void DelNode(TREE &t, int x){
	if(t!=NULL){
		if(x<t->key)
			DelNode(t->pLeft,x);
		else if(x>t->key)
			DelNode(t->pRight,x);
		else{
			TNODE *p = t;
			if(t->pLeft==NULL)
				t = t->pRight;
			else if(t->pRight==NULL)
				t = t->pLeft;
			delete p;
		}
	}
}

void TimTheMang(TREE &p, TREE&q){
	if(q->pLeft!=NULL)
		TimTheMang(p,q->pLeft);
	else{
		p->key = q->key;
		p = q;
		q = q->pRight;
	}
}

void DelNode2Con(TREE &t, int x){
	if(t!=NULL){
		if(x<t->key)
			DelNode2Con(t->pLeft,x);
		else if(x>t->key)
			DelNode2Con(t->pRight,x);
		else{
			TNODE *p = t;
			if(t->pLeft==NULL)
				t = t->pRight;
			else if(t->pRight==NULL)
				t = t->pLeft;
			else{
				TimTheMang(p,t->pRight);
			}
			delete p;
		}
	}
}

bool IsSNT(int x){
	if(x<=1) return false;
	for(int i=2; i<=sqrt(x); i++){
		if(x%i==0)
			return false;
	}
	return true;
}

void Delete(TREE &t){
	if(t!=NULL){
		while(IsSNT(t->key)){
			if(t->pLeft!=NULL && t->pRight!=NULL)
				DelNode2Con(t,t->key);
			else DelNode(t,t->key);
		}
		Delete(t->pLeft);
		Delete(t->pRight);
	}
}
