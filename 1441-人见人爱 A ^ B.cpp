#include <iostream>
#include <stdio.h>
using namespace std;

/*

��A^B�������λ����ʾ��������˵����A^B�ĺ����ǡ�A��B�η���

*/

int main(){
	int a , b ;
	int temp ;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(a == 0){
			break;
		}
		temp = a ;
		for(int i = 0 ; i < b-1 ; i++){
			temp=temp*a; 
			temp%=1000;
		}
		cout<< temp<< endl;
	}
	return 0 ;
}
