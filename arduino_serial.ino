int col_1 = 4;
int col_2 = 2;
int col_3 = 3;

int row_1 = 8;
int row_2 = 9;
int row_3 = 10;
int row_4 = 11;

void setup() {

  pinMode(col_1, OUTPUT);
  pinMode(col_2, OUTPUT);
  pinMode(col_3, OUTPUT);

  digitalWrite(col_1, HIGH);
  digitalWrite(col_2, HIGH);
  digitalWrite(col_3, HIGH);
  
  pinMode(row_1, INPUT_PULLUP);
  pinMode(row_2, INPUT_PULLUP);
  pinMode(row_3, INPUT_PULLUP);
  pinMode(row_4, INPUT_PULLUP);

Serial.begin(9600);
  
}

void loop() {

/* RIGHT COLUMN */

  digitalWrite(col_1, LOW);
  
  if (digitalRead(row_1) == LOW) {
    Serial.print("C");
    delay(200);
  }
  if (digitalRead(row_2) == LOW) {
    Serial.print("3");
    delay(200);
  }
  if (digitalRead(row_3) == LOW) {
    Serial.print("6");
    delay(200);
  }
  if (digitalRead(row_4) == LOW) {
    Serial.print("9");
    delay(200);
  }

  digitalWrite(col_1, HIGH);



/* CENTER COLUMN */

  digitalWrite(col_2, LOW);
  
  if (digitalRead(row_2) == LOW) {
    Serial.print("2");
    delay(200);
  }
  if (digitalRead(row_3) == LOW) {
    Serial.print("5");
    delay(200);
  }
  if (digitalRead(row_4) == LOW) {
    Serial.print("8");
    delay(200);
  }

  digitalWrite(col_2, HIGH);

/* LEFT COLUMN */

  digitalWrite(col_3, LOW);
  
  if (digitalRead(row_1) == LOW) {
    Serial.print("0");
    delay(200);
  }
  if (digitalRead(row_2) == LOW) {
    Serial.print("1");
    delay(200);
  }
  if (digitalRead(row_3) == LOW) {
    Serial.print("4");
    delay(200);
  }
  if (digitalRead(row_4) == LOW) {
    Serial.print("7");
    delay(200);
  }

  digitalWrite(col_3, HIGH);
  
}
