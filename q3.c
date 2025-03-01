#include<stdio.h>

int main(){
	FILE *fp1,*fp2;
	fp1 = fopen("even.txt","w");
	fp2 = fopen("odd.txt","w");
	char ch;
	int n;
	do{
		printf("Enter a number");
		scanf("%d",&n);
		if(n%2 == 0){
			fprintf(fp1,"%d ",n);
		}else{
			fprintf(fp2,"%d ",n);
		}
		printf("Any more?(y/n)");
		scanf(" %c",&ch);
	}while(ch !='n');


	return 0;
}