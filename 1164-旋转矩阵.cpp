#include <iostream> 
#include <cstdio>

using namespace std ;

/*

������������9�����¾���Ҫ���жϵڶ����Ƿ��ǵ�һ������ת��������ǣ������ת�Ƕȣ�0��90��180��270����������ǣ����-1��
Ҫ����������������Ȼ��������������ÿ��������֮�������������ո�ָ�����֮���ûس��ָ������������������Ļس��ָ���

*/

bool tran0(int s1[][9] , int s2[][9] , int n){
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(s1[i][j] != s2[i][j]){
				return false ; 
			}
		}
	}
	return true ;
}

bool tran90(int s1[][9] , int s2[][9] , int n){
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(s1[i][j] != s2[j][n-i-1]){
				return false ;
			}
		}
	}
	return true ;
}

bool tran180(int s1[][9] , int s2[][9] , int n){
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(s1[i][j] != s2[n-i-1][n-j-1]){
				return false ;
			}
		}
	}
	return true ;
}

bool tran270(int s1[][9] , int s2[][9] , int n){
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(s2[i][j] != s1[j][n-i-1]){
				return false ;
			}
		}
	}
	return true ;
}

int main(){
	int n ; 
	int squre1[9][9] , squre2[9][9] ;
	while (cin >> n){
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < n ; j++){
				cin >> squre1[i][j] ;
			} 
		}
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < n ; j++){
				cin >> squre2[i][j] ;
			} 
		}
        if(tran0(squre1 , squre2 , n)){
        	cout << 0 << endl ; 
		}else if(tran90(squre1 , squre2 , n)){
        	cout << 90 << endl ;
		}else if(tran180(squre1 , squre2 , n)){
			cout << 180 << endl ; 
		}else if(tran270(squre1 , squre2 , n)){
			cout << 270 << endl ; 
		}else {
			cout << -1 << endl ;
		}
	}
	return 0 ;
} 
