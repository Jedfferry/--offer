#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//�ݹ� 
int Add(int a, int b)
{
	return b ? Add(a^b, (a&b)<<1) : a;
}
//����
int Add_iter(int a,int b){
	int ans;
	while(b){
		ans=a^b;
		b=(a&b)<<1;
		a=ans;
	}
	return ans;
}
//��a���෴��������λȡ����һ
int negative(int a) 
{
	return Add(~a,1);
}
//����
int Minus(int a,int b)
{
	return Add(a,negative(b));
}
//�����˷� 
int Multi(int a,int b)
{
	int ans=0;
	while(b){
		if(b&1)
			ans=Add(ans,a);
		a=a<<1;
		b=b>>1;
	}
	return ans;
} 
//��������
int Divide(int a,int b)
{
	int coun=0;
	while(a>=b){
		a=Minus(a,b);
		coun=Add(coun,1);
	}
	return coun;
} 
int main(int argc, char** argv) {
	int num1=3,num2=4;
	cout<<Minus(num1,num2)<<endl;
	return 0;
}
