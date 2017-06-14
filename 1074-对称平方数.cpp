#include <iostream>

using namespace std;

/*

打印所有不超过n(n<256)的，其平方具有对称性质的数。
如11*11=121

*/

int check(int n ){
	int temp = n*n ;
	int count = 0 ;
	int arr[10];
	for(;temp;temp/=10){
		arr[count] = temp%10 ;
		count++ ;
	}
	for (int i = 0 ; i < count/2 ; i++){
		if(arr[i]!=arr[count-i-1]){
			return 0;
		}
	}
	return 1 ;
}

int main(){
	for(int i = 0 ; i < 257 ; i++ ){
		if(check(i)){
			cout<<i<<endl; 
		}
	}
	return 0;
}
