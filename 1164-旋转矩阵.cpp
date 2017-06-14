#include <iostream> 
#include <cstdio>

using namespace std ;

/*

任意输入两个9阶以下矩阵，要求判断第二个是否是第一个的旋转矩阵，如果是，输出旋转角度（0、90、180、270），如果不是，输出-1。
要求先输入矩阵阶数，然后输入两个矩阵，每行两个数之间可以用任意个空格分隔。行之间用回车分隔，两个矩阵间用任意的回车分隔。

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
