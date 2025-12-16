#include<stdio.h>

int main(){
	//6A
	int score;
	scanf("%d",&score);
	if (score >= 68) {
		if(score>100){
			printf("error");
		}
		else if(score>=85){
			printf("A");
		}
		else if(score>=75){
			printf("B");
		}
		else if(score>=68){
			printf("C %d",75-score);
		}

	} else {
		if(score<0){
			printf("error");
		}
		else if(score>=55){
			printf("D");
		}
		else{
			printf("F");
		}

	}
	
	
	
	return 0;
}
