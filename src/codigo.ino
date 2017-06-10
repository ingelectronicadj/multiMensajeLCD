/*
 ***********************************************************************
 *              LIBRERIAS y CONSTANTES
 ***********************************************************************
 */
 /***** INICIO LCD ******/
 #include <LiquidCrystal.h>
 LiquidCrystal lcd(12, 11, 10, 9, 8, 7); // LiquidCrystal(rs, enable, d4, d5, d6, d7)
 /***** FIN LCD ******/

 /*
 ***********************************************************************
 *              SETUP CONFIGURACIÓN INICIAL
 ***********************************************************************
 */
 void setup() {
   configurarMonitorSerial();
 }

 /****** INICIO FUNCIONES ADICIONALES AL SETUP******/
 void configurarMonitorSerial() {
   Serial.begin(9600);
   Serial.println("Iniciando...");
 }

 /*
 ***********************************************************************
 *              LOOP BUCLE PRINCIPAL
 ***********************************************************************
 */
void loop() {

}
