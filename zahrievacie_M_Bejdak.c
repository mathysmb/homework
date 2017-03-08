#include <stdio.h>

short int swap_endianness(short int x){
	char *i,*j;
	char c;
	
	i = (char*) &x;
	j = i + 1;
	
	c = *i;
	*i = *j;
	*j = c;
	
	return x;
}

void test(short int x){
	short int y;
	
	y = swap_endianness(x);
	printf("Povodne cislo: %d\nZmenene cislo: %d\n\n",x,y);
}


void main(){
	test(1);
	test(0);
	test(-1);
	test(4678);
	test(-1872);
}
