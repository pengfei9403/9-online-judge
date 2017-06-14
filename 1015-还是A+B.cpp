#include <iostream>

using namespace std;

/*

读入两个小于10000的正整数A和B，计算A+B。需要注意的是：如果A和B的末尾K（不超过8）位数字相同，请直接输出-1

*/

int check(int x , int z,int y){
	for(int i = 0;i<y;i++){
		if(x%10 == z%10){
			x/=10;
			z/=10;
		}else{
			return 0;
		}
	}
	return 1;
}

int main(){
	int a=1 , b , k ;
	int sum ;
//	cin>>a>>b>>k;
	while(a){
		cin>>a>>b>>k;
		if (a==0){
			break ;
		}
		sum = a+b ;
		if (check(a,b,k)){
			cout<<"-1"<<endl;
		}else{
			cout<<sum<<endl;
		}
	}
	return 0;
}
