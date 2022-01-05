#include<stdio.h>
#include<math.h>
int main(){
	int n,i,temp,cube=0;
	
	// n doit etre positive et contient trois chiffres n>99
	do{
		printf("donner la valeur de n :");
		scanf("%d",&n);
	}while(n<100);
	/*la variable temp pour manipuller la valeur de n 
	et consserver la valeur de n pour verfier c'est cubique ou pas*/
	temp=n;
	
	while(temp!=0){
		//calculer le cube de le reste de la devision de n sure 10
		cube=cube+pow(temp%10,3);
		//enlever le dernier chiffre de n
		
		temp=temp/10;
	}
	//verifier c'est n est cubique
	if(cube==n){
		printf("le nombre est cubique");
	}else{
		printf("le nombre n'est pas cubique");
	}
	return 0;
}
