#include <iostream>

using namespace std;

/*

设N是一个四位数，它的9倍恰好是其反序数（例如：1234的反序数是4321）
求N的值

*/

int check(int n ){
	int temp = n*9 ;
	for(int i = 0 ; i < 4 ; i++){
		if(n%10 == temp/1000){
			n/=10;
			temp=(temp%1000)*10;
		}else{
			return 0;
		}
	}
	return 1 ;
}

int main(){
	for(int i = 1000 ; i < 1112 ; i++ ){
		if(check(i)){
			cout<<i<<endl;
		}
	}
	return 0;
}
