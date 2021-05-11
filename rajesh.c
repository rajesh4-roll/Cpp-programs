#include <stdio.h>
#define SQUARE(x) x * x
typedef struct name{ 
	char naam[20];
};
int sqr(int x);
int main(){
	struct name rajes;
	int x = 5;
    printf("Hello, World!\n ");
    // scanf("%s",rajes.naam);
    printf("srq(3+2: %d \n ", sqr(3+2));
    printf("SQUARE(3+2): %d  \n",SQUARE(3+2));
    cout << ++x + x++;
    return 0;
}
int sqr(int x){
	return x * x;
}
