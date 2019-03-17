#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char s[10000];
int main()
{
	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		scanf("%s", &s);
		int Len = strlen(s);

		if (Len < 3) {
			printf("%s\n", s);
			continue;
		}
		int p = 0;
		while (p != Len) {
			//aaa
			if (s[p] == s[p + 1] && s[p + 1] == s[p + 2]) {
				for (int k = p; k <= Len; k++) {
					s[k] = s[k + 1];
				}
				Len--;
				continue;
			}
			//aabb 
			if (s[p] == s[p + 1] && s[p + 2] == s[p + 3]) {
				for (int k = p + 2; k <= Len; k++) {
					s[k] = s[k + 1];
				}
				Len--;
				continue;
			}
			p++;
		}

		printf("%s\n", s);
	}
	system("Pause");
	return 0;
}