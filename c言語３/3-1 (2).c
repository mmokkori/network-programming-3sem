#include <stdio.h>
struct gakusei{
	int gakuban;
	int math;
	int eng;
	int phy;
	float heikin;
	
};
int main(void)
{
	struct gakusei ns_2nen[3];
	
	int i;
	double abg;
	
	for(i=0;i<=2;i++){
		printf("学生番号:\n");
		scanf("%d",&ns_2nen[i].gakuban);
		printf("数学:\n");
		scanf("%d",&ns_2nen[i].math);
		printf("英語:\n");
		scanf("%d",&ns_2nen[i].eng);
		printf("物理:\n");
		scanf("%d",&ns_2nen[i].phy);
		ns_2nen[i].heikin=((float)ns_2nen[i].math+(float)ns_2nen[i].eng+(float)ns_2nen[i].phy)/3;
	}
	for(i=0;i<=2;i++){
		printf("学生番号:%d \t 平均:%4.1f\n",ns_2nen[i].gakuban,ns_2nen[i].heikin);
	}
	return 0;
	
}