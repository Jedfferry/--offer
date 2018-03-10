#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void SelectSort(int r[],int n) {  
    int i ,j , min ,max, tmp;  
    for (i=1 ;i <= n/2;i++) {    
        // 做不超过n/2趟选择排序   
        min = i; max = i ; //分别记录最大和最小关键字记录位置  
        for (j= i+1; j<= n-i; j++) {  
            if (r[j] > r[max]) {   
                max = j ; continue ;   
            }    
            if (r[j]< r[min]) {   
                min = j ;   
            }     
      }    
      //该交换操作还可分情况讨论以提高效率  
      tmp = r[i-1]; r[i-1] = r[min]; r[min] = tmp;  
      tmp = r[n-i]; r[n-i] = r[max]; r[max] = tmp;   
    }   
}  
int main(int argc, char** argv) {
	int a[]={2,7,8,4,6,9,4,1,2,5,4,10,7,5,9,4,1,2,8,7};
	SelectSort(a,20);
	for(int j=0;j<20;j++)
	{
		cout<<a[j]<<"   ";
	}
	cout<<endl;
	return 0;
}
