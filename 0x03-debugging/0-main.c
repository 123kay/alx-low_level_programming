
#include "main.h"
void positive_or_negative(int c){
	if(c>0){
		printf("%d is positive", &c);
	}
	else if(c==0){
		printf("%d is zero", &c);
	}
	else{
		printf("%d is negative", &c);
	}
}
int main(void)
{
int i;

i = 0;
positive_or_negative(i);
return 0;
}
