#include<stdio.h>
#include<math.h>
int main(){
	int n,i,temp,cube=0;
	do{
		printf("donner la valeur de n :");
		scanf("%d",&n);
	}while(n<=0);
	//la variable temp pour manipuller la valeur de n
	temp=n;
	while(temp!=0){
		cube=cube+pow(temp%10,3);
		temp=temp/10;
	}
	if(cube==n){
		printf("le nombre et cubique");
	}else{
		printf("le nombre n'est pas cubique");
	}
	return 0;
}
