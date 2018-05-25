#include<stdio.h>
#include<stdlib.h>
//���Ա����ʽ��ʾ��ʵ��
//������ 
#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int Status;
typedef int ElemType;
//������Ĵ洢�ṹ
typedef struct LNode{
	ElemType data;	//���������� 
	struct LNode *next;//����ָ���� 
}LNode,*LinkList; //linklistΪָ��ṹ��LNode��ָ������ 
LNode *p,*q,*r,*s;
int i,j; 
//������ĳ�ʼ��
Status InitList_L(LinkList &L){
	//����һ���յĵ�����L
	L=new LNode;	//�����½����Ϊͷ��㣬��ͷָ��Lָ��ͷ���
	L->next=NULL;
	return OK;
}
//����Ų��� 
Status GetElem_L(LinkList L,int i,ElemType &e){
	//�ڴ�ͷ���ĵ�����L�в��ҵ�i��Ԫ��
	p=L->next;j=1;				//��ʼ����pָ���һ����㣬jΪ������
	while(p&&j<i){
		p=p->next;j++;
	} 
	if(!p||j>i)return ERROR;	//��i��Ԫ�ز�����
	e=p->data;					//ȡ��i��Ԫ�� 
	return OK; 
}
//��ֵ����
LNode *LocateElem_L(LinkList L,ElemType e){
	//�ڴ�ͷ���ĵ�����L�в���ֵΪe��Ԫ��
	p=L->next;
	while(p&&p->data!=e)
		p=p->next;
	return p; //�ɹ�����Ԫ��λ�ã����򷵻�NULL 
}
//���������
Status ListInSert_L(LinkList &L,int i,ElemType e){
	//�ڴ�ͷ���ĵ�����L�е�i��λ��֮ǰ����Ԫ��e
	p=L;j=0; 
	while(p&&j<i-1)
	{
		p=p->next;
		j++;//Ѱ�ҵ�i-1����� 
	}
	if(!p||j>j-1)return ERROR;
	LNode *s=new LNode;
	s->data=e;
	s->next=p->next;
	p->next=s;
	return OK;
} 
//�������ɾ��
Status ListDelete_L(LinkList &L,int i,ElemType &e){
	//�ڴ�ͷ���ĵ�����L�У�ɾ����i��Ԫ�أ�����e������ֵ
	p=L;j=0;
	while(p->next&&j<i-1)
	{
		p=p->next;
		j++; 
	}
	if(!(p->next||j<-i))
	return ERROR;
	q=p->next;
	p->next=q->next;
	e=q->data;
	delete q;
	return OK;
}
//ǰ�巨����������
void CreateList_F(LinkList &L,int n){
	//��λ������N��Ԫ�ص�ֵ��������ͷ���ĵ�����L
	L=new LNode;
	L->next=NULL;
	for(i=n;i>0;i--){
		p=new LNode;
		scanf("%d",&p->data);
		p->next=L->next;
		L->next=p;
	} 
} 
//��巨����������
void CreateList_L(LinkList &L,int n){
	//��λ������N��Ԫ�ص�ֵ��������ͷ���ĵ�����L
	L=new LNode;
	L->next=NULL;
	r=L;			//βָ��rָ��ͷ���
	for(i=0;i<n;i++){
		p=new LNode;
		scanf("%d",&p->data);
		p->next=NULL;
		r->next=p;
		r=p;
	} 
}
int main(int argc, char** argv) {
	LinkList LA;
	CreateList_L(LA,5);
	s=LA->next;
	do{
		printf("%d\t",s->data);
		s=s->next;
	}while(s);
	int num=0,num1=0;
	GetElem_L(LA,3,num);
	printf("num=%d\n",num);
	ListDelete_L(LA,4,num1);
	printf("num=%d\n",num1);
	return 0;
}
