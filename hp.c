#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  mpu.initialize();

  if (mpu.testConnection()) {
    Serial.println("MPU6050 connected successfully!");
  } else {
    Serial.println("MPU6050 connection failed!");
  }
}

void loop() {
  // Variables to store sensor data
  int16_t ax, ay, az;
  int16_t gx, gy, gz;

  // Read accelerometer and gyroscope values
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

  // Convert accelerometer values to g-force
  float accelX = ax / 16384.0;
  float accelY = ay / 16384.0;
  float accelZ = az / 16384.0;

  // Simple posture detection logic
  if (accelZ > 0.8 && accelY < 0.2) {
    Serial.println("Posture: Upright");
  } else if (accelY > 0.5) {
    Serial.println("Posture: Leaning Forward");
  } else if (accelY < -0.5) {
    Serial.println("Posture: Leaning Backward");
  } else {
    Serial.println("Posture: Unknown/Slouching");
  }

  delay(1000); // Delay for readability
}