#include<stdio.h>

//__attribute__((constructor))void foo()
__attribute__((destructor))void bark()
{
	//printf("Hello\n");
	printf("After main\n");
}

int main(){
	printf("In main..\n");
}
