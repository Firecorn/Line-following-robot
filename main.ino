void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A2,INPUT);
  pinMode(A4,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int right_ir = analogRead(A2);
  int left_ir = analogRead(A4); 
  delay(1000);
  Serial.println("Ir right_sensor = " + String(right_ir));
  Serial.println("Ir left_sensor = " + String(left_ir));
  if (right_ir>900 && left_ir>900){
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
  }
  if (right_ir<900 && left_ir>900){
    //digitalWrite(8,LOW);
    //digitalWrite(9,HIGH);
    //digitalWrite(11, HIGH);
   //digitalWrite(12,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(11, LOW);
    digitalWrite(12,LOW);
  }
  if (right_ir>900 && left_ir<900){
    //digitalWrite(8,HIGH);
    //digitalWrite(9,LOW);
    //digitalWrite(11, LOW);
    //digitalWrite(12,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(11, LOW);
    digitalWrite(12,LOW);
  }
    if (right_ir<200 && left_ir<200){
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(11, LOW);
    digitalWrite(12,LOW);
  }
}
