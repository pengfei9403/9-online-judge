#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std ;

/*

对输入的n个数进行排序并输出。

*/

int main(){
	int n ;
	int arr[100];
	while(scanf("%d",&n)!=EOF){
		for(int i = 0 ; i < n ; i++){
			cin>>arr[i];
		} 
		sort(arr,arr+n);
		for(int i = 0 ; i < n-1 ; i++){
			cout<<arr[i]<<" ";
		}
		cout<<arr[n-1]<<endl;
	}
	return 0 ;
}
