/*
	二叉树题-----逆推
	题目：满二叉树，根节点为编号1，按顺序编号。
		  小明从根节点出发，拿着数字0，走到k节点，得到数字n。他每当在某一个节点时，可以选择加上这个编号或者减去这个编号，最终到节点k时得到数字n，且0<n<10000000
		  例子1： k   n
			输入  6   10
			输出  -1
				  +2
				  -5
				  +10
		 例子2：  k   n
			输入  2   3
			输出  +1
				  +2
*/

/*
	解法：
		1.因为后一个节点总是比前一个节点标号大，而且大于前面所有节点之和，所有可以使用逆推的方法
		2.举例：
			k =10 n=6
			y ：10>6        s：5为-
			y ：10-5<6      s：2为+
			y ：10-5+2>6    s：1为-
		3.步骤：
			1.先确认深度
			2.把每一层的保存在一个数组中
			3.做逆推判断
			4.打印
*/

#include <iostream>
using namespace std;
int main() {
	int h = 1,i;//层数
	int max = 1;//每一层的最大数
	int n,k;
	int a[100], b[100]; 
	cin >>k>>n;
	for ( i = 1; i <= max; i++)//这i是父节点的索引号
	{
		if (k > max)
		{
			max = (max+1) * 2-1;
			h += 1;
		}
	}
	for (i = 0; i < h; i++)
	{
		a[i] = k / pow(2, i);
	}
	int sum = a[0];
	for (int i = 0; i < h; i++)
	{
		
		if (sum>n)
		{
			a[i + 1] = -a[i + 1];
			sum = sum + a[i + 1];
		}
		else
		{
			sum = sum + a[i + 1];
		}
	}
	for (i = h; i > 0; i--)
	{
		if(a[i-1]>0)
			cout << "+"<<a[i-1] << endl;
		else
			cout << a[i - 1] << endl;
	}
	system("Pause");
	return 0;
}