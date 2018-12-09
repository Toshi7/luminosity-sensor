int led=2;
void setup()
{
    Serial.begin(115200);
    Serial.println("hello platformio!");
    pinMode(led, OUTPUT);
}

void loop()
{
    Serial.println("hello");
    delay(100);
    digitalWrite(led, HIGH);
    delay(100);
    digitalWrite(led, LOW);
    delay(100);
}
