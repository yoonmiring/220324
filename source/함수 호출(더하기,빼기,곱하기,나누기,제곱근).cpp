#include <stdio.h> 

int plus(int a, int b){
	int result;
	result = a+b;
	return result;
}
int minus(int a, int b){
	int result;
	result = a-b;
	return result;
}

int mul(int a, int b){
	int result;
	result = a*b;
	return result;
}
int div(int a, int b){
	float result;
	result = (float)a/(float)b;
	return result;
}

int pow(int a, int b){
	int result= 1;	 
	for(int i=0; i<b;i++){
		result *= a;		
	}
	return result;
}

int main(){
	int returnPlus;
	returnPlus = plus(10,20);
	printf("%d\n",returnPlus);
	
	int returnminus;
	returnminus = minus(10,20);
	printf("%d\n",returnminus);
	
	int returnmul;
	returnmul = mul(10,20);
	printf("%d\n",returnmul);
	
	int returndiv;
	returndiv = div(10,20);
	printf("%d\n",returndiv);
	
	int returnpow;
	returnpow = pow(2,10);
	printf("%d\n",returnpow);
	return 0;
}
