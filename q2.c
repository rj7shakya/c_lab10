#include<stdio.h>

struct Airline{
	char name[50];
	char type[50];
	char na;
	char country[50];
};

int main(){
	int n,i;
	struct Airline a;
	FILE *fp;
	fp = fopen("AIRLINES.DAT","w");
	printf("Enter the number of data:");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("Enter airlines name,type, number, country");
		scanf("%s%s%d%s",a.name,a.type,&a.na,a.country);
		fwrite(&a,sizeof(struct Airline),1,fp);
	}
	printf("File Written!!");
	fclose(fp);

	fp = fopen("AIRLINES.DAT","r");
	printf("Contents of file:\n");
	printf("name, type, number, country");

	for(i=0;i<n;i++){
		fread(&a,sizeof(struct Airline),1,fp);
		printf("%s %s %d %s",a.name,a.type,a.na,a.country);
	}


	return 0;
}