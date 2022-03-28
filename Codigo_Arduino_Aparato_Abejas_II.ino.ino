#include "TM1637.h"
//#include <TimerOne.h>
#define CLK 35    
#define DIO 37
int input;
int contador;
int E_abrir_sacarosa = 0;
int E_cerrar_sacarosa = 0;
int E_fragancia = 0;
int E_ventilador = 0;
int E_led_sacarosa = 0;
int E_led_fragancia = 0;
int E_si_proboscis_sacarosa = 0;
int E_no_proboscis_sacarosa = 0;
int E_si_proboscis_fragancia = 0;
int E_no_proboscis_fragancia = 0;
int E_iniciar = 0;
int E_pausar = 0;
int E_reiniciar = 0;
int E_no_vive_abeja = 0;
TM1637 Display1(CLK,DIO);
char datos;
int digito1;
int digito2;
int digito3;
int digito4;
int testeo;
int inicio;
int8_t Digits[]={0x00,0x00,0x00,0x00};
String string="";




  
void setup (){
  pinMode(22, INPUT); //  Declaramos que utilizaremos el pin 22 como entrada E_abrir_sacarosa
  pinMode(24, INPUT); //  Declaramos que utilizaremos el pin 24 como entrada E_cerrar_sacarosa
  pinMode(26, INPUT); //  Declaramos que utilizaremos el pin 26 como entrada E_fragancia
  pinMode(28, INPUT); //  Declaramos que utilizaremos el pin 28 como entrada E_ventilador
  pinMode(30, INPUT); //  Declaramos que utilizaremos el pin 30 como entrada E_led_sacarosa
  pinMode(32, INPUT); //  Declaramos que utilizaremos el pin 32 como entrada E_led_fragancia
  pinMode(34, INPUT); //  Declaramos que utilizaremos el pin 34 como entrada E_si_proboscis_sacarosa
  pinMode(36, INPUT); //  Declaramos que utilizaremos el pin 36 como entrada E_no_proboscis_sacarosa
  pinMode(38, INPUT); //  Declaramos que utilizaremos el pin 38 como entrada E_si_proboscis_fragancia
  pinMode(40, INPUT); //  Declaramos que utilizaremos el pin 40 como entrada E_no_proboscis_fragancia
  pinMode(42, INPUT); //  Declaramos que utilizaremos el pin 42 como entrada E_iniciar
  pinMode(44, INPUT); //  Declaramos que utilizaremos el pin 44 como entrada E_pausar
  pinMode(46, INPUT); //  Declaramos que utilizaremos el pin 42 como entrada E_reiniciar 
  pinMode(48, INPUT); //  Declaramos que utilizaremos el pin 44 como entrada E_no_vive_abeja

  pinMode(23, OUTPUT); // Declaramos que utilizaremos el pin 23 como salida Motor DC
  pinMode(25, OUTPUT); // Declaramos que utilizaremos el pin 25 como salida Motor DC
  pinMode(27, OUTPUT); // Declaramos que utilizaremos el pin 27 como electrovalvula fragancia
  pinMode(29, OUTPUT); // Declaramos que utilizaremos el pin 29 como ventilador
  pinMode(31, OUTPUT); // Declaramos que utilizaremos el pin 31 como luz led sacarosa
  pinMode(33, OUTPUT); // Declaramos que utilizaremos el pin 33 como luz led fragancia
  pinMode(35, OUTPUT); // Declaramos que utilizaremos el pin 35 como display 7 segamentos
  pinMode(37, OUTPUT); // Declaramos que utilizaremos el pin 37 como display 7 segamentos
  pinMode(39, OUTPUT); // Declaramos que utilizaremos el pin 39 como buzzer

  Serial.begin(9600);
  //Serial.setTimeout(1);
  digitalWrite(23, LOW);
  digitalWrite(25, LOW);
  digitalWrite(27, LOW);
  digitalWrite(29, LOW);
  digitalWrite(31, LOW);
  digitalWrite(33, LOW);
  digitalWrite(35, LOW);
  digitalWrite(37, LOW);
  digitalWrite(39, LOW);
  contador=0;
  Display1.set();
  Display1.init() ;
  digito1=0;
  digito2=0;
  digito3=0;
  digito4=0;
  inicio=0;
  testeo=0;
  string.reserve(200);
}

