//!/user/bin/c
/* Gauss-Seidel Method, 2002-10-05 NA1 */

#include <stdio.h>
#include <math.h>
#define error 0.0000000001							//収束判定の誤差

double c[10]={0,},d[10];
double a[10][10],b[10],z=0;
int i=0,j=0,v=0,x=1,s=1;
void inp(void){											//数値入力用の関数
	
	printf("正方行列の次数");
	scanf("%d",&v);
	for(i=0;i<v;i++){									//行列の表示
		for(j=0;j<v;j++){
			printf("a[%d][%d] ",i+1,j+1);
		}
		printf("   b[%d]\n",i+1);
	}
	
	for(i = 0;i<v;i++){
		for(j=0;j<v;j++){								//aの数値の入力
			printf("a[%d][%d]:",i+1,j+1);
			scanf("%lf",&a[i][j]);
		}
	}
	
	printf("右辺を入力\n");
	for(i=0;i<v;i++){									//bの数値の入力
		printf("b[%d]:",i+1);
		scanf("%lf",&b[i]);
	}
	/*for(i=0;i<v;i++){
		printf("x[%d]:",i+1);
		scanf("%lf",&c[i]);
	}*/
	printf("\n");
	for(i=0;i<v;i++){									//行列の表示
		for(j=0;j<v;j++){	
			printf("%d ",(int)a[i][j]);
		}
		printf(" %d\n",(int)b[i]);
	}
}	

void get(void)											//演算用の関数
{										
	for(i=0;i<v;i++){	
		z=0;
		for(j=0;j<v;j++){
			if(i != j){
				z+=(a[i][j]*c[j]);
			}
		}
		c[i]=(b[i]-z)/a[i][i];
	}
}

void conf(void)											//収束判定用の関数
{		
	for(i=0;i<v;i++){
		if(fabsf(c[i]-d[i]) <= error){
			x=x*1;
		}
		else x=0;
	}
	
}

void main(void)
{
		
	inp();													//行列の入力
	
	
	while(1){
	
		for(i=0;i<v;i++){								//1ループ前の数値の代入
			d[i]=c[i];
		}				
		
		get();												//連立一次の計算
		 
		 
		/*printf("round : %d ",s);					//結果の表示
		for(i=0;i<v;i++){
			printf("x%d:%12.10lf ",i+1,c[i]);
		}
		printf("\n");*/
		
		
		
										
		conf();
		if(x) break;										//収束判定
		x=1;
		
		s++;
		
		if(s >= 50) break;								//収束しなかった場合50回でループから抜ける
	}
	if(s < 50){	
		for(i=0;i<v;i++){
			printf("x%d:%12.10lf ",i+1,c[i]);
		}
		printf("\n");
	}
	else printf("収束しませんでした");

}

