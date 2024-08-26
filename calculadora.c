// Heloísa Tanaka Fernandes - htf - 25/08/2024 16:42 
// Correção 3 da tranformação de double e float

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void primeiro(int numero);

void segundo(int numero);

void terceiro(double numero);

int main(void) {
  int escolha;
  float numero;
  printf("Digite o número da opção: \n1 - Base 10 para 2, 8, 16 e BCD\n2 - Base 10 para 16 com complemento a 2\n3 - Decimal para Float e Double\n");
  scanf("%d", &escolha);

  printf("\nDigite o numero para operação: \n");
  scanf("%f", &numero);

  if(escolha == 1){
    primeiro(numero);
  } else if (escolha == 2){
    segundo(numero);
  } else if (escolha == 3) {
    terceiro(numero);
  }
}

void primeiro(int numero){

  printf("\n1 OPÇÃO-----------\n\n");

  double resultado;
  int resto,  num = numero;
  char str1[64] = "", str2[64] = "";

//Base 2
  printf("\nBase 2: \n\n");
  while(1){

    resultado = num/2;
    resto = num%2;
    printf("%d / 2 = %.0f, resto = %d\n", num, resultado, resto);
    num = resultado;

    sprintf(str2, "%d", resto);
    strcat(str2, str1);
    strcpy(str1, str2);
    strcpy(str2, "");

    if (num <= 1) {
      sprintf(str2, "%d", num);
      strcat(str2, str1);
      strcpy(str1, str2);
      break;
    }
  }
  printf("Binário: %s\n\n", str1);

//Base 8

  num = numero;
  strcpy(str1, "");
  strcpy(str2, "");

  printf("Base 8: \n\n");
  while(1){

    resultado = num/8;
    resto = num%8;
    printf("%d / 8 = %.0f, resto = %d\n", num, resultado, resto);
    num = resultado;

    sprintf(str2, "%d", resto);
    strcat(str2, str1);
    strcpy(str1, str2);
    strcpy(str2, "");

    if (num <= 7) {
      sprintf(str2, "%d", num);
      strcat(str2, str1);
      strcpy(str1, str2);
      break;
    }
  }
  printf("Octal: %s\n\n", str1);

//Base 16

  num = numero;
  strcpy(str1, "");
  strcpy(str2, "");

  printf("Base 16: \n\n");
  while(1){

    resultado = num/16;
    resto = num%16;
    printf("%d / 16 = %.0f, resto = %d\n", num, resultado, resto);
      num = resultado;

    sprintf(str2, "%d", resto);
    strcat(str2, str1);
    strcpy(str1, str2);
    strcpy(str2, "");

    if (num <= 15) {
      sprintf(str2, "%d", num);
      strcat(str2, str1);
      strcpy(str1, str2);
      break;
    }
  }
  printf("Hexadecial: %s\n\n", str1);

//BCD
  num = numero;
  strcpy(str1, "");
  strcpy(str2, "");
  char str3[64] = "", str4[64] = "";
  int c = 0;

  printf("BCD: \n\n");

  while(1){
    c++;
    resto = num%10;
    switch (resto){
      case 0:
        if (c == 1){
          strcpy(str3, "0 = 0000.");
          strcpy(str2, "0000");
        } else {
          strcpy(str3, "0 = 0000, ");
          strcpy(str2, "0000 ");
        }
        strcat(str3, str4);
        strcpy(str4, str3);
        strcpy(str3, "");

        strcat(str2, str1);
        strcpy(str1, str2);
        strcpy(str2, "");
        break;

      case 1:
        if (c == 1){
          strcpy(str3, "1 = 0001.");
          strcpy(str2, "0001.");
        } else {
          strcpy(str3, "1 = 0001, ");
          strcpy(str2, "0001 ");
        }
        strcat(str3, str4);
        strcpy(str4, str3);
        strcpy(str3, "");

        strcat(str2, str1);
        strcpy(str1, str2);
        strcpy(str2, "");
        break;

      case 2:
        if (c == 1){
          strcpy(str3, "2 = 0010.");
          strcpy(str2, "0010.");
        } else {
          strcpy(str3, "2 = 0010, ");
          strcpy(str2, "0010 ");
        }
        strcat(str3, str4);
        strcpy(str4, str3);
        strcpy(str3, "");

        strcat(str2, str1);
        strcpy(str1, str2);
        strcpy(str2, "");
        break;

      case 3:
        if (c == 1){
          strcpy(str3, "3 = 0011.");
          strcpy(str2, "0011.");
        } else {
          strcpy(str3, "3 = 0011, ");
          strcpy(str2, "0011 ");
        }
        strcat(str3, str4);
        strcpy(str4, str3);
        strcpy(str3, "");

        strcat(str2, str1);
        strcpy(str1, str2);
        strcpy(str2, "");
        break;

      case 4:
        if (c == 1){
          strcpy(str3, "4 = 0100.");
          strcpy(str2, "0100.");
        } else {
          strcpy(str3, "4 = 0100, ");
          strcpy(str2, "0100 ");
        }
        strcat(str3, str4);
        strcpy(str4, str3);
        strcpy(str3, "");

        strcat(str2, str1);
        strcpy(str1, str2);
        strcpy(str2, "");
        break;

      case 5:
        if (c == 1){
          strcpy(str3, "5 = 0101.");
          strcpy(str2, "0101.");
        } else {
          strcpy(str3, "5 = 0101, ");
          strcpy(str2, "0101 ");
        }
        strcat(str3, str4);
        strcpy(str4, str3);
        strcpy(str3, "");

        strcat(str2, str1);
        strcpy(str1, str2);
        strcpy(str2, "");
        break;

      case 6:
        if (c == 1){
          strcpy(str3, "6 = 0110.");
          strcpy(str2, "0110.");
        } else {
          strcpy(str3, "6 = 0110, ");
          strcpy(str2, "0110 ");
        }
        strcat(str3, str4);
        strcpy(str4, str3);
        strcpy(str3, "");

        strcat(str2, str1);
        strcpy(str1, str2);
        strcpy(str2, "");
        break;

      case 7:
        if (c == 1){
          strcpy(str3, "7 = 0111.");
          strcpy(str2, "0111.");
        } else {
          strcpy(str3, "7 = 0111, ");
          strcpy(str2, "0111 ");
        }
        strcat(str3, str4);
        strcpy(str4, str3);
        strcpy(str3, "");

        strcat(str2, str1);
        strcpy(str1, str2);
        strcpy(str2, "");
        break;

      case 8:
        if (c == 1){
          strcpy(str3, "8 = 1000.");
          strcpy(str2, "1000.");
        } else {
          strcpy(str3, "8 = 1000, ");
          strcpy(str2, "1000 ");
        }
        strcat(str3, str4);
        strcpy(str4, str3);
        strcpy(str3, "");

        strcat(str2, str1);
        strcpy(str1, str2);
        strcpy(str2, "");
        break;

      case 9:
        if (c == 1){
          strcpy(str3, "9 = 1001.");
          strcpy(str2, "1001.");
        } else {
          strcpy(str3, "9 = 1001, ");
          strcpy(str2, "1001 ");
        }
        strcat(str3, str4);
        strcpy(str4, str3);
        strcpy(str3, "");

        strcat(str2, str1);
        strcpy(str1, str2);
        strcpy(str2, "");
        break;
    }
    if (num <= 9){
      break;
    }
    num = num/10;
  }

  printf("%s\n\n", str4);

  printf("BCD: %s\n\n", str1);
} //falta coisa com decimal

