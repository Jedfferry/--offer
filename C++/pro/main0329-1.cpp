#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//���Ƕ������ݡ������������룬����ͨ����Ϊ0%�������ˣ���������������
int main() {
	int num;
	while(cin>>num)
	{
		int *a=new int[num];
		int num_zero;//0�ĸ��� 
		int i=0,j=0;
		while(i<num)
		{
			cin>>a[i];
			if(a[i]==0)
				num_zero++;
			i++;
		}
		i=0;
		while(i<num)
		{
			if(a[i]!=0 )//&& a[j]==0 && j<num )
			{
				a[j++]=a[i];//a[i]=0;j++;
			}
			i++;
		}
		i=num-num_zero;
		while(i<num)
		{
			a[i++]=0;
		}
		i=0;
		while(i<num)
		{
			cout<<a[i]<<endl;
			i++;
		}
	}	
	return 0;
}
