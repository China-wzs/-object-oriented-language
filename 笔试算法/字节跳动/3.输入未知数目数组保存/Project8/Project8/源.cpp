#include<iostream>
#include<vector>
using namespace std;
int main()
{
	double val = 0;
	char ch;
	int n, a=0,b;
	bool flag = 0;       //flag������ע���һ��val�Ƿ����뵽vec��
	printf("������������飺");
	cin >> n;
	b = cin.get();
	while (n > 0) {
		vector <int> vec;
		while (ch = cin.get()) {
			if (ch == '\n')              //����ǻ��з�������
				break;
			if (ch == ' ') {              //����ǿո񣬽��ո�ǰ�������뵽vec�У���ʼ��¼�µ���
				continue;
			}
			else {
				flag = 0;
				val = ch - '0';
				vec.push_back(val);
			}
		}
		printf("��%d��δ֪��С���飺",++a);
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