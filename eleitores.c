# include <stdio.h>
# include <stdlib.h>
int main (){
	int toteleitores,votosbranco,nulos,validos,p1,p2,p3;
	printf("Informe o numero total de eleitores do municipio");
	scanf("%d", &toteleitores);
	printf("Informe o numero de votos em branco");
	scanf("%d", &votosbranco);
	printf("Informe quantos votos foram nulos");
	scanf("%d", & nulos);
	printf("Informe o numero de votos validos");
	scanf("%d", &validos);
p1=(votosbranco*100)/toteleitores;
p2=(nulos*100)/toteleitores;
p3=(validos*100)/toteleitores;
printf("A porcentagem que votou branco foi:%d",p1);
printf("\n A porcentagem que votou nulo foi:%d",p2);
printf("\n A porcentagem que votou valido foi:%d",p3);
getch();
}
