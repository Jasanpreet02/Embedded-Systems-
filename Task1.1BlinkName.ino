const int ledPin = LED_BUILTIN; 

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  blink_Jasan(); // Calling the modular function to blink name
  delay(2000);  // Wait before repeating again
}

// Modular function to blink "Jasan" in Morse code
void blink_Jasan() {
  // J: .---
  dot(); dash(); dash(); dash();  lettersPause();

  // A: .-
  dot(); dash();  lettersPause();

  // S: ...
  dot(); dot(); dot();  lettersPause();

  // A: .-
  dot(); dash();  lettersPause();

  // N: -.
  dash(); dot();  lettersPause();
}

void dot() {
  digitalWrite(ledPin, HIGH);
  delay(200); // LED on for dot
  digitalWrite(ledPin, LOW);
  delay(200); // Gap between symbols
}

// Dash function
void dash() {
  digitalWrite(ledPin, HIGH);
  delay(600); // LED on for dash
  digitalWrite(ledPin, LOW);
  delay(200); // Gap between symbols
}

// Pause between letters
void lettersPause() {
  delay(600); // Longer gap between letters
}




