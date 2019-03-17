//直接法：
#include <iostream>
using namespace std;
int num[100000];
int n, m;
double maxn = 0.0;
void find(){
	double longer=0;
	int	i,j;
	int sum=0;
	for(i=1;i< maxn*100;i++){
		for (j = 0; j <n; j++){
			sum += ((int)(num[j])*100 / i);
		}
		if (sum == m){
			longer = i;
		}
		if (longer > 0 && sum != m){
			break;
		}
		sum = 0;
	}
	printf("%.2f\n", longer/100);
}
int main() {
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			scanf("%d", &num[i]);
			if (maxn < num[i]) maxn = (double)num[i];
		}
		find();
	    system("Pause");
	    return 0;
}

//二分法
#include<cstdio> 
#include<iostream>
using namespace std;
#define eps 0.00001
int num[100050];
int n, m;

int check(double l) {
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += (int)((double)num[i] / l);
	}
	return ans;
}

int main()
{
	cin >> n >> m;
	double minn = 0.0, maxn = 0.0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		if (maxn < num[i]) maxn = (double)num[i];
	}
	double mid;
	while (maxn - minn >= eps) {
		mid = (minn + maxn) / 2;
		if (m > check(mid)) {
			// 需求 > 能做的，太长了 
			maxn = mid;
			continue;
		}
		else {
			// 需求 < 能做的，太短了 
			minn = mid;
			continue;
		}
	}
	printf("%.2lf\n", mid);
	system("Pause");
	return 0;
}