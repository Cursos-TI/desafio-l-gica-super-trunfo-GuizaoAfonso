#include <stdio.h>

int main(){
   int numeropt, carta;
   float area, pib, densidade, pibpercapita, SuperPoder;  //inserido o SuperPoder
   char codigo[10], nome[20], estado[5];
   long int populacao;   //modificado no nivel mestre

   int numeropt1, carta1;
   float area1, pib1, densidade1, pibpercapita1, SuperPoder1;  //inserido o SuperPoder
   char codigo1[10], nome1[20], estado1 [5];
   long int populacao1;   //modificado no nivel mestre

  //Usuário fará o cadastro da carta 1
   printf("Digite a letra A para representar o Estado: \n");
   scanf("%s", &estado);

   printf("Agora, utilize A01 para criar o código da cidade: \n");
   scanf("%s", &codigo);

   printf("Digite o nome da cidade: \n");
   scanf("%s", &nome);
   
   printf("Utilizando apenas números, digite quantos habitantes ela tem: \n");
   scanf("%ld", &populacao);

   printf("Digite a area total em km²: (ex: 1847.15) \n");
   scanf("%f", &area);

   printf("Digite o PIB da cidade: (ex: 800.34) \n");
   scanf("%f", &pib);

   printf("Digite o número de Pontos turísticos: \n");
   scanf("%d", &numeropt);

    

   // usuário faz o cadastro da carta 2
   printf("Ok, a primeira carta foi cadastrada com sucesso, agora vamos cadastrar a segunda carta com os mesmos procedimentos. Digite a letra B para representar o estado: \n");
   scanf("%s", &estado1);

   printf("Agora utilize B01 para criar o código da cidade: \n");
   scanf("%s", &codigo1);

   printf("Digite o nome da cidade: \n");
   scanf("%s", &nome1);
   
   printf("Utilizando apenas números, digite quantos habitantes ela tem: \n");
   scanf("%ld", &populacao1);

   printf("Digite a area total em km²: (ex: 1847.15) \n");
   scanf("%f", &area1);

   printf("Digite o PIB da cidade: (ex: 800.34) \n");
   scanf("%f", &pib1);

   printf("Digite o número de Pontos turísticos: \n");
   scanf("%d", &numeropt1);

   //acrescentado densidade e pib e feito o casting
   //adicionado a multiplicação por bilhao para conseguir contabilizar o pibpercapita
   densidade = (float)populacao/area;
   pibpercapita = (float)pib*1000000000/populacao;  
                                                
   densidade1 = (float)populacao1/area1;
   pibpercapita1 = (float)pib1*1000000000/populacao1;

   SuperPoder = (float)populacao + area + pib + numeropt + pibpercapita + 1/densidade;
   SuperPoder1 = (float)populacao1 + area1 + pib1 + numeropt1 + pibpercapita1 + 1/densidade1;

   
//representação de tudo que foi cadastrado, carta 1 e carta 2 junto.
   printf("Parabéns, suas cartas foram criadas com sucesso!\n \n");
   printf("Carta 1\n");
   printf("Estado: %s \n", estado);
   printf("Código: %s \n", codigo);
   printf("Nome da Cidade: %s \n", nome);
   printf("População: %ld \n", populacao);
   printf("Área: %.2f km² \n", area);
   printf("PIB: %.2f bilhoes de reais \n", pib);
   printf("Número de pontos turísticos: %d \n", numeropt);
   printf("Densidade populacional: %.2f hab/km² \n", densidade);   
   printf("PIB per Capita: %.2f reais \n \n", pibpercapita);


   printf("Carta 2\n");
   printf("Estado: %s \n", estado1);
   printf("Código: %s \n", codigo1);
   printf("Nome da Cidade: %s \n", nome1);
   printf("População: %ld \n", populacao1);
   printf("Área: %.2f km² \n", area1);
   printf("PIB: %.2f bilhoes de reais \n", pib1);
   printf("Número de pontos turísticos: %d \n", numeropt1);
   printf("Densidade populacional: %.2f hab/km² \n", densidade1);
   printf("PIB per Capita: %.2f reais \n \n", pibpercapita1);

   //comparação das cartas para exibir o resultado de qual carta venceu


   
   printf("Comparação de Cartas: (POPULAÇÃO)\n");
   printf("Carta 1 - %ld habitantes \n", populacao);
   printf("Carta 2 - %ld habitantes \n", populacao1);
   if (populacao > populacao1)
{  printf("Resultado: Carta 1 %s venceu\n", nome);
}else{printf("Resultado: Carta 2 %s venceu\n\n", nome1);
}
printf("Comparação de Cartas: (ÁREA)\n");
   printf("Carta 1 - %.2f km² \n", area);
   printf("Carta 2 - %.2f km² \n", area1);
   if (area > area1)
{  printf("Resultado: Carta 1 %s venceu\n", nome);
}else{printf("Resultado: Carta 2 %s venceu\n\n", nome1);
}
printf("Comparação de Cartas: (PIB)\n");
   printf("Carta 1 - %.2f bilhoes de reais \n", pib);
   printf("Carta 2 - %.2f bilhoes de reais \n", pib1);
   if (pib > pib1)
{  printf("Resultado: Carta 1 %s venceu\n", nome);
}else{printf("Resultado: Carta 2 %s venceu\n\n", nome1);
}
printf("Comparação de Cartas: (DENSIDADE POPULACIONAL)\n");
   printf("Carta 1 - %.2f hab/km² \n", densidade);
   printf("Carta 2 - %.2f hab/km² \n", densidade1);
   if (densidade < densidade1)
{  printf("Resultado: Carta 1 %s venceu\n", nome);
}else{printf("Resultado: Carta 2 %s venceu\n\n", nome1);
}
printf("Comparação de Cartas: (PIB PER CAPITA)\n");
printf("Carta 1 - %.2f reais \n", pibpercapita);
printf("Carta 2 - %.2f reais \n", pibpercapita1);
if (pibpercapita > pibpercapita1)
{  printf("Resultado: Carta 1 %s venceu\n", nome);
}else{printf("Resultado: Carta 2 %s venceu\n", nome1);
}  

   return 0;

}