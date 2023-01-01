// Experimento Aula 04 - Fotoresistor + buzzer
  
  # define VERDE 2
  # define AMARELO 3
  # define VERMELHO 4
  # define Buzzer 5
  # define Sensor A0

  void setup() {
      for (int i = 2; i < 6; i++)
        pinMode(i, OUTPUT);
  
      Serial.begin(9600);
    }

    void loop()
    {
      for (int i = 2; i < 6; i++)
        digitalWrite(i, LOW);
  
      status_Indicator();
    }

    void status_Indicator()
    {
  
      int sensor_In = analogRead(A0);
      Serial.println(sensor_In);
    
      if  ( sensor_In >=400 )
      {
        digitalWrite(VERMELHO, HIGH);
        digitalWrite(Buzzer,HIGH);
      }
      else if (sensor_In >=160 )
      {
        digitalWrite(AMARELO, HIGH);
      } else
      {
      digitalWrite(VERDE, HIGH);
      }
      delay(10);
    }
