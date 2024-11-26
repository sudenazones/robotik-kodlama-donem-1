// C++ code
//
int kirmizi=2;
int sari=3;
void setup()
{
  pinMode(kirmizi, OUTPUT);
  pinMode(sari,OUTPUT);
}

void loop()
{
  digitalWrite(sari, 1);
  digitalWrite(kirmizi, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(sari, 0);
  digitalWrite(kirmizi, 1);
  delay(1000); // Wait for 1000 millisecond(s)
}