void loop() {
E_abrir_sacarosa = digitalRead(22);
E_cerrar_sacarosa = digitalRead(24);
E_fragancia = digitalRead(26);
E_ventilador = digitalRead(28);
E_led_sacarosa = digitalRead(30);
E_led_fragancia = digitalRead(32);
E_si_proboscis_sacarosa = digitalRead(34);
E_no_proboscis_sacarosa = digitalRead(36);
E_si_proboscis_fragancia = digitalRead(38);
E_no_proboscis_fragancia = digitalRead(40);
E_iniciar = digitalRead(42);
E_pausar = digitalRead(44);
E_reiniciar = digitalRead(46);
E_no_vive_abeja = digitalRead(48);

lazo:

  if (Serial.available() > 0) {
    datos = Serial.read();
    
   if (datos == '-') {   
          //int8_t Digits[]={0x00,0x00,0x00,0x00}; 
          // Display1.display(Digits);
          digitalWrite(23, LOW);
          digitalWrite(25, LOW);
          digitalWrite(27, LOW);
          digitalWrite(29, LOW);
          digitalWrite(31, LOW);
          digitalWrite(33, LOW);
          digitalWrite(35, LOW);//Evaluar
          digitalWrite(37, LOW);//Evaluar
          digitalWrite(39, LOW);
          contador=0;       
       } else if (datos == 'a'){
          digitalWrite(25, LOW);
          digitalWrite(27, LOW);
          digitalWrite(29, LOW);
          digitalWrite(31, HIGH);
          digitalWrite(33, LOW);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(30);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }          
       } else if (datos == 'b'){
          digitalWrite(25, LOW);
          digitalWrite(27, LOW);
          digitalWrite(29, LOW);
          digitalWrite(31, HIGH);
          digitalWrite(33, LOW);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(50);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }            
        } else if (datos == 'c'){
          digitalWrite(25, LOW);
          digitalWrite(27, LOW);
          digitalWrite(29, LOW);
          digitalWrite(31, HIGH);
          digitalWrite(33, LOW);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(70);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }        
        } else if (datos == 'd'){
          digitalWrite(25, LOW);
          digitalWrite(27, LOW);
          digitalWrite(29, LOW);
          digitalWrite(31, HIGH);
          digitalWrite(33, LOW);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(90);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }         
       } else if (datos == 'e'){
          digitalWrite(25, LOW);
          digitalWrite(27, LOW);
          digitalWrite(29, LOW);
          digitalWrite(31, HIGH);
          digitalWrite(33, LOW);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(110);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW);
          }  
      } else if (datos == 'f'){
          digitalWrite(25, LOW);
          digitalWrite(27, LOW);
          digitalWrite(29, LOW);
          digitalWrite(31, HIGH);
          digitalWrite(33, LOW);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(130);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW);
          }
          
         } else if (datos == 'g'){
          digitalWrite(25, LOW);
          digitalWrite(27, LOW);
          digitalWrite(29, LOW);
          digitalWrite(31, HIGH);
          digitalWrite(33, LOW);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(150);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW);
          }       
          } else if (datos == 'h'){
          digitalWrite(23, LOW);
          digitalWrite(25, LOW);
          digitalWrite(27, HIGH);
          digitalWrite(29, LOW);
          digitalWrite(31, LOW);
          digitalWrite(33, HIGH);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          
          } else if (datos == 'i'){
          digitalWrite(25, LOW);
          digitalWrite(27, HIGH);
          digitalWrite(29, LOW);
          digitalWrite(31, HIGH);
          digitalWrite(33, HIGH);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          digitalWrite(23, HIGH);
          delay(30);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW);
          }  
          } else if (datos == 'j'){
          digitalWrite(25, LOW);
          digitalWrite(27, HIGH);
          digitalWrite(29, LOW);
          digitalWrite(31, HIGH);
          digitalWrite(33, HIGH);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(50);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }       
          } else if (datos == 'k'){
          digitalWrite(25, LOW);
          digitalWrite(27, HIGH);
          digitalWrite(29, LOW);
          digitalWrite(31, HIGH);
          digitalWrite(33, HIGH);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(70);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }       
           } else if (datos == 'l'){
          digitalWrite(25, LOW);
          digitalWrite(27, HIGH);
          digitalWrite(29, LOW);
          digitalWrite(31, HIGH);
          digitalWrite(33, HIGH);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(90);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }       
           } else if (datos == 'm'){
          digitalWrite(25, LOW);
          digitalWrite(27, HIGH);
          digitalWrite(29, LOW);
          digitalWrite(31, HIGH);
          digitalWrite(33, HIGH);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(110);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }       
          
         } else if (datos == 'n'){
          digitalWrite(25, LOW);
          digitalWrite(27, HIGH);
          digitalWrite(29, LOW);
          digitalWrite(31, HIGH);
          digitalWrite(33, HIGH);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(130);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }       
          
          } else if (datos == 'o'){
          digitalWrite(25, LOW);
          digitalWrite(27, HIGH);
          digitalWrite(29, LOW);
          digitalWrite(31, HIGH);
          digitalWrite(33, HIGH);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(150);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }       
          
          } else if (datos == 'p'){
          digitalWrite(25, LOW);
          digitalWrite(27, LOW);
          digitalWrite(29, HIGH);
          digitalWrite(31, LOW);
          digitalWrite(33, LOW);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
   
          } else if (datos == 'q'){
          digitalWrite(25, LOW);
          digitalWrite(27, LOW);
          digitalWrite(29, HIGH);
          digitalWrite(31, HIGH);
          digitalWrite(33, LOW);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(30);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }       
          
          } else if (datos == 'r'){
          digitalWrite(25, LOW);
          digitalWrite(27, LOW);
          digitalWrite(29, HIGH);
          digitalWrite(31, HIGH);
          digitalWrite(33, LOW);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(50);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }       
          
          } else if (datos == 's'){
          digitalWrite(25, LOW);
          digitalWrite(27, LOW);
          digitalWrite(29, HIGH);
          digitalWrite(31, HIGH);
          digitalWrite(33, LOW);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(70);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }       
          
          } else if (datos == 't'){
          digitalWrite(25, LOW);
          digitalWrite(27, LOW);
          digitalWrite(29, HIGH);
          digitalWrite(31, HIGH);
          digitalWrite(33, LOW);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(90);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }       

          } else if (datos == 'u'){
          digitalWrite(25, LOW);
          digitalWrite(27, LOW);
          digitalWrite(29, HIGH);
          digitalWrite(31, HIGH);
          digitalWrite(33, LOW);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(110);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }       
          
         } else if (datos == 'w'){
          digitalWrite(25, LOW);
          digitalWrite(27, LOW);
          digitalWrite(29, HIGH);
          digitalWrite(31, HIGH);
          digitalWrite(33, LOW);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(130);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }       
          
          } else if (datos == 'x'){
          digitalWrite(25, LOW);
          digitalWrite(27, LOW);
          digitalWrite(29, HIGH);
          digitalWrite(31, HIGH);
          digitalWrite(33, LOW);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(150);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }       
          
          } else if (datos == 'y'){
          digitalWrite(23, LOW);
          digitalWrite(25, LOW);
          digitalWrite(27, HIGH);
          digitalWrite(29, HIGH);
          digitalWrite(31, LOW);
          digitalWrite(33, HIGH);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          
          } else if (datos == 'z'){
          digitalWrite(25, LOW);
          digitalWrite(27, HIGH);
          digitalWrite(29, HIGH);
          digitalWrite(31, HIGH);
          digitalWrite(33, HIGH);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(30);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }      
          
          } else if (datos == 'A'){
          digitalWrite(25, LOW);
          digitalWrite(27, HIGH);
          digitalWrite(29, HIGH);
          digitalWrite(31, HIGH);
          digitalWrite(33, HIGH);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(50);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }      
          
          } else if (datos == 'B'){
          digitalWrite(25, LOW);
          digitalWrite(27, HIGH);
          digitalWrite(29, HIGH);
          digitalWrite(31, HIGH);
          digitalWrite(33, HIGH);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(70);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }     
          
         } else if (datos == 'C'){
          digitalWrite(25, LOW);
          digitalWrite(27, HIGH);
          digitalWrite(29, HIGH);
          digitalWrite(31, HIGH);
          digitalWrite(33, HIGH);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(90);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }      
    
          } else if (datos == 'D'){
          digitalWrite(25, LOW);
          digitalWrite(27, HIGH);
          digitalWrite(29, HIGH);
          digitalWrite(31, HIGH);
          digitalWrite(33, HIGH);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(110);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }     
          
          } else if (datos == 'E'){
          digitalWrite(25, LOW);
          digitalWrite(27, HIGH);
          digitalWrite(29, HIGH);
          digitalWrite(31, HIGH);
          digitalWrite(33, HIGH);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(130);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }      
          
          } else if (datos == 'F'){
          digitalWrite(25, LOW);
          digitalWrite(27, HIGH);
          digitalWrite(29, HIGH);
          digitalWrite(31, HIGH);
          digitalWrite(33, HIGH);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(150);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }      
          
          } else if (datos == 'G'){
          digitalWrite(23, LOW);
          digitalWrite(25, LOW);
          digitalWrite(27, LOW);
          digitalWrite(29, HIGH);
          digitalWrite(31, LOW);
          digitalWrite(33, LOW);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
 
          } else if (datos == 'H'){
          digitalWrite(23, LOW);
          digitalWrite(25, LOW);
          digitalWrite(27, HIGH);
          digitalWrite(29, LOW);
          digitalWrite(31, LOW);
          digitalWrite(33, HIGH);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          
          } else if (datos == 'I'){
          digitalWrite(23, LOW);
          digitalWrite(25, LOW);
          digitalWrite(27, HIGH);
          digitalWrite(29, HIGH);
          digitalWrite(31, LOW);
          digitalWrite(33, HIGH);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          
          } else if (datos == 'J'){
          digitalWrite(25, LOW);
          digitalWrite(27, LOW);
          digitalWrite(29, LOW);
          digitalWrite(31, HIGH);
          digitalWrite(33, LOW);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(30);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }      
          
          } else if (datos == 'K'){
          digitalWrite(25, LOW);
          digitalWrite(27, LOW);
          digitalWrite(29, HIGH);
          digitalWrite(31, HIGH);
          digitalWrite(33, LOW);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(30);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }      
          
          } else if (datos == 'L'){
          digitalWrite(25, LOW);
          digitalWrite(27, HIGH);
          digitalWrite(29, LOW);
          digitalWrite(31, HIGH);
          digitalWrite(33, HIGH);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(50);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          }      
          
          } else if (datos == 'M'){
          digitalWrite(25, LOW);
          digitalWrite(27, HIGH);
          digitalWrite(29, HIGH);
          digitalWrite(31, HIGH);
          digitalWrite(33, HIGH);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(39, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(30);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          } 
          }else if (datos == '<'){
         inicio=1;
         }else if (inicio==1 && (datos=='0' || datos=='1' || datos=='2' || datos=='3' || datos=='4' || datos=='5' || datos=='6' || datos=='7' || datos=='8' || datos=='9')){
         testeo=testeo+1;
           if (testeo==1){
            if (datos=='0'){
              digito1=0;
              }else if (datos=='1'){
              digito1=1;
              }else if (datos=='2'){
              digito1=2;
              }else if (datos=='3'){
              digito1=3;
              }else if (datos=='4'){
              digito1=4;
              }else if (datos=='5'){
              digito1=5;
              }else if (datos=='6'){
              digito1=6;
              }else if (datos=='7'){
              digito1=7;
              }else if (datos=='8'){
              digito1=8;
              }else if (datos=='9'){
              digito1=9;
              }    
           }
           if (testeo==2){
            if (datos=='0'){
              digito2=0;
              }else if (datos=='1'){
              digito2=1;
              }else if (datos=='2'){
              digito2=2;
              }else if (datos=='3'){
              digito2=3;
              }else if (datos=='4'){
              digito2=4;
              }else if (datos=='5'){
              digito2=5;
              }else if (datos=='6'){
              digito2=6;
              }else if (datos=='7'){
              digito2=7;
              }else if (datos=='8'){
              digito2=8;
              }else if (datos=='9'){
              digito2=9;
              }
           }
           if (testeo==3){
           if (datos=='0'){
              digito3=0;
              }else if (datos=='1'){
              digito3=1;
              }else if (datos=='2'){
              digito3=2;
              }else if (datos=='3'){
              digito3=3;
              }else if (datos=='4'){
              digito3=4;
              }else if (datos=='5'){
              digito3=5;
              }else if (datos=='6'){
              digito3=6;
              }else if (datos=='7'){
              digito3=7;
              }else if (datos=='8'){
              digito3=8;
              }else if (datos=='9'){
              digito3=9;
              }
           }
           if (testeo==4){
          if (datos=='0'){
              digito4=0;
              }else if (datos=='1'){
              digito4=1;
              }else if (datos=='2'){
              digito4=2;
              }else if (datos=='3'){
              digito4=3;
              }else if (datos=='4'){
              digito4=4;
              }else if (datos=='5'){
              digito4=5;
              }else if (datos=='6'){
              digito4=6;
              }else if (datos=='7'){
              digito4=7;
              }else if (datos=='8'){
              digito4=8;
              }else if (datos=='9'){
              digito4=9;
              }
          if (digito4==0 && digito3==0 && digito2==0 && digito1==0){
             Digits[0]=0;
             Digits[1]=0;
             Digits[2]=0;
             Digits[3]=0;
             Display1.display(Digits);
             digitalWrite(39, HIGH);
             delay(1000);
             digitalWrite(39, LOW); 
          }else {
          Digits[0]=digito4;
          Digits[1]=digito3;
          Digits[2]=digito2;
          Digits[3]=digito1;
          Display1.display(Digits);
          delay(800);    
          }}}    
         else if (datos== '>'){
          testeo=0; 
          inicio=0; 
       }
     //  goto manual;
}
         
                
         if (E_abrir_sacarosa == HIGH) {
          digitalWrite(23, LOW);
          if(contador<1){
          contador=contador+1;
          digitalWrite(25, HIGH);
          delay(1000);
          digitalWrite(25, LOW);
          }else {
          digitalWrite(23, LOW); 
          digitalWrite(25, LOW);
          contador=0;
          }}         

      if (E_cerrar_sacarosa == HIGH) {
          digitalWrite(25, LOW);
          digitalWrite(31, HIGH);
          if(contador<1){
          contador=contador+1;
          digitalWrite(23, HIGH);
          delay(1000);
          digitalWrite(23, LOW);
          }else {
          digitalWrite(23, LOW); 
          digitalWrite(25, LOW);
          digitalWrite(31, LOW);
          contador=0;
          }  }    

  if (E_abrir_sacarosa == HIGH && E_cerrar_sacarosa == HIGH) {
          digitalWrite(23, LOW);
          digitalWrite(25, LOW);
          digitalWrite(31, LOW);
          }
  
  if (E_fragancia == HIGH || datos == 'h' || datos == 'i' || datos == 'j'  || datos == 'k'|| datos== 'l' || datos == 'm' || datos == 'n' || datos== 'o' || datos == 'o' || datos == 'y' || datos == 'z' || datos == 'A' || datos == 'B' || datos == 'C' || datos == 'D' || datos == 'E' || datos == 'F' || datos == 'H' || datos == 'I' || datos == 'L' || datos == 'M'){    
          digitalWrite(27, HIGH);
          digitalWrite(33, HIGH);          
          } else {
          digitalWrite(27, LOW);
          digitalWrite(33, LOW);
          }

  if (E_ventilador  == HIGH || datos == 'p' || datos == 'q' || datos== 'r' || datos == 's' || datos == 't' || datos == 'u' || datos == 'w' || datos == 'x' || datos == 'y' || datos == 'z' || datos == 'A' || datos == 'B' || datos == 'C' || datos == 'D' || datos == 'E' || datos == 'F' || datos == 'G' || datos == 'I' || datos == 'K' || datos == 'M'){
          digitalWrite(29, HIGH);
          }  else {
          digitalWrite(29, LOW);
          }
          
  if (E_led_sacarosa == HIGH || datos =='a' || datos =='b' || datos =='c' || datos =='d' || datos =='e' || datos =='f' || datos =='g' || datos =='i' || datos =='j' || datos =='k' || datos =='l' || datos =='m' || datos =='n' || datos =='o' || datos =='q' || datos =='r' || datos =='s' || datos =='t' || datos =='u' || datos =='w' || datos =='x' || datos =='z' || datos =='A' || datos =='B' || datos =='C' || datos =='D' || datos =='E' || datos =='F' || datos =='J' || datos =='K' || datos =='L' || datos =='M') {
          digitalWrite(31, HIGH);
          } else {
          digitalWrite(31, LOW);
          }
          
  if (E_led_fragancia == HIGH){    
          digitalWrite(33, HIGH);
          } else {
          digitalWrite(33, LOW);
          }

//manual:

 if (E_no_vive_abeja == HIGH || E_pausar == HIGH ){
      //  digitalWrite(39, HIGH);
       //    }  else {
      //   digitalWrite(39, LOW);
       //    }      

  if (E_si_proboscis_sacarosa == HIGH ){
        // Serial.write('R');
          } 
  if (E_no_proboscis_sacarosa == HIGH ){
       //  Serial.write('S');
          }

  if (E_si_proboscis_fragancia == HIGH ){
      //   Serial.write('T');
          }

  if (E_no_proboscis_fragancia == HIGH ){
      //   Serial.write('W');
          }   

  if (E_iniciar == HIGH ){
       //  Serial.write('X');
          }            

  if (E_pausar == HIGH ){
      //   Serial.write('Y');
          } 

  if ( E_reiniciar == HIGH ){
      //   Serial.write('Z');
          } 
      }
      
  //    goto lazo;
      }
      
   
