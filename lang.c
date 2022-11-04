#include <stdio.h>
#include <math.h>

char c = 0;
int i = 0;

void in(void){
	FILE *stream = fopen("text.txt","w");

	printf("英文の入力");
	while(1){
		scanf("%c",&c);
		if(c == '\n') break;
		if(c >= 0x42 && c <= 0x5a){
			fprintf(stream, "%c",c);
		}
		else if(c >= 0x61 && c <= 0x7a){
			fprintf(stream, "%c",c);
		}
		else if(c == 0x20 ){
			fprintf(stream, "%c",c);
		}
		else if(c == 0x09){// タブを改行としてはんだんする
			fprintf(stream, "\n");
		}
		else{
			fprintf(stream, " ");
		}
	}
}
void main(void){
	in();
	
}
