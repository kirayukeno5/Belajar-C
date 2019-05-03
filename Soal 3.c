#include <stdio.h>
#include <conio.h>
//Mardonius Riel
//71180293
//soal 3

int main(){
	float pa, leb , tin, vob, ala, tinse, tinli, vobu, volim ;
	void a(int chs);
	printf("1. Balok");
	printf("2. Kubus");
	printf("3. Limas Segitiga");
	printf("4. Keluar");
	printf("pilihan anda :\n");
		scanf("%d", &a);

		do
	switch(a){
		case 1 : printf("== Mencari Volume Balok ==");
						printf("masukkan panjang : ");
							scanf("%d",&pa)
						printf("masukkan lebar : ");
							scanf("%d",&leb);
						printf("masukkan tinggi : ");
							scanf("%d",&tin);
							vob = pa * leb * tin
							printf("===================\n Volume balok : %d cm3", &vob);
					break;

		case 2 : printf("== Mencari Volume kubus ==");
						printf("masukkan sisi : \n");
							scanf("%d", &si);
							vobu = si * si *si
							printf("Volume kubus : %d", &vobu);
					break;

		case 3 : printf("Mencari Volume Limas Segitiga");
						printf("masukkan alas segitiga : \n");
							scanf("%d", &ala);
						printf("masukkan tinggi segitiga :\n");
							scanf("%d", &tinse);
						printf("masukkan Tinggi Limas : \n");
							scanf("%d", &tinli);
							luseg = 1/2 * ala * tinse
							volim = luseg * 1/3 * tinli
							printf("luas volume : %d ",volim );
					break;
		case 4 : printf("Keluar!");
					return 0;

		if (a>4){
			printf("anda salah input, silahkan ulangi!");
				switch(a);
		}
		else (a<1){
			printf("anda salah input, silahkan ulangi!\n");
				switch(a);	
		}
	}
	while(4)
	getch();
}