void segundo(int numero){

  printf("\n2 OPÇÃO-----------\n\n");

  double resultado;
  int resto,  num = numero;
  char str1[30] = "", str2[30] = "";

  printf("\nBase 2: \n\n");
  for (int i = 1; i <= 16; i++){

    if (num <= 1) {
      sprintf(str2, "%d", num);
      strcat(str2, str1);
      strcpy(str1, str2);
      num = 0;
    } else {
      resultado = num/2;
      resto = num%2;
      printf("%d / 2 = %.0f, resto = %d\n", num, resultado, resto);
      num = resultado;

      sprintf(str2, "%d", resto);
      strcat(str2, str1);
      strcpy(str1, str2);
      strcpy(str2, "");
    }
  }
  printf("\nBinário: %s\n", str1);

  num = atoi(str1);
  strcpy(str1, "");
  for (int i = 1; i <= 16; i++){
    resto = num%10;
    switch (resto){
      case 0:
        strcpy(str2, "1");
        strcat(str2, str1);
        strcpy(str1, str2);
        strcpy(str2, "");
        break;
      case 1:
        strcpy(str2, "0");
        strcat(str2, str1);
        strcpy(str1, str2);
        strcpy(str2, "");
        break;
    }
    num = num/10;
  }

  printf("\nComplemento a 1: %s\n", str1);
  printf("                 +              1");

  int flag = 1;
  for (int i = 15; i >= 0; i--){
    if (flag == 1) {
      if (str1[i] == '0') {
        str1[i] = '1';
        flag = 0;
      } else {
        str1[i] = '0';
      }
    }
  }

  printf("\nComplemento a 2: %s\n\n", str1);
} 

