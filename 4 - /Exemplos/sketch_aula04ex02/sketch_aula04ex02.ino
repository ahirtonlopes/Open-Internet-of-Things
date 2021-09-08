// Aula 04 - Exemplo 2 - Leitura fotoresistor

int sensorValue = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  
  pinMode(9, OUTPUT);
}

void loop()
{
  sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  analogWrite(9, map(sensorValue, 0, 1023, 0, 255));
  delay(100); // delay por 100 milisegundos
}
