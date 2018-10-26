#include<iostream>
#include<cstring>
#include <string> 
using namespace std;
int N_test = 0;//定义测试案例数目变量
char ch[50];//定义字符型数组，存储输入的单词
string str[100];//定义字符串数组来存储最终结果
int flag = 0;//定义标志变量
int main() {
	
	cin >> N_test;//输入测试案例数目
	while (flag < N_test)
	{
		
		flag += 1;
		cin >> ch;//输入单词
		
		for (int i = 0; i < strlen(ch); i++)
		{
			ch[i] = tolower(ch[i]);//将单词的所有字母先变为小写
			//如果是元音字母，则变为大写
			if (ch[i] == 'a') ch[i] = 'A';
			if (ch[i] == 'e') ch[i] = 'E';
			if (ch[i] == 'i') ch[i] = 'I';
			if (ch[i] == 'o') ch[i] = 'O';
			if (ch[i] == 'u') ch[i] = 'U';
		}
		str[flag-1] = ch;//将结果存入字符串数组中
		
	}

	for (int j = 0; j < flag; j++) {//这里不能用N_test，因为已经减小到0

		cout << str[j] << endl;//输出结果
	}
	
	cin.get();
	cin.get();
	return 0;
}
