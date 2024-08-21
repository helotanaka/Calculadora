// Heloísa Tanaka Fernandes - htf - 21/08/2024 18:20 - 19:00
// Opção 2 do complemento a 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void primeiro(int numero);

void segundo(int numero);

int main(void) {
  int escolha;
  float numero;
  printf("Digite o número da opção: \n1 - Base 10 para 2, 8, 16 e BCD\n2 - Base 10 para 16 com complemento a 2\n3 - Decimal para Float e Double\n");
  scanf("%d", &escolha);

  printf("\nDigite o numero para operação: \n");
  scanf("%f", &numero);
  
  if(escolha == 1){
    primeiro(numero);
  }else if (escolha == 2){
    segundo(numero);
  }
}

void primeiro(int numero){

  printf("\n1 OPÇÃO-----------\n\n");
  
  double resultado;
  int resto,  num = numero;
  char str1[1000] = "", str2[1000] = "";

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
  char str3[1000] = "", str4[1000] = "";
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
}

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
