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
void LNR(TREE t);
void Delete(TREE &t);
void DelNode(TREE &t, int x);
void TimTheMang(TREE &p, TREE&q);
void DelNode2Con(TREE &t, int x);
int IsSNT(int x);

int main(){
	TREE t;
	Init(t);
	AddNode(t,7);
	AddNode(t,36);
	AddNode(t,3);
	AddNode(t,1);
	AddNode(t,15);
	AddNode(t,40);
	AddNode(t,4);
	AddNode(t,6);

	Delete(t);

	LNR(t);
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

void LNR(TREE t){
	if(t!=NULL){
		LNR(t->pLeft);
		cout << t->key << " ";
		LNR(t->pRight);
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

int IsSNT(int x){
	for(int i=2; i<sqrt(x); i++){
		if(x%i==0)
			return -1;
	}
	return 1;
}

void Delete(TREE &t){
	int x = t->key;
	if(IsSNT(x)){
		if(t->pLeft!=NULL && t->pRight!=NULL)
			DelNode2Con(t,x);
		else
			DelNode(t,x);
	}
	Delete(t->pLeft);
	Delete(t->pRight);
}