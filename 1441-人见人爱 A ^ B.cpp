#include <iostream>
#include <stdio.h>
using namespace std;

/*

求A^B的最后三位数表示的整数。说明：A^B的含义是“A的B次方”

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
