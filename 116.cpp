#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, j, m, sum = 0, flag = 0,flag2 = 0;
	char enter1;
	char enter2;
	int n = 1;
	int x[1000];
	int y[1000];

	while (1){
		if (flag2 != 1){
			cin >> n;
		}
		else{
			n = enter2 - 48;
			flag2 = 0;
		}

		sum = 0;
		flag = flag + 1;
		for (int i = 0; i < n; i++){
			cin >> x[i];
			sum = sum + x[i];
			y[flag - 1] = sum;
		}

			cin.get(enter1);
			cin.get(enter2);
			flag2 = flag2 + 1;
			if (enter2 == '\n'){
				break;
			}

		}

	for (int j = 0; j < flag; j++){
		cout << y[j] << endl;
	}

	cin.get();
	return 0;
}
	
	
	

