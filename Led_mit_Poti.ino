void setup() {
  Serial.begin(9600);
  for (int i = 2; i < 11; i++) {
    pinMode(i, OUTPUT);
  }
  pinMode(11, INPUT);
}

int sensorwert = 0;


void loop() {
  zu_array(wie_viele(poti()));
}

int poti() {
  sensorwert = analogRead(10);
  return sensorwert;
}

int wie_viele(int poti_wert) {
  int wie_viele = 0;
  wie_viele = map(poti_wert, 0, 1023, 0, 10);
  return wie_viele;
}

void zu_array(int wie_viele){
  int led_array[10] = {0,0,0,0,0,0,0,0,0,0};

  for (int i = 0; i <= wie_viele; i++){
    led_array[i] = 1;
    Serial.println(led_array[4]);
  }
}
