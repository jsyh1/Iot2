
/*
 * Proyecto: Control de LED mediante Bluetooth
 * Autor: Juan Camilo Velandia
 * Plataforma: Arduino UNO
 * Modulo: HC-05
 *
 * Comandos:
 * 1 = Encender LED verde
 * 2 = Encender LED rojo
 * 0 = Apagar ambos LED
 */

#include <SoftwareSerial.h>

// Comunicacion Bluetooth: RX, TX
SoftwareSerial Bluetooth(2, 3);

// Pines de los LED
const int LED_VERDE = 7;
const int LED_ROJO = 8;

void setup() {

  // Configurar los LED como salidas
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_ROJO, OUTPUT);

  // Iniciar comunicacion serial
  Serial.begin(9600);

  // Iniciar comunicacion con HC-05
  Bluetooth.begin(9600);

  // Estado inicial
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_ROJO, LOW);

  Serial.println("Sistema Bluetooth iniciado");
  Serial.println("1: LED verde");
  Serial.println("2: LED rojo");
  Serial.println("0: Apagar ambos");

  Bluetooth.println("Arduino conectado");
  Bluetooth.println("1: Verde | 2: Rojo | 0: Apagar");
}

void loop() {

  // Verificar si llego un comando Bluetooth
  if (Bluetooth.available() > 0) {

    char comando = Bluetooth.read();

    // Ignorar saltos de linea
    if (comando == '\n' || comando == '\r') {
      return;
    }

    Serial.print("Comando recibido: ");
    Serial.println(comando);

    switch (comando) {

      case '1':

        digitalWrite(LED_VERDE, HIGH);
        digitalWrite(LED_ROJO, LOW);

        Bluetooth.println("LED verde encendido");
        Serial.println("LED verde encendido");

        break;

      case '2':

        digitalWrite(LED_VERDE, LOW);
        digitalWrite(LED_ROJO, HIGH);

        Bluetooth.println("LED rojo encendido");
        Serial.println("LED rojo encendido");

        break;

      case '0':

        digitalWrite(LED_VERDE, LOW);
        digitalWrite(LED_ROJO, LOW);

        Bluetooth.println("Ambos LED apagados");
        Serial.println("Ambos LED apagados");

        break;

      default:

        Bluetooth.println("Comando no valido");
        Serial.println("Comando no valido");

        break;
    }
  }
}
