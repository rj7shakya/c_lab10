#include<stdio.h>

struct Worker{
	char name[50];
	int age;
	float salary;
};

int main (){
	FILE *fp;
	struct Worker w;
	fp = fopen("data.dat","w");
	char ch;
	do{
		printf("Enter name age and salary:");
		scanf("%s%d%f",w.name,&w.age,&w.salary);
		fwrite(&w,sizeof(struct Worker),1,fp);
		printf("Any more?(y/n)");
		scanf(" %c",&ch);
	}while(ch != 'n');
	fclose(fp);

	fp = fopen("data.dat","r");
	int i = 0,n;
	printf("Enter the n value:");
	scanf("%d",&n);

	while(!feof(fp)){
		fread(&w,sizeof(struct Worker),1,fp);
		i++;
		if(i == n){
			printf("Worker %d details\n",n);
			printf("%s-%d-%.2f",w.name,w.age,w.salary);
		}
	}




	return 0;
}