#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char** argv) {
	int a,i;
	int p==100;
/*a for total amounts of details; i for counts; p stands for pass*/
	scanf("%d\n",&a);
	int score[a];
	int pass[a]
	for(i==0;i<a;i++){/*input scores in score[]*/
		scanf("%d",&score[i]);
	}
	for(i==0;i<a;i++){
		if(score[i]>=60){
			score[i]==pass[i];
		}
		else{
			100==pass[i];
		}
	}
	for(i==0;i<a;i++){
		if(pass[i]>=60){
			if(pass[i]<p){
				pass[i]==p;
			}
		}
	}
	
	return 0;
	system("pause");
}