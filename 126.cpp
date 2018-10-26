#include<iostream>
using namespace std;
int T = 0;//定义T来记录需要计算的案列总数
long N = 0;//定义N为输入的正整数
int main()
{
	cin >> T;
	while (T--)
	{
		cin >> N;
		int right_2digit = N % 100;//最右边两位数
		int right_digit = N % 10;   //最右边一位数
		if (right_digit == 5 || right_digit == 6 || right_digit == 0 || right_digit == 1)//如果最右边一位数是5 6 0 1 则N^N的最右边一位数不变
			cout << right_digit;
		if (right_digit == 4)//如果最右边一位数是4 则N^N的最右边一位数是6
			cout << 6;
		if (right_digit == 9)//如果最右边一位数是9 则N^N的最右边一位数是9，因为只能循环奇数次
			cout << 9;
		if (right_digit == 8 || right_digit == 2)//如果最右边一位数是8/2 则N^N的最右边一位数要进一步判断
		{
			if (right_2digit % 4 == 0) cout << 6; //如果最右边两位数能被4整除，则N^N的最右边一位数是6
			else cout << 4;//否则为4
		}
		if (right_digit == 3)//如果最右边一位数是3 则N^N的最右边一位数要进一步判断
		{
			if ((right_2digit - 1) % 4 == 0) cout << 3;//如果最右边两位数-1能被4整除，则N^N的最右边一位数是3
			else cout << 7;//否则为7
		}
		if (right_digit == 7)//如果最右边一位数是7 则N^N的最右边一位数要进一步判断
		{
			if ((right_2digit - 1) % 4 == 0) cout << 7;  //如果最右边两位数-1能被4整除，则N^N的最右边一位数是7
			else cout << 3;//否则为3
		}
		cout << endl;
	}
	cin.get();
	cin.get();
	return 0;
}
