
float temp;
int tempdig;


void setup()
{
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop()
{
  delay(1000);
  tempdig = analogRead(A0);
  temp = map(tempdig, 0, 1023, 0, 93);
  Serial.println("TEMPERATURA:  ");
  Serial.println(temp);
  delay(1000);
}
