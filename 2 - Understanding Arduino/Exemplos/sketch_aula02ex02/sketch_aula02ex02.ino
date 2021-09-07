
// Experimento 2 - Aula 3 - SENSOR PIR (PRESENÇA)

// DECLARACAO DE NOSSO SENSOR DE PRESENCA E LED STATUS

int sensor = 2;
int Status = 13;

void setup() {
  pinMode(sensor, INPUT); // declarando sensor como input
  pinMode(Status, OUTPUT);  // declarando LED como output
  Serial.begin(9600);
}

// LOOP DE LEITURA DE SENSOR E DETECCAO DE MOVIMENTO

void loop(){
  long state = digitalRead(sensor);
  delay(1000);
    if(state == HIGH){
      digitalWrite (Status, HIGH);
      Serial.println("Movimento detectado!");
    }
    else {
      digitalWrite (Status, LOW);
      Serial.println("Sem movimentos!");
      }
}
