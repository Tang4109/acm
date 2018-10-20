#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, j, m, n, sum = 0, flag = 0;

	int x[1000];
	int y[1000];
	cin >> m;
	while (1){

		cin >> n;
		sum = 0;
		flag = flag + 1;

		for (int i = 0; i < n; i++){
			cin >> x[i];
			sum = sum + x[i];
			y[flag - 1] = sum;
		}

		if ((flag) == m){
			flag = flag - 1;
			break;
		}

	}

	for (int j = 0; j < flag; j++){
			cout << y[j] <<endl<< endl;
		}
	
	cout << y[flag]<<endl;
	
	


	cin.get();
	cin.get();
	return 0;
}