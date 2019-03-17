#include<iostream>
#include<vector>
using namespace std;
int main()
{
	double val = 0;
	char ch;
	int n, a=0,b;
	bool flag = 0;       //flag用来标注最后一个val是否输入到vec中
	printf("输入多少行数组：");
	cin >> n;
	b = cin.get();
	while (n > 0) {
		vector <int> vec;
		while (ch = cin.get()) {
			if (ch == '\n')              //如果是换行符，结束
				break;
			if (ch == ' ') {              //如果是空格，将空格前的数插入到vec中，开始记录新的数
				continue;
			}
			else {
				flag = 0;
				val = ch - '0';
				vec.push_back(val);
			}
		}
		printf("第%d组未知大小数组：",++a);
		for (int i = 0; i < vec.size(); i++) {
			printf(" %d", vec[i]);
		}
		vector<int>().swap(vec);
		printf("\n\n");
		n--;
	}
	system("Pause");
	return 0;
}