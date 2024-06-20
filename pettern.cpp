#include<stdio.h>
int main(){
	int row=5;
	
for(int i=0; i<row; i++){
	for(int col=0; col<row;col++){
		if(col<i){
			printf(" ");
		}else{
			printf("*");
		}
	}printf("\n");
  }
}