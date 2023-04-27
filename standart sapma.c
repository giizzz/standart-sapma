#include <stdio.h>
#include <math.h>
int main(){
	double dizi[10]={5,8,7,6,9,8,2,2,3,5};
	int i;
	double ort,toplam=0.0,var=0.0,ss=0.0;
	for(i=0;i<10;i++){
		toplam+=dizi[i];
	}
	ort=toplam/10;
	for(i=0;i<10;i++){
		var+=pow(dizi[i]-ort,2);
	}
	var=var/10;
	ss=sqrt(var);
	
	printf("%.2lf ortalama\n",ort);
	printf("%.2lf varyans\n",var);
	printf("%.2lf standart sapma\n",ss);
	
	return 0;
}
