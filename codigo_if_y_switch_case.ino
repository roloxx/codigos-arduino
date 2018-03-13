const int ledverde=12;// ledverde va conectado al pin 12
const int ledrojo=9;// led rojo va conectado al pin 9
const int ledamarillo=6;// led amarillo va conectado al pin 6
const int boton=2;// boton va conectado al pin 2
bool lectura;// 

int pulsador=0; //numero de veces pulsado

void setup() {

   pinMode(boton,INPUT); //entradas y salidas de los sensores
   pinMode(ledverde,OUTPUT);
   pinMode(ledrojo,OUTPUT);
   pinMode(ledamarillo,OUTPUT);

   Serial.begin(9600);//se inicia en el setup y el println en el loop
}

void loop() {

  lectura = digitalRead(boton);

    if (lectura==HIGH){
      
    pulsador=pulsador+1;//aumenta 1 a la cuenta de la variable (+1=++)
    delay (200);
  }
    if (pulsador==4){ //cuando se llega a 4 se reinicia la cuenta a 0
     pulsador=0;
     
    }
       
        
    
    Serial.println(pulsador);//escribe los valores de la variable
       
    switch (pulsador) {//se pone la variable 
      case 0 : 
        digitalWrite(ledverde,LOW);//se escriben los valores de cada led en cada caso//
        digitalWrite(ledrojo,LOW);
        digitalWrite(ledamarillo,LOW);
        break;         
       
    case 1 : digitalWrite(ledverde,HIGH);
             break;

    case 2 : digitalWrite(ledrojo,HIGH);
             break;
             
    case 3 : digitalWrite(ledamarillo,HIGH);
             break;
    }

    

}
    

      
