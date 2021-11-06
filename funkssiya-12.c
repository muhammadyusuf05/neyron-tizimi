#include<stdio.h>
#include<math.h>

int main(){
int K=4, massiv[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

for(int i=K; i<13; i+=K){
     printf("massiv[%d]=",i);
     printf("%d\n",massiv[i]);
}


    return 0;
}