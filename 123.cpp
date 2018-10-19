#include<iostream>
using namespace std;
int n = 0;//定义n为井的高度
int u = 0;//定义u为爬虫每分钟向上爬的距离
int d = 0;//定义d为爬虫休息一分钟的时候向下滑的距离
int time[100];//定义时间数组存储爬虫爬出井的时间
int N = 0;//定义N来统计输入了多少行数据
int x = 0;//定义爬虫的当前位置
int t = 0;//定义当前时间
int main() {

	while (1) {//反复输入直到输入n=0时停止
		cin >> n >> u >> d;//连续输入井的高度，爬虫每分钟向上爬的距离，爬虫休息一分钟的时候向下滑的距离
		if (n == 0) {//输入n=0时停止输入，跳出循环
			break;
		}
		else {
			N += 1;
			while (1) {//爬升
				t += 1;//时间+1s
				x += u;//爬升距离u
				if (x >= n) { // >=而不是==是因为有可能在最后一秒爬升的距离超出n
					time[N - 1] = t;//将时间t存入time数组
					x = 0;//x归0，以便进行下一次循环
					t = 0;//t归0，以便进行下一次循环
					break;
				}
				//休息
				t += 1;//时间+1s
				x -= d;//距离-d
				if (x >= n) {// >=而不是==是因为有可能在最后一秒爬升的距离超出n
					time[N - 1] = t;//将时间t存入time数组
					x = 0;//x归0，以便进行下一次循环
					t = 0;//t归0，以便进行下一次循环
					break;
				}

			}
		}

	}
	for (int i = 0; i < N; i++) {//输出结果
		cout << time[i] << endl;
	}

	cin.get();
	cin.get();
	return 0;
}