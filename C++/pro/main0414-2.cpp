#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define MAXSIZE 500
int main(int argc, char** argv) {
	int num;
	cin>>num;
	int flag;
	int sum=0;//��ʼ�ɳ�ֵ
	int all[MAXSIZE];
	int low=1,high=0;//��ʼ���������� 
	for(int i=0;i<MAXSIZE;i++)
	{
		all[i]=-666;
	} 
	for(int i=0;i<num;i++)
	{
		cin>>flag;
		if(flag==1)//�ɳ�ֵ 
		{
			int time1,time2,value;
			cin>>time1>>time2>>value;
			for(int i=time1;i<=time2;i++)
			{
				if(all[i]<value) 
					all[i]=value;
			}
			if(time1<low)
				low=time1;
			if(time2>high)
				high=time2;
		}
		else if(flag==2)//����ֵ 
		{
			int tian,value;
			cin>>tian>>value;
			all[tian]+=value;//�������ֵ 
			if(tian>high)
				high=tian;
		} 
	}
	for(int i=low;i<=high;i++)
	{
		sum+=all[i];
	}
	cout<<sum<<endl;
	return 0;
}



