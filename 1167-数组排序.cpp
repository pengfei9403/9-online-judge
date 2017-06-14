#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std ;

/*

输入一个数组的值,求出各个值从小到大排序后的次序。

*/

int main(){
	int n ;
	int len ;
	int tag = 0 ;
	while(scanf("%d",&n)!=EOF){
		len = n ;
		tag = 0 ;
		int *arr = new int [n] ;
		int *temp = new int [n] ;
		for(int i = 0 ; i < n ; i++){
			cin >> arr[i] ;
			temp[i] = arr[i] ;
		}
		sort(temp , temp+n);
		for(int i = 1 ; i < n ; i++){
			if(temp[tag] == temp[i]){
				continue ;
			}else{
				tag++;
				temp[tag] = temp[i] ;
			}
		}
		for(int i = 0 ; i < n-1 ; i++){
			for(int j = 0 ; j < tag+1 ; j++){
				if(arr[i] == temp[j]){
					cout<<j+1<<" " ;
					break ;
				}
			}
		}
		for(int i = 0 ; i < tag+1 ; i++){
			if(arr[n-1] == temp[i]){
				cout << i+1 << endl ;
				break ;
			}
		}
		delete arr ;
		delete temp ;
	}
	return 0 ;
}
