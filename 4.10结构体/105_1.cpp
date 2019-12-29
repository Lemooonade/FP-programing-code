#include<iostream>
using namespace std;
int main()
{
	struct worker
	{
		string name;
		int age;
		int fee;
	}work_info[3];
	work_info[0].name = "李明";
	work_info[1].name = "王丽";
	work_info[2].name = "赵勇";
	work_info[0].age = 25;
	work_info[1].age = 22;
	work_info[2].age = 30;
	work_info[0].fee = 2500;
	work_info[1].fee = 2300;
	work_info[2].fee = 3000;
	cout<<("姓名\t\t年龄\t\t月薪\n");
	for (int i = 0; i < 3; i++)
	{
		cout << work_info[i].name << "\t\t" << work_info[i].age << "\t\t" << work_info[i].fee << endl;
	}
}