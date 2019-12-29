#include <iostream>
#include<string.h>
#include<stdlib.h>
typedef struct  s
{
	char no[10], bookname[20], writer[25], cbs[25];
	int year, month, day;
	int price;
	int number;
	struct  s* next;

}book;

book* add(book* head, book** tail)//添加图书
{
	int i;
start:
	printf("选择添加类型:\n");
	printf("    1    添加至首部\n");
	printf("    2    插入新的书籍信息\n");
	printf("    3    添加至尾部\n");
	printf("    0    返回\n");
	scanf("%d", &i);
	switch (i)
	{
	case 0:break;
	case 1:
	{

		book* p;
		p = (book*)malloc(sizeof(book));
		printf("输入添加的图书编号：");
		fflush(stdin);
		std::cin >> p->no;
		printf("输入书名：");
		fflush(stdin);
		gets_s(p->bookname);
		printf("输入作者：");
		fflush(stdin);
		gets_s(p->writer);
		printf("输入出版社名：");
		fflush(stdin);
		gets_s(p->cbs);
		printf("输入出版日期:");
		scanf("%d%d%d", &(p->year), &(p->month), &(p->day));
		printf("输入单价:");
		scanf("%d", &(p->price));
		printf("输入库存:");
		scanf("%d", &(p->number));
		p->next = head->next;
		head->next = p;
		if ((*tail)->next != NULL)
			(*tail) = (*tail)->next;
		printf("%s\n", (*tail)->no);
		printf("\n");
		printf("****************************\n");
		printf("    添加成功!\n");
		printf("****************************\n");
		printf("\n");
	}break;

	case 2:
	{
		book* p, * q;
		char no[20];
		p = (book*)malloc(sizeof(book));
		printf("您要插入到哪本书后，输入编号：");
		fflush(stdin);
		std::cin >> no;
		for (q = head->next; q && strcmp(q->no, no) != 0; q = q->next)
			;
		if (q == NULL)
			printf("未找到编号，插入失败!\n");
		else
		{
			printf("输入添加的图书编号：");
			fflush(stdin);
			gets_s(p->no);
			printf("输入书名：");
			fflush(stdin);
			gets_s(p->bookname);
			printf("输入作者：");
			fflush(stdin);
			gets_s(p->writer);
			printf("输入出版社名：");
			fflush(stdin);
			gets_s(p->cbs);
			printf("输入出版日期:");
			scanf("%d%d%d", &(p->year), &(p->month), &(p->day));
			printf("输入单价:");
			scanf("%d", &(p->price));
			printf("输入库存:");
			scanf("%d", &(p->number));
			p->next = q->next;
			q->next = p;
		}
	}break;
	case 3:
	{
		book* p;
		p = (book*)malloc(sizeof(book));
		printf("输入添加的图书编号：");
		fflush(stdin);
		gets_s(p->no);
		printf("输入书名：");
		fflush(stdin);
		gets_s(p->bookname);
		printf("输入作者：");
		fflush(stdin);
		gets_s(p->writer);
		printf("输入出版社名：");
		fflush(stdin);
		gets_s(p->cbs);
		printf("输入出版日期:");
		scanf("%d%d%D", &(p->year), &(p->month), &(p->day));
		printf("输入单价:");
		scanf("%d", &(p->price));
		printf("输入库存:");
		scanf("%d", &(p->number));
		(*tail)->next = p;
		(*tail) = p;
		(*tail)->next = NULL;
	}break;
	default:printf("错误操作，请按提示进行操作!\n"); goto start;

	}

	return head;

}
void search_cbs(book* head)
{
	char no[10];
	book* p;
	int flag = 1;//判定是否找到相应书籍 
	printf("请输入出版社名:");
	fflush(stdin);
	std::cin>>no;
	for (p = head->next; p; p = p->next)
	{
		if (strcmp(p->cbs, no) == 0)//出版社相同的书不唯一 
		{
			printf("图书编号  书名      作者      出版社\t出 版 日 期      单价    库存量\n");
			printf("%-10s%-10s%-10s%-10s%-5d%-4d%-8d%-8d%d\n", p->no, p->bookname, p->writer, p->cbs, p->year, p->month, p->day, p->price, p->number);
			flag = 0;//找到了，后续if不执行。 
		}
	}
	if (flag)
	{
		printf("\n");
		printf("****************************\n");
		printf("    没找到相关书籍!\n");
		printf("****************************\n");
		printf("\n");
	}
}
book* delete_(book* head, book** tail)
{
	char no[20];
	int i, n = 0;
	book* p, * q;
	bool flag=false;
	printf("输入您要删除的书籍编号：");
	fflush(stdin);
	scanf("%s", no);
	fflush(stdin);
	for (q = head->next; q; q = q->next)
	{
		n++;
		if (strcmp(q->no, no) == 0)
		{
			flag = true;
			break;
		}
	}
	if (!flag)//空表或者q移动到最后一个结点 
		printf("未找到编号，删除失败!\n");
	else//找到需要删除的结点 
	{
		for (i = 0, p = head->next; i < n; i++)//找到前一个结点
			p = p->next;
		p->next = q->next;//跳过需要删除的结点	
		printf("****************************\n");
		printf("    删除成功!\n");
		printf("****************************\n");
		printf("\n");

	}
	return head;
}
void search_all(book* head)//浏览图书信息
{
	book* p;
	printf("图书编号  书名      作者      出版社\t出 版 日 期      单价    库存量\n");
	for (p = head->next; p != NULL; p = p->next)
		printf("%-10s%-10s%-10s%-10s%-5d%-4d%-8d%-8d%d\n", p->no, p->bookname, p->writer, p->cbs, p->year, p->month, p->day, p->price, p->number);
}


int main()
{
	int x, lenth = 0, flag = 5;
	book* head, * tail;
	head = (book*)malloc(sizeof(book));
	head->next = NULL;
	tail = head;
	char no[20] = "123", mm[20];
	printf("欢迎您，管理员!\n");
	while (flag)//限制登陆失败次数
	{
		printf("请输入管理员密码:");
		fflush(stdin);
		gets_s(mm);
		if (strcmp(mm, no) == 0)//登陆成功才可以进入管理员页面
		{
			while (1)
			{
				printf("---------------------------\n");
				printf("      图书信息管理系统     \n");
				printf("---------------------------\n");
				printf("   1\t添加图书\n");
				printf("   2\t按出版社查询图书\n");
				printf("   3\t删除指定书名的图书\n");
				printf("   4\t修改错误图书信息\n");
				printf("   5\t浏览图书信息\n");
				printf("   0\t退出\n");
				printf("---------------------------\n");
				printf("请选择：");
				scanf("%d", &x);
				switch (x)
				{
				case 1:head = add(head, &tail); break;
				case 2:search_cbs(head); break;
				case 3:head = delete_(head, &tail); break;
				case 5:search_all(head); break;
				case 0:return 0; break;
				default:printf("输入有误，请重新输入\n");
				}
			}
		}
		else
		{
			flag--;
			if (flag)
				printf("密码错误，您还可尝试%d次，失败后窗口将关闭，", flag);
			else if (flag == 0)
				printf("登陆失败，窗口将关闭。\n");
		}


	}
}