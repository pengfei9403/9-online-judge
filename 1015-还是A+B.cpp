#include <iostream>

using namespace std;

/*

��������С��10000��������A��B������A+B����Ҫע����ǣ����A��B��ĩβK��������8��λ������ͬ����ֱ�����-1

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
