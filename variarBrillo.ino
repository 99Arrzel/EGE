//Initializing LED Pin
int led_pin = 3; //Pin del led
void setup() {
  //Declaring LED pin as output
  pinMode(led_pin, OUTPUT); //Establece el pinmode con el pin y el mode, acá lo definimos como output(salida)
}
void loop() {
  //Fading the LED
  for(int i=0; i<255; i++){ //Ciclo desde 0 hasta 254
    analogWrite(led_pin, i); //Escribe el valor de i para led_pin(3 en este caso)
    delay(5);//Establece un delay para el cambio
  }
  //Acá abajo es lo mismo solo que el for está al revés, para apagarlo lentamente pues.
  for(int i=255; i>0; i--){
    analogWrite(led_pin, i);
    delay(5);
  }
}