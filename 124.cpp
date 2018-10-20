#include<iostream>
using namespace std;
int Y = 0;//定义Y为当前年份
int N = 0;//定义N来指定距离现在多少年
int n = 0;//定义n来指定计算案例数 
int flag_t = 0;//标志标量，用于计数案例
int flag_Y = 0;//标志标量，用于计数年份
int year[100];//定义年份数组来存储计算结果
int main() {
	cin >> n; //指定计算案例数
	while (flag_t < n) {//输入案例
		flag_t += 1;//标志变量+1
		cin >> Y >> N;//输入当前年份和年份距离

		while (flag_Y < N) {//做N个循环，找到距离当前年份为N年的那个闰年
			if ((Y % 4 == 0 && Y % 100 != 0) || Y % 400 == 0) {//|和&是位运算符， &&和||是逻辑运算符
				flag_Y += 1;//如果是闰年，标志位+1
			}
			Y = Y + 1;//年份+1
		}
		year[flag_t-1] = Y - 1;//将找到的闰年存入年份数组中
		flag_Y = 0;//年份标志量归0，以便下一次计数
	}
	for (int i = 0; i < n; i++) {//输出结果
		cout << year[i] << endl;
	}

	cin.get();
	cin.get();
	return 0;
}