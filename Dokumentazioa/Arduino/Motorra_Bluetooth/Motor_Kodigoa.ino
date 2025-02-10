
const int motor = 3;
char val; 

void setup() {
  Serial.begin(9600);  // Inicializar comunicación serie (Bluetooth)
  pinMode(motor, OUTPUT);

void loop() {
  // Verificar si hay datos disponibles en el puerto serie (Bluetooth)
  if (Serial.available() > 0) {
    val = Serial.read();  // Leer el dato enviado desde App Inventor
    Serial.print("Dato recibido: ");
    Serial.println(val);  // Mostrar el dato recibido en el monitor serie
  }
  

  if (val == 'C') {
    Serial.println("Motor On");
    digitalWrite(motor, HIGH);
  } 

  if (val == 'D') {
    Serial.println("Motor Off");
    digitalWrite(motor, LOW);
  } 
  
  delay(500);  // Pequeño retardo para evitar sobrecargar el monitor serie
}
