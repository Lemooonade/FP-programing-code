#include<iostream>
typedef struct node
{
	int num;
	struct node* next;
}NODE;
//β�巨
/*
NODE* creat()
{
	NODE* pnew, * pend, * phead;
	pnew = (NODE*)malloc(sizeof(NODE));
	phead = (NODE*)malloc(sizeof(NODE));
	phead->next = NULL;
	pend = pnew;
	srand(13123);
	for (int i = 0; i < 10; i++)
	{
		if (i==0)
		{
			scanf("%d", &(pnew->num));
			phead = pnew;
			pnew->next = NULL;
		}
		else
		{
			pend = pnew;
			pnew = (NODE*)malloc(sizeof(NODE));
			//pnew->num = rand() % 12;
			scanf("%d", &(pnew->num));
			pend->next = pnew;
			pnew->next = NULL;
		}
	}
	return phead;
}
*/
NODE* creat()
{
	NODE* pnew, * phead;
	pnew = (NODE*)malloc(sizeof(NODE));
	phead = (NODE*)malloc(sizeof(NODE));
	phead->next = NULL;
	srand(13123);
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &(pnew->num));
		pnew->next = phead->next;
		phead->next = pnew;
		pnew = (NODE*)malloc(sizeof(NODE));
	}
	return phead;
}

void prn(NODE* head)
{
	NODE* tmp=head->next;
	while (tmp!=NULL)
	{
		printf("%d   ", tmp->num);
		tmp = tmp->next;
	}
}
void free_(NODE* head)
{
	NODE* tmp1,*tmp2;
	tmp1 = head->next;
	while (tmp1!=NULL)
	{
		tmp2 = tmp1->next;
		free(tmp1);
		tmp1 = tmp2;
	}
}
int main()
{
	NODE* head;
	head = creat();
	prn(head);
}