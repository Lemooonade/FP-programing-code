#include<iostream>
#include<string>
#include<set>
#include <sstream>
using namespace std;
int main()
{
    set<string> b; //构建b容器
    string a, tmp; //创建字符串a和tmp,a用于储存用户输入的行，tmp为临时变量
    while (getline(cin, a))//一直获取输入行
    {
        b.clear(); //释放b容器清空b容器的size
        if (a[0] == '#')//遇#行结束
        {
            break;
        }       
        stringstream ss(a);//构建stringstream类的ss对象a
        while (ss >> tmp)//将a里的单词一个一个的输入到tmp里面
        {
            b.insert(tmp);//将tmp添加到b容器里面，容器b内不能有重复的对象，所以计算b的size即可size为真实占用内存大小
        }
        cout << b.size() << endl;//输出b的size
    }
    return 0;
}