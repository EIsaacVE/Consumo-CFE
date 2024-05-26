#include<stdio.h>
int main(){
float consumo,total,precio;
int casos;
printf("Indique su consumo: ");
scanf("%f",&consumo);
printf("Su consumo es de %.0f KWH. ",consumo);
printf("\nSeleccione: 1:De 0Kwh a 280kwm, 2:De 281kwh a 500kwh, 3:501kwh en adelante.  ");
scanf("%d",&casos);
switch(casos)
{
case 1:
	if(consumo<=150)
     {
     	precio=0.721;
     	total=consumo*precio;
     	printf("El precio por %.0fkwh es de :$%.1f pesos.",consumo,total);
	 break;
	 }
	 else if(consumo>150 && consumo<=280)
	 {
	 	//precio=0.870;
	 	total=(150*0.721)+ (consumo-150)*0.870;
	    printf("El precio por %.0fkwh es de: $%.3f pesos.",consumo,total);
	 break;
	 }
	 
case 2:
    if(consumo>=281 && consumo<=500)
      {
		
		total=(150*0.721)+(100*1.205)+(consumo-250)*2.545;  
		printf("El precio por %.0fkwh es de: $%.1f pesos.",consumo,total);  
	  break;
     }
	  
case 3:
    if(consumo>500)
      {
		  total=(150*0.8652)+(100*1.8075)+(consumo-250)*5.09;
		  printf("El precio por %.0fkwh es de: $%.1f pesos.",consumo,total);
		  break;
	  }
default:
printf("La seleccion no fue correcta.");
}

return 0;
}
