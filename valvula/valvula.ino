/*
 *  Válvula solenoide 12 1/2"
 *  Taloselectronics
 *  soporte@taloselectronics.com Rafael Lozano Rolón
*/
#define RELE 2
const int TIEMPO_DE_LLENADO = 2000;
const int TIEMPO_ESPERA = 3000;

void setup()
{
    // put your setup code here, to run once:
    pinMode(RELE, OUTPUT);    //Define el pin RELE como salida
    digitalWrite(RELE, HIGH); //Rele inicia apagado
}

void loop()
{
    // put your main code here, to run repeatedly:
    digitalWrite(RELE, LOW);  //Enciende el rele
    delay(TIEMPO_DE_LLENADO); //Espera el tiempo de llenado
    digitalWrite(RELE, HIGH); //Apaga el rele
    delay(TIEMPO_ESPERA);     //Tiempo de espera antes de repetir el proceso
}