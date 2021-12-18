#include <Keypad.h>

const byte linhas = 4;
const byte colunas = 4;

const char Teclas_Matriz[linhas][colunas] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'},
};

const byte Pinos_Linhas[linhas] = {9,8,7,6};
const byte Pinos_Colunas[colunas] = {5,4,3,2};

Keypad teclado_personalizado = Keypad(makeKeymap(Teclas_Matriz), Pinos_Linhas, Pinos_Colunas, linhas, colunas);
void setup (){
  Serial.begin (9600);
}

void loop(){
  char leitura_teclas = teclado_personalizado.getKey();

    if(leitura_teclas){
      Serial.println(leitura_teclas);
    }
}
