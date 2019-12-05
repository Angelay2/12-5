#include<stdio.h>
#include<stdlib.h>
//取每一位的n次方
int main(){
	int i, j, sum = 0;
	int n = 1;
	int flag = 10;

	for (i = 0; i < 100000000; i++){
		if (i == flag){
			n++;
			flag *= 10;
		}
		for (j = i; j; j /= 10){
			sum += pow(j % 10, n);
	//关键判断n的值,几位数意味着n为几,每当是10的次方数时,n会变
		}if (sum == i){

			printf("%d\n", i);
		}sum = 0;
	}
	system("pause");
	return 0;
}