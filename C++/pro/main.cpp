//��������ѧУ����һЩͬѧһ����һ���ʾ���飬
//Ϊ��ʵ��Ŀ͹��ԣ������ü����������N��1��1000֮������������N��1000����
//���������ظ������֣�ֻ����һ������������ͬ����ȥ����
//��ͬ������Ӧ�Ų�ͬ��ѧ����ѧ�š�Ȼ���ٰ���Щ����С��������
//�����źõ�˳��ȥ��ͬѧ�����顣����Э��������ɡ�ȥ�ء��롰���򡱵Ĺ�����

#include <iostream>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int num_flag=0;//�ظ����ֵĸ���
int flag=0;//�ж��Ƿ����ȫ�������ظ� 
int num_all=0;
int num_check(int *a,int num)//�ж��Ƿ����ظ������� 
{
	flag=0;
	for(int i=0;i<num;i++)
	{
		for(int j=i+1;j<num;j++)
		{
			if(a[i]==a[j])
			{
				a[i]=-1;//�ظ�����Ϊ-1 
				num_flag++;//�ظ��ĸ��� 
				flag=1;//���ظ� 
			}
		}
	}
	return flag;
}
int num_check1(int *a,int num)//�ж��Ƿ����ظ������� 
{
	for(int i=0;i<num-num_all;i++)
	{
		for(int j=i+1;j<num-num_all;j++)
		{
			if(a[i]==a[j])
			{
				num_all++;
				for(int k=i;k<num-1;k++)
				{
					a[k]=a[k+1];
				}	
				break;
			}
		}
	}
	for(int key=num;key>num-num_all-1;key--)
	{
		a[key]=-1;
	}
	cout<<endl<<"1.the num_all is:"<<num_all<<endl;
}
int num_change(int *a,int num)//���Ԫ�� 
{
	int key_repeat;
	for(int i=0;i<num;i++)
	{
		if(a[i]==-1)
		{
			key_repeat=rand()%1000+1;//���������ȡ���� 
			a[i]=key_repeat;
		}
		else
			continue;
	}
}
void quick_sort(int s[], int l, int r)  
{  
    int i, j, x;  
    if (l < r)  
    {  
        i = l;  
        j = r;  
        x = s[i];  
        while (i < j)  
        {  
            while(i < j && s[j] > x)   
                j--; /* ���������ҵ�һ��С��x���� */  
            if(i < j)   
                s[i++] = s[j];  
      
  
            while(i < j && s[i] < x)   
                i++; /* ���������ҵ�һ������x���� */  
            if(i < j)   
                s[j--] = s[i];  
  
        }  
        s[i] = x;  
        quick_sort(s, l, i-1); /* �ݹ���� */  
        quick_sort(s, i+1, r);  
    }  
} 
int main(int argc, char** argv) {
	int num;
	cout<<"Please input a number:";
	cin>>num;
	int *a=new int [num];
	for(int i=0;i<num;i++)
	{
		a[i]=rand()%15+1;
	}
	cout<<"you have input an array:"<<endl;
	for(int k=0;k<num;k++)
	{
		cout<<a[k]<<"     ";
	}
	cout<<endl;
	/*do{	
		num_check(a,num);
		num_change(a,num);
		num_check(a,num);
	}while(flag==1);*/
	num_check1(a,num);
	cout<<"the final is:"<<endl;
	for(int j=0;j<num;j++)
	{
		cout<<a[j]<<"     ";
	}
	cout<<endl<<"the num_all is:"<<num_all<<endl;
	quick_sort(a,0,num-num_all);
	cout<<"the last is:"<<endl;
	for(int j=1;j<num-num_all+1;j++)
	{
		cout<<a[j]<<"     ";
	}
	cout<<endl;
	return 0;
}
