#include <iostream>

using namespace std;

/*

��N��һ����λ��������9��ǡ�����䷴���������磺1234�ķ�������4321��
��N��ֵ

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