void terceiro(double numero) {
  printf("\n3 OPÇÃO-----------\n\n");

  double resultado;
  int resto, num, negativo = 0;
  char str1[64] = "", str2[64] = "";

  double parte_fracionaria, parte_inteira;
  int parte_inteira_int;

  if(numero < 0){
    negativo = 1;
    numero = numero * -1;
  }

  parte_fracionaria = modf(numero, &parte_inteira);

    num = (int) parte_inteira;

  printf("Parte inteira: %d\n", num);
  printf("Parte fracionária: %f\n\n", parte_fracionaria);

  while(1){

    resultado = num/2;
    resto = num%2;
    printf("%d / 2 = %.0f, resto = %d\n", num, resultado, resto);
    num = resultado;

    sprintf(str2, "%d", resto);
    strcat(str2, str1);
    strcpy(str1, str2);
    strcpy(str2, "");

    if (num <= 1) {
      sprintf(str2, "%d", num);
      strcat(str2, str1);
      strcpy(str1, str2);
      strcpy(str2, "");
      break;
    }
  }

  printf("\n");
  sprintf(str2, ".");
  strcat(str1, str2);
  strcpy(str2, "");

  char numero_flutuante[64];

  while(1){

    resultado = parte_fracionaria*2;
    printf("%f * 2 = %f\n", parte_fracionaria, resultado);
    parte_fracionaria = resultado;

    if(parte_fracionaria > 1.0){
      sprintf(str2, "1");
      strcat(str1, str2);
      strcpy(str2, "");
      parte_fracionaria = parte_fracionaria - 1;
    } else if (parte_fracionaria < 1.0){
      sprintf(str2, "0");
      strcat(str1, str2);
      strcpy(str2, "");
    } else {
      sprintf(str2, "1");
      strcat(str1, str2);
      strcpy(str2, "");
      break;
    }
  }
  printf("\nBinário: %s\n\n", str1);

  int flag = 1, cont = 0;
  char temp[1] = "";
  if (numero > 1.0) {
    for (int i = strlen(str1); flag == 1; i--) {
      if ((str1[i] == '.') && (i != 1)) {

        printf("%s\n", str1);
        strcpy(temp, &str1[i-1]);
        str1[i-1] = str1[i];
        str1[i] = temp[0];
        cont++;
      } else if (i == 1) {
        flag = 0;
      }
    }
    printf("\nPonto Flutuante: %s\n", str1);
    strcpy(numero_flutuante, str1);
    printf("Expoente: 2^%d\n\n", cont);
  } else {
    for (int i = 0; flag == 1; i++) {
      if ((str1[i] == '.') && (str1[i-1] == '0')) {

        printf("%s\n", str1);
        strcpy(temp, &str1[i+1]);
        str1[i+1] = str1[i];
        str1[i] = temp[0];
        cont--;
      } else if ((str1[i-1] == '1') && (i > 0)) {
        flag = 0;
      }
    }
    double temp = atof(str1);
    sprintf(str1, "%f", temp);
    printf("\nPonto Flutuante: %s\n", str1);
    strcpy(numero_flutuante, str1);
    printf("Expoente: 2^%d\n\n", cont);
  }

// PARTE DE FLOAT

  printf("FLOAT: \n");
  int expo = 0;
  expo = 127 + cont;
  printf("127 + %d = %d\n", cont, expo);
  strcpy(str1, "");
  strcpy(str2, "");


  while(1){
    resultado = expo/2;
      resto = expo%2;
      printf("%d / 2 = %.0f, resto = %d\n", expo, resultado, resto);
      expo = resultado;

      sprintf(str2, "%d", resto);
      strcat(str2, str1);
      strcpy(str1, str2);
      strcpy(str2, "");

      if (expo <= 1) {
        sprintf(str2, "%d", expo);
        strcat(str2, str1);
        strcpy(str1, str2);
        strcpy(str2, "");
        break;
      }

  }

  printf("\nBinário do expoente: %s\n", str1);

  char vintetresbits[23] = "00000000000000000000000";

  for (int i = 2; i < strlen(numero_flutuante); i++){
     vintetresbits[i-2] = numero_flutuante[i];
   }

  printf("\n%d %s %s\n", negativo, str1, vintetresbits);

  // PARTE DE DOUBLE

  printf("\nDOUBLE: \n");
  expo = 0;
  expo = 1023 + cont;
  printf("1023 + %d = %d\n", cont, expo);
  strcpy(str1, "");
  strcpy(str2, "");


  while(1){
    resultado = expo/2;
      resto = expo%2;
      printf("%d / 2 = %.0f, resto = %d\n", expo, resultado, resto);
      expo = resultado;

      sprintf(str2, "%d", resto);
      strcat(str2, str1);
      strcpy(str1, str2);
      strcpy(str2, "");

      if (expo <= 1) {
        sprintf(str2, "%d", expo);
        strcat(str2, str1);
        strcpy(str1, str2);
        strcpy(str2, "");
        break;
      }

  }

  printf("\nBinário do expoente: %s\n", str1);

  char sessentaequatrobits[52] = "0000000000000000000000000000000000000000000000000000";

  for (int i = 2; i < strlen(numero_flutuante); i++){
     sessentaequatrobits[i-2] = numero_flutuante[i];
   }

  printf("\n%d %s %s", negativo, str1, sessentaequatrobits);
}
