#include <stdio.h>
#include <stdlib.h>

void tambah(float nila[100], int *count){
	float data;
	print("nilai: ");scanf("%f",&data);
	*count=*count+1;
	nilai(*count)=data;
	printf("Data nilai berhasil dimasukkan")
}

void lihat(float nilai[100],int count){
	int i;
	for(i=0;<=count;i++){
		printf("nilai ke %d = %f\n",i+1,nilai[1])
	}
}
int main(){
	
	
	return 0;
}

