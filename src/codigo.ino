/*
 ***********************************************************************
 *              LIBRERIAS y CONSTANTES
 ***********************************************************************
 */

/***** INICIO LCD ******/
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 10, 9, 8, 7); // LiquidCrystal(rs, enable, d4, d5, d6, d7)
/***** FIN LCD ******/




/****** INICIO FUNCIONES ADICIONALES AL SETUP******/
void configurarMonitorSerial() {
  Serial.begin(9600);
  Serial.println("Iniciando...");
}

void configurarLCD() {
  lcd.begin(16, 2);
}


void mensajeBienvenida() {
  char *mensaje1 = (char*) "          Bienvenido          ";
  char *mensaje2 = (char*) "      Inserte una moneda      ";
  mostrarMensajesAutoscroll(mensaje1, mensaje2);
}

/* Funcion para mostrar mensaje autoScroll en 2 filas */
void mostrarMensajesAutoscroll(char *mensaje, char *mensaje2) {
  //El mensaje1 y el mensaje 2 deben ser del mismo tamaño
  const int tamannoOp = strlen(mensaje2) - 1;
  int ancho = 19; //El número de columnas del LCD son 20 menos 1 = 19
  int barrido = 0;

  while (barrido <= tamannoOp - ancho) {
    for (int positionCounter = barrido; positionCounter <= ancho + barrido;
        positionCounter++) {
      lcd.setCursor(positionCounter - barrido, 0);
      lcd.print(String(mensaje[positionCounter]));
      lcd.setCursor(positionCounter - barrido, 1);
      lcd.print(String(mensaje2[positionCounter]));
    }
    barrido++;
    delay(500);
    lcd.clear();
  }
}


/****** FIN FUNCIONES ADICIONALES AL SETUP******/

/*
 ***********************************************************************
 *              SETUP CONFIGURACIÓN INICIAL
 ***********************************************************************
 */
 void setup() {
  configurarMonitorSerial();
  configurarLCD();

}

/*
 ***********************************************************************
 *              LOOP BUCLE PRINCIPAL
 ***********************************************************************
 */
void loop() {
  mensajeBienvenida();

}
