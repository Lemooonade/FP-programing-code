#include<iostream>
using namespace std;
#define ADMIN_PASS "1"
#define ADMIN_USER "1"
int i; //图书库数量
int list_len;//链表长度全局变量
int manager_menu()
{
	int option;
	system("cls");
	printf("\n\n");
	printf("\t\t\t *=======================================*\n");
	printf("\t\t\t| * - * - * 欢迎使用图书管理系统* - * - * |\n");
	printf("\t\t\t| *                                     * |\n");
	printf("\t\t\t| |  [1]   添加图书                     | |\n");
	printf("\t\t\t| *                                     * |\n");
	printf("\t\t\t| |  [2]   按出版社查询图书             | |\n");
	printf("\t\t\t| *                                     * |\n");
	printf("\t\t\t| |  [3]   删除指定书名的图书           | |\n");
	printf("\t\t\t| *                                     * |\n");
	printf("\t\t\t| |  [4]   修改错误的图书信息           | |\n");
	printf("\t\t\t| *                                     * |\n");
	printf("\t\t\t| |  [5]   查看所有图书                 | |\n");
	printf("\t\t\t| *                                     * |\n");
	printf("\t\t\t| |  [6]   退出登录                     | |\n");
	printf("\t\t\t| *                                     * |\n");
	printf("\t\t\t|  * - * - * - * - * - * - * - * - * - *  |\n");
	printf("\t\t\t *=======================================*\n");
	printf("\n\n\n");
	fflush(stdin);
	cin >> option;
	return option;
}
int main()
{
	int option;
	list_node* phead;
	phead = Create();
	system("title 图书管理系统");
	if (login_menu())
	{
		while (true)
		{
			option = manager_menu();
			switch (option)
			{
			case 1: add_book(phead); break;
			case 2: search_book(phead); break;
			case 3: del_book(phead); break;
			case 4: edit_book(phead); break;
			case 5: view_all_book(phead); break;
			case 6: login_menu(); break;
			default:cout << "输入错误请重新输入"; break;
			}
		}
	}
}