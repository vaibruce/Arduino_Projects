#include <DHT.h>

// DHT11 sensor pin and type definition
#define DHTPIN 2         // DHT11 data pin connected to Arduino pin 2
#define DHTTYPE DHT22    // Define DHT type as DHT11
DHT dht(DHTPIN, DHTTYPE);

// Temperature threshold
const float temperatureThreshold = 30.0;  // Temperature threshold in Celsius

void setup() {
  Serial.begin(9600);        // Initialize Serial Monitor
  dht.begin();               // Start DHT sensor
  Serial.println("DHT11 Temperature Monitoring Started");
}

void loop() {
  // Read temperature in Celsius
  float temperature = dht.readTemperature();
  
  // Check if the reading failed
  if (isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  
  // Display temperature on Serial Monitor
  Serial.print("Current Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  // Check if temperature exceeds the threshold
  if (temperature > temperatureThreshold) {
    Serial.println("Warning: Temperature exceeds threshold!");
  }

  delay(2000);  // Wait 2 seconds before taking another reading
}
