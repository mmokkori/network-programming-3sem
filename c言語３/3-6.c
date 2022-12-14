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
	int left,right,p,n,i;
	float avg;
	struct gakusei ns_2nen[20];
	
	FILE *fp;
	fp=fopen("gakusei.txt","r");
	if(fp == NULL){
		fprintf(stderr, "File Error\n");
	return -1;
	}
	
	for( i = 0 ; i < 20 ; i++ ){
		fscanf(fp, "%d", &ns_2nen[i].gakuban);
		fscanf(fp, "%d", &ns_2nen[i].math);
		fscanf(fp, "%d", &ns_2nen[i].eng);
		fscanf(fp, "%d", &ns_2nen[i].phy);
		ns_2nen[i].heikin = (ns_2nen[i].math + ns_2nen[i].eng + ns_2nen[i].phy) / 3;
	}
	fclose(fp); 
	
	
	/*学番*/
	
	printf("Search Number?:");
	scanf("%d", &n);
	
	/*二分探索*/
	
	left=0;
	right=20;
	while(left<=right){
		p=(left+right)/2;
		
		if(ns_2nen[p].gakuban==n){
			break;
		}else if(ns_2nen[p].gakuban<n){
			left=p+1;
		}else if(ns_2nen[p].gakuban>n){
			right=p-1;
		}
		p=-1;
	}
	
	
	/*出力処理*/
	avg=0;
	if(p==-1){
		printf("Not Found");
		
	}else{
		
		printf("3教科平均　%4.1f",ns_2nen[p].heikin);
	}
	return 0;
}