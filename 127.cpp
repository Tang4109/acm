//acm127题,此题的关键是substr函数，它可以实现对字符串的切割
//用切割后的字符串进行判断


#include<iostream>
#include<string>

using namespace std;
string id;
string id_4;
string place;
int n = 0;

int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> id;
		id_4 = id.substr(0, 2);
		if (id_4 == "33") {
			place = "Zhejiang";
		}
		else if (id_4 == "11") {
			place = "Beijing";
		}
		else if (id_4 == "71") {
			place = "Taiwan";
		}
		else if (id_4 == "81") {
			place = "Hong Kong";
		}
		else if (id_4 == "82") {
			place = "Macao";
		}
		else if (id_4 == "54") {
			place = "Tibet";
		}
		else if (id_4 == "21") {
			place = "Liaoning";
		}
		else if (id_4 == "31") {
			place = "Shanghai";
		}

		cout << "He/She is from " << place << ",and his/her birthday is on " << id.substr(10, 2) << "," <<
			id.substr(12, 2) << "," << id.substr(6, 4) << " based on the table." << endl;


	}
	
	cin.get();
	cin.get();


}
