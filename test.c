#include<stdio.h>
#include<stdlib.h>
//ȡÿһλ��n�η�
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
	//�ؼ��ж�n��ֵ,��λ����ζ��nΪ��,ÿ����10�Ĵη���ʱ,n���
		}if (sum == i){

			printf("%d\n", i);
		}sum = 0;
	}
	system("pause");
	return 0;
}