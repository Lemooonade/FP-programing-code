#include <iostream>
#include <map>
#include <string>
using namespace std;

string tolowwer(string s) {
	string res = "";
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') 
		{
			s[i] = s[i] + 32;
		}
		res += s[i];
	}
	return res;
}

bool split_or_not(char ch) 
{
	if (ch == ',' || ch == '.' || ch == ' ') {
		return true;
	}
	return false;
}

void text_check(string s) 
{
	string temp = "";
	map<string, int> text_map;//创建text_map的一个map容器
	for (int i = 0; i < s.length(); i++) 
	{
		if (!split_or_not(s[i])) 
		{
			temp += s[i];
		}
		else {
			if (temp == "") 
			{
				continue;
			}
			//若是一个分隔符，查找temp是否已经在map中，若在map中则将value值加1，否则添加一个key值
			//此处表示没有找到key为temp的map
			//map.find如果没有找到就返回map.end()的值
			if (text_map.find(temp) == text_map.end()) 
			{
				text_map[temp] = 1;
			}
			//如果找到则将value  +1
			else 
			{
				int value = text_map[temp];
				value++;
				text_map[temp] = value;
			}
			temp = "";//将temp初始化为空用于下一个单词的处理
		}
	}
	map<string, int>::iterator print_map;//创建迭代器用于输出
	for (print_map = text_map.begin(); print_map != text_map.end(); print_map++) 
	{
		cout << print_map->first << ":" << print_map->second << endl;
	}

}

int main(int n) {
	string s1;
	getline(cin, s1);
	string s = tolowwer(s1);
	text_check(s);
	return 0;
}