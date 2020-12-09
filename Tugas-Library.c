#include <string.h>
char judul();
void awalan(){
    char a[16] = "Selamat Datang ";
    char b[100] = "Khusnul Qodir";
    strcat(a, b);
}
void main(){
    awalan();
    char a[20] = "40";
    char b[20] = "35";
    strcmp (a, b);
    judul();
}
char judul(){
    char a[20] = "Harta Tahta Dia";
    char b[20];
    strcpy(b, a);
return 0;
}
void wutever(){
	char a[100] = "I am the most handsome boy! xixixi";
	char b[100];
	b = strlen(a);
}
void main(){
	char nama [] = "Sayang mantan";
	char huruf = 'a';
	char* hasil;
	
	printf("Mencari huruf '%c' dalam nama... \n", huruf) ;
	hasil = strchr (nama, huruf);
	
	while(hasil != NULL) {
		printf("Ditemukan pada huruf ke -%d\n", hasil - nama+1);
		hasil = strchr(hasil+1, huruf);
	}