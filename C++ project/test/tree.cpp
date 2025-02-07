#include <iostream>

using namespace std;

struct TNODE{
	int key;
	struct TNODE* pLeft;
	struct TNODE* pRight;
};

typedef TNODE* TREE;

int InitTree(TREE &t);
int IsEmptyTree(TREE t);
TNODE* CreateNode(int x);
int AddNode(TREE &t, int x);
void LNR(TREE t);
void NLR(TREE t);
void LRN(TREE t);
void XoaNodeLa(TREE &t,int x);         //sai
void XoaNode1Con(TREE &t, int x);
void XoaNode2Con(TREE &t, int x);
int Search(TREE t, int x);
int DemNodeLa(TREE t);
int DemNode2Con(TREE t);
int DemNode1Con(TREE t);
int ChieuCao(TREE t);


int main(){
	TREE t;
	InitTree(t);	
	cout << IsEmptyTree(t) << "\n";
	
	AddNode(t,5);
	AddNode(t,3);
	AddNode(t,8);
	AddNode(t,7);
	AddNode(t,6);
	AddNode(t,9);
	
	cout << IsEmptyTree(t) << "\n";
	
	XoaNodeLa(t,6);
//	XoaNode1Con(t,8);
//	XoaNode2Con(t,8);

//	cout << Search(t,7);

//	cout << DemNodeLa(t);
//	cout << DemNode2Con(t);
//	cout << DemNode1Con(t);	
	
	cout << ChieuCao(t);
	
	LNR(t);
//	NLR(t);
//	LRN(t);
	return 0;
}

int IsEmptyTree(TREE t){
	return (t==NULL);
}

TNODE* CreateNode(int x){
	TNODE* p;
	p = new TNODE;
	if(p==NULL)
		exit(1);
	p->key = x;
	p->pLeft = NULL;
	p->pRight = NULL;
	return p;
}

int AddNode(TREE &t, int x){
	if(t!=NULL){
		if(x==t->key)
			return 0;
		else
			if(x<t->key) AddNode(t->pLeft,x);
			else AddNode(t->pRight,x);
	}
	else{
		TNODE* p;
		p = CreateNode(x);
		if(p==NULL)
			return -1;
		else t=p;
		return 1;
	}
}

void LNR(TREE t){
	if(t!=NULL){
		LNR(t->pLeft);
		cout << t->key << " ";
		LNR(t->pRight);
	}
}

void NLR(TREE t){
	if(t!=NULL){
		cout << t->key << " ";
		NLR(t->pLeft);
		NLR(t->pRight);
	}
}

void LRN(TREE t){
	if(t!=NULL){
		LRN(t->pLeft);
		LRN(t->pRight);
		cout << t->key << " ";
	}
}

void XoaNodeLa(TREE &t, int x){
	if(t!=NULL){
		if(x<t->key)
			XoaNodeLa(t->pLeft,x);
		else
			if(x>t->key)
				XoaNodeLa(t->pRight,x);
		delete t;
	}
}

void XoaNode1Con(TREE &t, int x){
	if(t!=NULL){
		if(x<t->key)
			XoaNode1Con(t->pLeft,x);
		else{
			if(x>t->key) XoaNode1Con(t->pRight,x);
			else{
				TNODE* pHuy = t;
				if(t->pLeft==NULL) t=t->pRight;
				else
					if(t->pRight==NULL) t=t->pLeft;
				delete pHuy;
			}
		}
	}
}

void TimTheMang(TREE &pHuy, TREE &q){
	if(q->pLeft)
		TimTheMang(pHuy,q->pLeft);
	else{
		pHuy->key = q->key;
		pHuy = q;
		q = q->pRight;
	}
}

void XoaNode2Con(TREE &t, int x){
	if(t!=NULL){
		if(x<t->key)
			XoaNode2Con(t->pLeft,x);
		else{
			if(x>t->key) XoaNode2Con(t->pRight,x);
			else{
				TNODE *pHuy = t;
				if(t->pLeft==NULL) t=t->pRight;
				else
					if(t->pRight==NULL) t=t->pLeft;
					else TimTheMang(pHuy,t->pRight);
				delete pHuy;
			}
		}
	}
}

int Search(TREE t, int x){
	if(t!=NULL){
		if(x==t->key) return 1;
		else 
			if(x<t->key) Search(t->pLeft,x);
			else Search(t->pRight,x);
	}
	else return -1;
}

int DemNodeLa(TREE t){
	if(t){
		if(t->pLeft==NULL && t->pRight==NULL)
			return 1;
		else
			return DemNodeLa(t->pLeft) + DemNodeLa(t->pRight);
	}
}

int DemNode2Con(TREE t){
	if(t){
		if(t->pLeft!=NULL && t->pRight!=NULL)
			return DemNode2Con(t->pLeft) + DemNode2Con(t->pRight) + 1;
	}
}

int DemNode1Con(TREE t){
	if(t){
		if((t->pLeft==NULL && t->pRight!=NULL) || (t->pLeft!=NULL && t->pRight==NULL))
			return 1;
		else
			return DemNode1Con(t->pLeft) + DemNode1Con(t->pRight);
	}
}

int ChieuCao(TREE t){
	if(t){
		int t1 = ChieuCao(t->pLeft);
		int t2 = ChieuCao(t->pRight);
		return (t1>t2?t1:t2) +1;
	}
}
