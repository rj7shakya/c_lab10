#include<stdio.h>

int main(){
	char str[50];
	printf("Enter a string:");
	scanf("%s",str);

	FILE *fp;
	fp = fopen("record.txt","w");
	int i = 0;
	char ch;
	while(str[i] != '\0'){
		ch = str[i];
		fputc(ch,fp);
		i++;
	}

	fclose(fp);
	fp = fopen("record.txt","r");

	while(1){
		ch = fgetc(fp);
		if(ch == EOF){
			break;
		}
		putchar(ch);
	}

	return 0;
}