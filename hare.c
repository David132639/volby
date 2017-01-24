#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int i,n,P,S,x;
	int total, quota, maxp;
	float maxv;
	scanf("%i",&S);
	scanf("%i",&P);
	int ar[P][3];
	float arf[P];
	total=0;
	for (x=0; x<P; x++){
		scanf("%i",&i);
		printf("%i:%i\n",x,i);
		ar[x][0]=i;
		total+=i;
	}
	quota=total/S;
	printf("quota:%i\n",quota);
	total=0;
	for (x=0; x<P; x++){
		i=ar[x][0]/quota;
		ar[x][1]=i;
		total+=i;
		arf[x]=ar[x][0]/(float)quota-(float)i;
		ar[x][2]=0;
	}
	while(total<S){
		maxv=0;
		maxp=-1;
		for (x=0; x<P; x++){
			if(maxv<arf[x]&&ar[x][2]==0){
				maxv=arf[x];
				maxp=x;
			}
		}
		ar[maxp][2]=1;
		total+=1;
	}
	for (x=0; x<P; x++){
		printf("%i\n",ar[x][1]+ar[x][2]);
	}
}
