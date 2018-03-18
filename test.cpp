#include<iostream>
#include<fstream>
#include<string>
using namespace std;
const string filename="test.txt";
int main()
{
ofstream fout(filename.c_str());
if(!fout.is_open())
{
cerr<<"无法打开文件 "<<filename<<endl;
exit(0);
}
cout<<"输入密码：";
float secret;
cin>>secret;
fout<<secret<<endl;
fout.close();

ifstream fin(filename.c_str());
if(!fin.is_open())
{
cerr<<"无法打开文件 "<<filename<<endl;
exit(0);
}
cout<<"输入的密码为：\n";
char ch;
while(fin.get(ch))
cout<<ch;
fin.close();
return 0;
}