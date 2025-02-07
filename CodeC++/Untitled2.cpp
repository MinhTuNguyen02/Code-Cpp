#include <iostream>
#include <cmath>
using namespace std;

typedef struct Node{
    int key;
    Node *pNext;
}NODE;

typedef struct List{
    Node *pHead;
    Node *pTail;
}LIST;

void Init(LIST &l);
bool IsEmpty(LIST l);
NODE* CreateNode(int x);
void InsertAfter(LIST &l, int x);
void show(LIST l);
int IsSNT(int x);
void XoaSNT(LIST &t);
void DeleteFirst(LIST &l);
void DeleteAfter(NODE p);


int main(){
    LIST l;
    Init(l);
    InsertAfter(l,98);
    InsertAfter(l,5);
    InsertAfter(l,13);
    InsertAfter(l,0);
    InsertAfter(l,6);
    InsertAfter(l,3);
    InsertAfter(l,17);
    InsertAfter(l,0);
    InsertAfter(l,53);
    InsertAfter(l,9);
    InsertAfter(l,7);
    InsertAfter(l,0);
    InsertAfter(l,4);
    InsertAfter(l,23);
    InsertAfter(l,37);
    InsertAfter(l,3);
    InsertAfter(l,0);
    InsertAfter(l,3);
    InsertAfter(l,24);

    XoaSNT(l);

    show(l);
    return 0;
}

void Init(LIST &l){
    l.pHead = NULL;
    l.pTail = NULL;
}

bool IsEmpty(LIST l){
    return (l.pHead==NULL);
}

NODE* CreateNode(int x){
    NODE *p = new NODE;
    if(p==NULL) exit(1);
    p->key = x;
    p->pNext = NULL;
    return p;
}

void InsertAfter(LIST &l, int x){
    NODE *p = CreateNode(x);
    if(p==NULL) exit(1);
    if(l.pHead==NULL){
        l.pHead = p;
        l.pTail = p;
    }
    else{
        l.pTail->pNext = p;
        l.pTail = p;
    }
}

void show(LIST l){
    if(l.pHead!=NULL){
        NODE* p = l.pHead;
        while(p!=NULL){
            cout << p->key << " ";
            p = p->pNext;
        }
    }
}

void DeleteFirst(LIST &l){
    if(l.pHead!=NULL){
        NODE *p = l.pHead;
        l.pHead = p->pNext;
        delete p;
    }
}

void DeleteAfter(NODE *q){
    NODE *p = q->pNext;
    q->pNext = p->pNext;
    delete p;
}

int IsSNT(int x){
    if(x<=1) 
		return -1;
    for(int i=2; i<=sqrt(x); i++){
        if(x%i==0)
            return -1;
    }
    return 1;
}

void XoaSNT(LIST &l){
    if(l.pHead!=NULL){
        NODE* p = l.pHead;
        NODE* tmp;
        int flag=0;
        while(p!=NULL){
            while((IsSNT(p->key)==1) && flag==0){
                DeleteFirst(l);
                p = l.pHead;
                tmp = p;
            }
            flag=1;
            
            if(IsSNT(p->key)==1){
            	p=p->pNext;
                DeleteAfter(tmp);
                continue;
            }
			
			tmp = p;
            p = p->pNext;
        }
    }
}
