#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//��r[n]�е�kСԪ�� 
void display(int a[],int num)
{
	for(int i=0;i<num;i++)
	{
		cout<<"  "<<a[i];
	}
	cout<<endl;
}
int count=0; 
int Partition(int r[],int low,int high)
{
	int i=low,j=high;
	while(i<j)
	{
		while(i<j&&r[i]<=r[j]) j--;
		if(i<j)
		{
			int temp=r[i];r[i]=r[j];r[j]=temp;//�ѽ�С��¼�任��ǰ�� 
			i++;
		}
		cout<<count++<<endl;
		display(r,5);
		while(i<j&&r[i]<=r[j])  i++;
		if(i<j)
		{	
			int temp=r[i];r[i]=r[j];r[j]=temp;//�ѽϴ��¼�任��ǰ�� 
			j--;
		}
	}
	return i;              //������ֵ��¼��λ�� 
}
int SelectMinK(int r[],int low,int high,int k)
{
	int s;     //sΪ��ֵλ��
	s=Partition(r,low,high);
	cout<<"s="<<s<<endl; 
	if(s==k)                 //���ҳɹ� 
		return r[s];
	if(s>k)
		return SelectMinK(r,low,s-1,k);
	else
		return SelectMinK(r,s+1,high,k);
}

int main(int argc, char** argv) {
	int a[]={5,5,4,2,3};
	display(a,5);
	cout<<SelectMinK(a,0,4,3)<<endl;
	display(a,5);
	
	return 0;
}
