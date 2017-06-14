#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std ;

/*

输入一个整数n(2<=n<=10000)，要求输出所有从1到这个整数之间(不包括1和这个整数)个位为1的素数，如果没有则输出-1。

*/

bool Isprime(int n ){
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n%i == 0){
			return false ;
		}
	}
	return true ;
}

int main(){
	int n ;
	int cnt ;
	int non = -1 ;
	bool first = true ;
	int prime[1000];
	while(cin >> n){
		cnt = 0 ;
		for(int i = 2 ; i < n ; i++){
			if(Isprime(i)){
				if(i%10 == 1){
					prime[cnt] = i ;
					cnt++ ;
				}
			}
		}
 		if(cnt==0) cout<<-1<<endl;  
        else  
            {  
		        for(int i=0;i<cnt-1;i++) cout<<prime[i]<<" ";  
		        cout<<prime[cnt-1]<<endl;  
            }  

	}
	return 0 ;
}
