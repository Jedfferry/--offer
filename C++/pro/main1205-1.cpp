#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
///����һ��������������������Ʊ�ʾ��1�ĸ��������и����ò����ʾ��
int  NumberOf1(int n){
	int count=0;
	while(n)
	{
		count++;
		n=n(n-1)&n;
	}
	return count;
}
int main(int argc, char** argv) {
	int num;
	cin>>num;
	NumberOf1(num);
	return 0;
}
