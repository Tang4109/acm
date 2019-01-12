#include<iostream>
#include<string>
#include<cstring>
#include<iostream>
using namespace std;

struct student_info {
	char test_number[20];                                          //定义学生的考号
	int solved_num = 0;                                            //定义学生解决的题目数量
	int solved_name[10];                                           //定义数组来存储学生解决题目的题号
};

int student_num = 1;                                               //定义考生人数
int exam_num = 0;                                                  //定义考题数目
int exam_score[10];                                                //定义动态数组来存储每道题的分值
int score = 0;                                                     //定义分数线

int main()
{

	while (student_num) {
		/****************************************************************************************************/
		//第一部分：数据的输入
		cin >> student_num;
		if (student_num == 0) {                                     //如果学生人数为0，跳出循环，结束程序
			break;
		}
		cin >> exam_num >> score;                                   //第一行数据:考题数和分数线
		for (int i = 0; i < exam_num; i++) {
			cin >> exam_score[i];                                   //输入第二行数据：各题的分值
		}

		student_info student[1000];                                 //定义一个结构数据
																    //cout << student_num << endl;
		for (int j = 0; j < student_num; j++) {
			                                                        //cout << "fgh" << endl;
			cin >> student[j].test_number >> student[j].solved_num; //输入第三行数据的前两个值
			for (int k = 0; k < student[j].solved_num; k++) {
				                                                    //cout << "zyj" << endl;
				cin >> student[j].solved_name[k];                   //输入第三行数据的后三个值
																    //cout << student[i].solved_name[j]<<endl;
			}

		}
		/********************************************************************************************************/
		//第二部分：数据的处理与计算
		int sum = 0;                                                      //定义学生的分数变量
		int x = 0;                                                        //定义超过分数线的考生人数
		string name[1000];
		int score_all[1000];
		for (int m = 0; m < student_num; m++) {
			for (int n = 0; n < student[m].solved_num; n++) {
				sum = sum + exam_score[(student[m].solved_name[n]) - 1];  //该学生的分数
			}
			if (sum >= score) {
				x++;                                                      //超过分数线的考生人数+1
																		  //排序
				if (x == 1) {
					score_all[0] = sum;                                   //把第一个值给score_all[0]
					name[0] = student[m].test_number;

				}
				for (int c = x; c >= 2; c--) {                            //注意c大于2
					if (sum > score_all[c - 2]) {                         //从大到小排序，冒泡排序
						score_all[c - 1] = score_all[c - 2];
						score_all[c - 2] = sum;
						name[c - 1] = name[c - 2];
						name[c - 2] = student[m].test_number;
					}
					else if (sum == score_all[c - 2]) {                   //如果分数相同，则按照考号排序
						if (student[m].test_number<name[c - 2]) {
							name[c - 1] = name[c - 2];
							name[c - 2] = student[m].test_number;
						}
						else {
							name[c - 1] = student[m].test_number;
						}
					}
					else {                                                //如果sum比最右边的一个（也即最小）都小，则把它放在最右边
						score_all[x - 1] = sum;
					}

				}

			}
			sum = 0;
		}

		cout << x << endl;                                                //输出超过分数线的考生人数
		for (int i = 0; i < x; i++) {                                     //输出学号和分数
			cout << name[i] << " " << score_all[i] << endl;
		}


	}


	//cin.get();
	cin.get();
	return 0;
}



