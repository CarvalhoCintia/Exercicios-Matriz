/*desenvolva um programa que leia o nome e o salário de 5 pessoas, depois leia um valor de índice percentual (%) de reajuste do salário.
 calcule e apresente na tela, o valor do novo salário e o nome das 5 pessoas.*/
 #include<stdio.h>
 #include<locale.h>
 int main(){
 	setlocale(LC_ALL,"");
 	char nomes[5][20];
 	float salarios[5];
 	float percentual;
 	int i;
 	
 	//Entrada
 	printf("Digite os nomes dos 5 funcionários:");
 	for( i = 0; i < 5 ; i++){
 		scanf("%s",nomes[i]);
	 }
	 printf("Digite os 5 salários respectivamente:\n");
	 for(i = 0;i < 5; i++){
	 	do{
	 	scanf("%f",&salarios[i]);
	 }while(salarios[i]< 0 || salarios[i]> 1000000);
 }
 	printf("Digite percentual(%%) de Reajuste:\n");
 	do{
 		scanf("%f",&percentual);
	 }while(percentual< 0 || percentual> 1000000);
 //Processamento e Saída
 	 for(i = 0;i < 5; i++){
 	 	salarios[i] = salarios[i] * percentual / 100 + salarios[i];
 	 	printf("%s novo Salário R$%.2f\n",nomes[i],salarios[i]);
		  } 	 	
}
