#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int i,n,P,S,x;
	int total, maxp;
	float maxv;
	scanf("%i",&S);
	scanf("%i",&P);
	int ar[P][2];
	total=0;
	for (x=0; x<P; x++){
		scanf("%i",&i);
		printf("%i:%i\n",x,i);
		ar[x][0]=i;
		ar[x][1]=0;
	}
	while(total<S){
		maxv=0;
		maxp=-1;
		for (x=0; x<P; x++){
			if(maxv<ar[x][0]/(1.0+ar[x][1])){
				maxv=ar[x][0]/(1.0+ar[x][1]);
				maxp=x;
			}
		}
		ar[maxp][1]++;
		total++;
	}
	for (x=0; x<P; x++){
		printf("%i\n",ar[x][1]);
	}
}
