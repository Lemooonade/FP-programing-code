#include<iostream>
#include<cstring>
#include <fstream>
using namespace std;
#define ADMIN_PASS "1"
#define ADMIN_USER "1"
int i; //图书库数量
typedef struct date
{
	int year;
	int month;
	int day;
};
typedef struct book_info
{
	int book_id;
	string book_name;
	string book_author;
	string chuban;//出版商
	date chuban_date;//出版日期
	float price;
	int num;//剩余量
};
book_info Book_info[10001];
bool check_book()
{
	for (int j = 0; j < i; j++)
	{
		if (Book_info[i].book_name == Book_info[j].book_name)
		{
			return false;
		}
	}
	return true;
}
bool check_book_name(string book_name)
{
	for (int j = 0; j < i; j++)
	{
		if (book_name == Book_info[j].book_name)
		{
			return true;
		}
	}
	return false;
}
void edit_line(int n,int book_id,string book_name,string book_author,string chuban,int year,int mounth,int day,float price,int num )
{
	char buf[4096];    //每读取一行，都将内容放到该数组中
	FILE* fp = fopen("library.txt", "r");     //filepath里是原内容 
	FILE* fpt = fopen("temp.txt", "w");    //将filepath文件第n行内容删除后存入temp.txt中 
	int i_lines = 0,i_out_line=0;
	while (i_lines<i)
	{
		i_lines++;
		if (i_lines == (n+1)) //删掉第n行，其实就是读到第n行时，仅仅移动一下文件指针，否则就
		{          //将读取到的一行文件内容放到临时文件中temp.txt中，这就是所谓的删除
			fgets(buf, sizeof(buf), fp);   //必须要这一行，因为加上后文件指针将会移动
			fprintf(fpt, "%d %s %s %s %d %d %d %f %d\n",book_id,book_name.c_str(),book_author.c_str(),chuban.c_str(),year, mounth,day,price,num);
		}
		else
		{
			fgets(buf, sizeof(buf), fp);
			fprintf(fpt, "%s", buf);
		}
	}
	fclose(fp);
	fclose(fpt);

	fpt = fopen("temp.txt", "r");
	fp = fopen("library.txt", "wb");   //清空filepath文件
	fclose(fp);

	fp = fopen("library.txt", "a");
	while (i_out_line < i)
	{
		i_out_line++;
		fgets(buf, sizeof(buf), fpt);
		fprintf(fp, "%s", buf);
	}

	fclose(fp);
	fclose(fpt);

	system("ERASE temp.txt");   //删除文件temp.txt,使用该命令需要包含<stdlib.h>文件
}
void del_line(int n)
{
	char buf[4096];    //每读取一行，都将内容放到该数组中
	FILE* fp = fopen("library.txt", "r");     //filepath里是原内容 
	FILE* fpt = fopen("temp.txt", "w");    //将filepath文件第n行内容删除后存入temp.txt中 
	int i_lines = 0, i_out_line = 0;
	while (i_lines < i)
	{
		i_lines++;
		if (i_lines == (n + 1)) //删掉第n行，其实就是读到第n行时，仅仅移动一下文件指针，否则就
		{          //将读取到的一行文件内容放到临时文件中temp.txt中，这就是所谓的删除
			fgets(buf, sizeof(buf), fp);   //必须要这一行，因为加上后文件指针将会移动
		}
		else
		{
			fgets(buf, sizeof(buf), fp);
			fprintf(fpt, "%s", buf);
		}
	}
	fclose(fp);
	fclose(fpt);

	fpt = fopen("temp.txt", "r");
	fp = fopen("library.txt", "wb");   //清空filepath文件
	fclose(fp);

	fp = fopen("library.txt", "a");
	while (i_out_line < i-1)
	{
		i_out_line++;
		fgets(buf, sizeof(buf), fpt);
		fprintf(fp, "%s", buf);
	}

	fclose(fp);
	fclose(fpt);

	system("ERASE temp.txt");   //删除文件temp.txt,使用该命令需要包含<stdlib.h>文件
}
void del_book()
{
	string del_book_name;
	char tag;
	FILE* p1, * p2;
	int k = 0;
	cout << "请输入你要删除的书的名字" << endl;
	cin >> del_book_name;
	if (check_book_name(del_book_name))
	{
		system("cls");
		cout << "你要删除的书是:" << del_book_name << "\n" << "请确认是否修改(Y/N)\n";
		cin >> tag;
		if (tag == 'y' || tag == 'Y')
		{
			for (int j = 0; j < i; j++)
			{
				if (del_book_name == Book_info[j].book_name)
				{
					del_line(j);
					p1 = fopen("id.txt", "w");
					i = i - 1;
					fprintf(p1, "%d", i);
					fclose(p1);
					p2 = fopen("library.txt", "r");
					int k = 0;
					char book_name_tmp[50], book_author_tmp[50], book_chuban_tmp[50];
					while (!feof(p2))
					{
						fscanf(p2, "%d %s %s %s %d %d %d %f %d", &Book_info[k].book_id, book_name_tmp, book_author_tmp, book_chuban_tmp, &Book_info[k].chuban_date.year, &Book_info[k].chuban_date.month, &Book_info[k].chuban_date.day, &Book_info[k].price, &Book_info[k].num);
						Book_info[k].book_name = book_name_tmp;
						Book_info[k].book_author = book_author_tmp;
						Book_info[k].chuban = book_chuban_tmp;
						k++;
					}
					fclose(p2);
					cout << "删除成功\n\n" << endl;
					system("pause");
					break;
				}
			}
		}
	}
	else
	{
		cout << "没有这本书哦" << endl;
	}
}
void add_book()
{
	string tmp_name;
	FILE* p1;
	FILE* p2;
	system("cls");
	printf("\t\t *==================================================================================*\n");
	printf("\t\t| * - * - * - * - * - * - * - * - * - * - * - * - * - * - * - * - * - * - * - * - * |\n");
	printf("\t\t| |          请依次输入   书名，作者，出版社，出版年，月，日，单价，库存量        | |\n");
	printf("\t\t| * - * - * - * - * - * - * - * - * - * - * - * - * - * - * - * - * - * - * - * - * |\n");
	printf("\t\t *==================================================================================*\n");
	fflush(stdin);
	while (true)
	{
		cout << "书名:";
		cin >> Book_info[i].book_name;
		if (check_book())
		{
			cout << "作者:";
			cin >> Book_info[i].book_author;
			cout << "出版社:";
			cin >> Book_info[i].chuban;
			cout << "出版年:";
			cin >> Book_info[i].chuban_date.year;
			cout << "出版月:";
			cin >> Book_info[i].chuban_date.month;
			cout << "出版日:";
			cin >> Book_info[i].chuban_date.day;
			cout << "单价:";
			cin >> Book_info[i].price;
			cout << "库存量:";
			cin >> Book_info[i].num;
			Book_info[i].book_id = i;
			//printf("%s", Book_info[i].book_author.c_str());
			p1 = fopen("library.txt", "a");
			p2 = fopen("id.txt", "w");
			fprintf(p1, "%d %s %s %s %d %d %d %f %d\n", Book_info[i].book_id, Book_info[i].book_name.c_str(), Book_info[i].book_author.c_str(), Book_info[i].chuban.c_str(), Book_info[i].chuban_date.year, Book_info[i].chuban_date.month, Book_info[i].chuban_date.day, Book_info[i].price, Book_info[i].num);
			fclose(p1);
			i++;
			fprintf(p2, "%d", i);
			fclose(p2);
			cout << "添加图书成功\n";
			cout << "以保持到本地文件\n";
			break;
		}
		else
		{
			cout << "你输入的书名已存在请重新输入\n";
		}
	}

}
void search_book()
{
	string book_search;
	bool flag = 0;
	cout << "请输入要查询的出版社的名字\n";
	fflush(stdin);
	cin >> book_search;
	system("cls");
	printf("|------------------------------------图书信息------------------------------------|\n");
	printf("|编号  书名        作者      出版社            出版日期     单价       库存量    |\n");
	printf("|                                                                                |\n");
	for (int j = 0; j < i; j++)
	{
		if (book_search == Book_info[j].chuban)
		{
			printf("|%-6d%-12s%-10s%-16s  %-d %-2d %-3d  %-8.1f    %-9d|\n",Book_info[j].book_id,Book_info[j].book_name.c_str(), Book_info[j].book_author.c_str(), Book_info[j].chuban.c_str(), Book_info[j].chuban_date.year, Book_info[j].chuban_date.month,Book_info[j].chuban_date.day, Book_info[j].price, Book_info[j].num);
			flag = 1;
		}
	}
	if (!flag)
	{
		cout << "没有找到该出版社,查询失败,正在返回上一级菜单";
		printf("\n\n\n");
		system("pause");
	}
	else
	{
		printf("\n\n\n");
		system("pause");
	}
}
void edit_book()
{
	string book_edit;
	string new_book_author,new_book_chuban;
	char tag;
	int new_date_year, new_date_mounth, new_date_day, new_num;
	float new_book_price;
	int options;
	cout << "请输入要编辑图书的名字\n";
	fflush(stdin);
	cin >> book_edit;
	system("cls");
	for (int j = 0; j < i; j++)
	{
		if (book_edit == Book_info[j].book_name)
		{
			system("cls");
			cout << "找到了该图书,一下是该图书的信息"<<endl;
			printf("|------------------------------------图书信息------------------------------------|\n");
			printf("|编号  书名        作者      出版社            出版日期     单价       库存量    |\n");
			printf("|                                                                                |\n");
			printf("|%-6d%-12s%-10s%-16s  %-d %-2d %-3d  %-8.1f    %-9d|\n", Book_info[j].book_id, Book_info[j].book_name.c_str(), Book_info[j].book_author.c_str(), Book_info[j].chuban.c_str(), Book_info[j].chuban_date.year, Book_info[j].chuban_date.month, Book_info[j].chuban_date.day, Book_info[j].price, Book_info[j].num);
			printf("\n\n\n");
			printf("\t\t\t *=======================================*\n");
			printf("\t\t\t| * - * - * -请输入你的选项 * - * - * - * |\n");
			printf("\t\t\t| *                                     * |\n");
			printf("\t\t\t| |  [1]   修改作者                     | |\n");
			printf("\t\t\t| *                                     * |\n");
			printf("\t\t\t| |  [2]   修改出版社                   | |\n");
			printf("\t\t\t| *                                     * |\n");
			printf("\t\t\t| |  [3]   修改出版日期                 | |\n");
			printf("\t\t\t| *                                     * |\n");
			printf("\t\t\t| |  [4]   修改单价                     | |\n");
			printf("\t\t\t| *                                     * |\n");
			printf("\t\t\t| |  [5]   修改库存量                   | |\n");
			printf("\t\t\t| *                                     * |\n");
			printf("\t\t\t|  * - * - * - * - * - * - * - * - * - *  |\n");
			printf("\t\t\t *=======================================*\n");
			cin >> options;
			switch (options)
			{
			case 1:
				
				cout << "请输入新的作者信息\n";
				cin >> new_book_author;
				system("cls");
				cout << "你输入的新的作者信息为:" << new_book_author<<"\n"<<"请确认是否修改(Y/N)\n";
				cin >> tag;
				if (tag=='y'||tag=='Y')
				{
					Book_info[j].book_author = new_book_author;
					cout << "修改成功\n新的信息为:\n";
					printf("|%-6d%-12s%-10s%-16s  %-d %-2d %-3d  %-8.1f    %-9d|\n", Book_info[j].book_id, Book_info[j].book_name.c_str(), Book_info[j].book_author.c_str(), Book_info[j].chuban.c_str(), Book_info[j].chuban_date.year, Book_info[j].chuban_date.month, Book_info[j].chuban_date.day, Book_info[j].price, Book_info[j].num);
					edit_line(j, Book_info[j].book_id, Book_info[j].book_name, Book_info[j].book_author, Book_info[j].chuban, Book_info[j].chuban_date.year, Book_info[j].chuban_date.month, Book_info[j].chuban_date.day, Book_info[j].price, Book_info[j].num);
				}
				break;
			case 2:

				cout << "请输入新的出版社信息\n";
				cin >> new_book_chuban;
				system("cls");
				cout << "你输入的新的出版社信息为:" << new_book_chuban << "\n" << "请确认是否修改(Y/N)\n";
				cin >> tag;
				if (tag == 'y' || tag == 'Y')
				{
					Book_info[j].chuban = new_book_chuban;
					cout << "修改成功\n新的信息为:\n";
					printf("|%-6d%-12s%-10s%-16s  %-d %-2d %-3d  %-8.1f    %-9d|\n", Book_info[j].book_id, Book_info[j].book_name.c_str(), Book_info[j].book_author.c_str(), Book_info[j].chuban.c_str(), Book_info[j].chuban_date.year, Book_info[j].chuban_date.month, Book_info[j].chuban_date.day, Book_info[j].price, Book_info[j].num);
					edit_line(j, Book_info[j].book_id, Book_info[j].book_name, Book_info[j].book_author, Book_info[j].chuban, Book_info[j].chuban_date.year, Book_info[j].chuban_date.month, Book_info[j].chuban_date.day, Book_info[j].price, Book_info[j].num);
				}
				break;
			case 3:

				cout << "请输入新的出版年信息\n";
				cin >> new_date_year;
				cout << "请输入新的出版月信息\n";
				cin >> new_date_mounth;
				cout << "请输入新的出版日信息\n";
				cin >> new_date_day;
				system("cls");
				cout << "你输入的新的出版日期信息为:" << new_date_year+ new_date_mounth +new_date_day << "\n" << "请确认是否修改(Y/N)\n";
				cin >> tag;
				if (tag == 'y' || tag == 'Y')
				{
					Book_info[j].chuban_date.year = new_date_year;
					Book_info[j].chuban_date.month = new_date_mounth;
					Book_info[j].chuban_date.day = new_date_day;
					cout << "修改成功\n新的信息为:\n";
					printf("|%-6d%-12s%-10s%-16s  %-d %-2d %-3d  %-8.1f    %-9d|\n", Book_info[j].book_id, Book_info[j].book_name.c_str(), Book_info[j].book_author.c_str(), Book_info[j].chuban.c_str(), Book_info[j].chuban_date.year, Book_info[j].chuban_date.month, Book_info[j].chuban_date.day, Book_info[j].price, Book_info[j].num);
					edit_line(j, Book_info[j].book_id, Book_info[j].book_name, Book_info[j].book_author, Book_info[j].chuban, Book_info[j].chuban_date.year, Book_info[j].chuban_date.month, Book_info[j].chuban_date.day, Book_info[j].price, Book_info[j].num);
				}
				break;
			case 4:

				cout << "请输入新的单价\n";
				cin >> new_book_price;
				system("cls");
				cout << "你输入的新的单价为:" << new_book_price << "\n" << "请确认是否修改(Y/N)\n";
				cin >> tag;
				if (tag == 'y' || tag == 'Y')
				{
					Book_info[j].price = new_book_price;
					cout << "修改成功\n新的信息为:\n";
					printf("|%-6d%-12s%-10s%-16s  %-d %-2d %-3d  %-8.1f    %-9d|\n", Book_info[j].book_id, Book_info[j].book_name.c_str(), Book_info[j].book_author.c_str(), Book_info[j].chuban.c_str(), Book_info[j].chuban_date.year, Book_info[j].chuban_date.month, Book_info[j].chuban_date.day, Book_info[j].price, Book_info[j].num);
					edit_line(j, Book_info[j].book_id, Book_info[j].book_name, Book_info[j].book_author, Book_info[j].chuban, Book_info[j].chuban_date.year, Book_info[j].chuban_date.month, Book_info[j].chuban_date.day, Book_info[j].price, Book_info[j].num);
				}
				break;
			case 5:

				cout << "请输入新的库存量 \n";
				cin >> new_num;
				system("cls");
				cout << "你输入的新的库存量 为:" << new_num << "\n" << "请确认是否修改(Y/N)\n";
				cin >> tag;
				if (tag == 'y' || tag == 'Y')
				{
					Book_info[j].num = new_num;
					cout << "修改成功\n新的信息为:\n";
					printf("|%-6d%-12s%-10s%-16s  %-d %-2d %-3d  %-8.1f    %-9d|\n", Book_info[j].book_id, Book_info[j].book_name.c_str(), Book_info[j].book_author.c_str(), Book_info[j].chuban.c_str(), Book_info[j].chuban_date.year, Book_info[j].chuban_date.month, Book_info[j].chuban_date.day, Book_info[j].price, Book_info[j].num);
					edit_line(j, Book_info[j].book_id, Book_info[j].book_name, Book_info[j].book_author, Book_info[j].chuban, Book_info[j].chuban_date.year, Book_info[j].chuban_date.month, Book_info[j].chuban_date.day, Book_info[j].price, Book_info[j].num);
				}
				break;
			default:
				cout << "没有这个选项哦";
				break;
			}
		}
	}
	printf("\n\n\n");
	system("pause");
}
bool login_menu()
{
	int option;
	bool log;
	string pass, user;
	while (true)
	{
		system("cls");
		printf("\t\t\t *=======================================*\n");
		printf("\t\t\t| * - * - * 欢迎使用图书管理系统* - * - * |\n");
		printf("\t\t\t| |  [1]   登录                         | |\n");
		printf("\t\t\t| *                                     * |\n");
		printf("\t\t\t| |  [2]   退出                         | |\n");
		printf("\t\t\t|  * - * - * - * - * - * - * - * - * - *  |\n");
		printf("\t\t\t *=======================================*\n");
		cin >> option;
		if (option == 2)
		{
			exit(0);
		}
		else if (option == 1)
		{
			system("cls");
			printf("\t\t\t *=======================================*\n");
			printf("\t\t\t| * - * - * - * - * - * * - * - * - * - * |\n");
			printf("\t\t\t| |        请输入账号和密码             | |\n");
			printf("\t\t\t| * - * - * - * - * - * * - * - * - * - * |\n");
			printf("\t\t\t *=======================================*\n");
			cout << "账号:";
			cin >> user;
			cout << "密码:";
			cin >> pass;
			if (user == ADMIN_USER && pass == ADMIN_PASS)
			{
				cout << "登录成功正在进入系统" << endl;
				return true;
			}
			cout << "登录失败,返回登录首页" << endl;
			system("pause");
		}
		else
		{
			cout << "输入错误请重新输入";
		}
	}

}
void view_all_book()
{
	system("cls");
	printf("|------------------------------------图书信息------------------------------------|\n");
	printf("|编号  书名        作者      出版社            出版日期     单价       库存量    |\n");
	printf("|                                                                                |\n");
	for (int j = 0; j < i; j++)
	{
		printf("|%-6d%-12s%-10s%-16s  %-d %-2d %-3d  %-8.1f    %-9d|\n", Book_info[j].book_id, Book_info[j].book_name.c_str(), Book_info[j].book_author.c_str(), Book_info[j].chuban.c_str(), Book_info[j].chuban_date.year, Book_info[j].chuban_date.month, Book_info[j].chuban_date.day, Book_info[j].price, Book_info[j].num);
	}
	system("pause");
}
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
	FILE* p1;
	FILE* p2;
	system("title 图书管理系统");
	if ((p2 = fopen("id.txt", "r")) == NULL)/*p2是图书管理系统id文件指针*/
	{
		p2 = fopen("id.txt", "w");
		fprintf(p2, "0");
		fclose(p2);
	}
	else
	{
		p2 = fopen("id.txt", "r");
		fscanf(p2, "%d", &i);
	}
	if ((p1 = fopen("library.txt", "r")) == NULL)/*p1是图书管理系统配置文件指针*/
	{
		p1 = fopen("library.txt", "w");
		fclose(p1);
	}
	else
	{
		p1 = fopen("library.txt", "r");
		int k = 0;
		char book_name_tmp[50], book_author_tmp[50],book_chuban_tmp[50];
		while (!feof(p1))
		{
			fscanf(p1, "%d %s %s %s %d %d %d %f %d",&Book_info[k].book_id, book_name_tmp, book_author_tmp, book_chuban_tmp, &Book_info[k].chuban_date.year, &Book_info[k].chuban_date.month, &Book_info[k].chuban_date.day, &Book_info[k].price, &Book_info[k].num);
			Book_info[k].book_name=book_name_tmp;
			Book_info[k].book_author=book_author_tmp;
			Book_info[k].chuban = book_chuban_tmp;
			k++;
		}
		fclose(p1);
	}
	if (login_menu())
	{
		while (true)
		{
			option = manager_menu();
			switch (option)
			{
			case 1: add_book(); break;
			case 2: search_book(); break;
			case 3: del_book(); break;
			case 4: edit_book(); break;
			case 5: view_all_book(); break;
			case 6: login_menu(); break;
			default:cout << "输入错误请重新输入"; break;
			}
		}
	}
}