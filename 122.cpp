//水题，计算路程和距离，没有难度
//遇到的问题，定义数组时不能用distance,这是一个内置函数；时间t不能设置为整型，不然除以3600后会变为0；注意表达时的空格，不然oj通不过

#include<iostream>
#include<iomanip>
using namespace std;
const double pi = 3.1415927;//定义符号常量pi
double d = 0;//定义直径d
int circle = 0;//定义自行车转过的圈数
double S = 0;//定义自行车行驶里程
double v = 0;//定义自行车的速度变量
double t = 0;//定义自行车行驶时间
//定义数组是为了最后一起输出
double dis[100];//定义一个距离数组来装行驶里程.ps.不能用distance,这是一个内置函数
double speed[100];//定义一个速度数组来装平均速度
int flag = 0;//定义标志变量
int N = 0;//定义N来记录输入了多少行数据

int main() {
	while (1) {

		cin >> d;//直径数据
		cin >> circle;//自行车转过的圈数
		cin >> t;//自行车行驶时间
		N += 1;
		if (circle != 0) {//当自行车转过的圈数不为0时，计算里程和速度
			flag += 1;
			S = pi * (d/(12*5280)) * circle;//计算里程
			v = S / (t/3600);//计算速度

			dis[flag - 1] = S;//存入数组中
			speed[flag - 1] = v;

		}
		else {//如果输入circle为0，停止输入，跳出循环，输出结果

			break;
		}

	}
	for (int i = 0; i < N-1; i++) {
		cout << fixed << setprecision(2) << "Trip #" << i + 1 << ": " << dis[i] << " " << speed[i] << endl;
		
	}

	cin.get();
	cin.get();
	return 0;
}