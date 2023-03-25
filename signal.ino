#define LED_RED 14
#define LED_GREEN 13
#define LED_YELLOW 12

char SIGNAL[10];
char a[10];

void setup() {
  Serial.begin(9600);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);

  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_GREEN, LOW);
  digitalWrite(LED_YELLOW, LOW);
}


void loop() {


  digitalWrite(LED_RED, HIGH);
  // delay(1000);
  // digitalWrite(LED_RED, LOW);


  // digitalWrite(LED_GREEN, HIGH);
  // delay(1000);
  // digitalWrite(LED_GREEN, LOW);

  // digitalWrite(LED_YELLOW, HIGH);
  // delay(1000);
  // digitalWrite(LED_YELLOW, LOW);
   
}
