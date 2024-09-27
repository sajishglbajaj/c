#include<stdio.h>
int main(){
int a=110,decimal=0,i,rem;
while(a>0){
	rem=a%10;

	a=a/10;

	decimal+=pow(2,rem)*rem;
	printf("%d \n",decimal);
}
printf("%d",decimal);

}

