#include <iostream>
#include <stdio.h>
using namespace std;

/*

������������һ������������ƽ���ĵ�λ���ֵ���������
����25��ƽ����625����λ������25�����25��һ����������
��һ�������ж�N�Ƿ�Ϊ��������

*/

int check(int x){
	int temp = x*x ;
	if(x/10 == 0){
		if(temp%10 == x){
			return 1 ;
		}else{
			return 0 ;
		}
	}else{
		if(temp%100 == x%100 ){
			return 1 ;
		}else{
			return 0;
		}
	}
}

int main(){
	int n=1 ;
	int sum ;
	while(scanf("%d",&n)!=EOF){
		if (check(n)){
			cout<<"Yes!"<<endl;
		}else{
			cout<<"No!"<<endl;
		}		
	}
	return 0;
} 
