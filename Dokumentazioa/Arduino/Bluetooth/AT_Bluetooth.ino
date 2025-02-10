#include <SoftwareSerial.h>

SoftwareSerial Bluetooth(0, 1); // RX, TX (puedes cambiar los pines si usaste otros)

void setup() {
  Serial.begin(9600);         // Comunicación con el monitor serial
  Bluetooth.begin(38400);     // Velocidad predeterminada del módulo en modo AT
  Serial.println("Modo AT listo. Escribe comandos:");
}

void loop() {
  // Enviar datos desde el monitor serial al módulo Bluetooth
  if (Serial.available()) {
    Bluetooth.write(Serial.read());
  }

  // Enviar datos desde el módulo Bluetooth al monitor serial
  if (Bluetooth.available()) {
    Serial.write(Bluetooth.read());
  }
}
