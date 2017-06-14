#include <iostream>
#include <stdio.h>
using namespace std;

/*

守形数是这样一种整数，它的平方的低位部分等于它本身。
比如25的平方是625，低位部分是25，因此25是一个守形数。
编一个程序，判断N是否为守形数。

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
