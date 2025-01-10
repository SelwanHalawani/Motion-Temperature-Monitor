// Define components
int pirPin = 3;         // PIR motion sensor connected to D7
int ledPin = 13;        // LED connected to D13
int tmpPin = A0;        // TMP temperature sensor connected to A0
int pirState = LOW;     // Initial state of the PIR sensor (no motion)
int motionDetected = 0; // Variable to track motion (0 = no motion, 1 = motion)
float lastTemperature = -100.0; // Stores the last temperature (initialized to an invalid value)

// Setup function
void setup() {
  pinMode(pirPin, INPUT);  // PIR sensor as input
  pinMode(ledPin, OUTPUT); // LED as output
  Serial.begin(9600);      // Initialize serial communication
}

// Main loop
void loop() {
  // Read PIR motion sensor
  motionDetected = digitalRead(pirPin);

  if (motionDetected == HIGH) { // If motion is detected
    digitalWrite(ledPin, HIGH); // Turn on the LED
    if (pirState == LOW) {      // If the PIR state has changed
      Serial.println("Motion detected"); // Print message
      pirState = HIGH;          // Update PIR state
    }
  } else { // If no motion is detected
    digitalWrite(ledPin, LOW); // Turn off the LED
    if (pirState == HIGH) {   // If the PIR state has changed
      Serial.println("No motion"); // Print message
      pirState = LOW;          // Update PIR state
    }
  }

  // Read temperature from TMP sensor
  int tmpValue = analogRead(tmpPin);  // Read analog value from TMP sensor
  float voltage = tmpValue * (5.0 / 1023.0);  // Convert value to voltage
  float currentTemperature = (voltage - 0.5) * 100;  // Convert voltage to Celsius

  // Check if temperature has changed
  if (abs(currentTemperature - lastTemperature) > 0.1) { // If temperature changes 
    Serial.print("Temperature: ");
    Serial.println(currentTemperature);  // Print the new temperature
    lastTemperature = currentTemperature; // Update the last temperature
  }

}