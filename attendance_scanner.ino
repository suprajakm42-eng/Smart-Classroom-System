// Smart Classroom Management System - Attendance Module
// This code scans a student's RFID ID card

int rfid_sensor_pin = 5; 

void setup() {
  Serial.begin(9600);
  Serial.println("System ON: Waiting for Student ID Card...");
}

void loop() {
  // Check if a student swiped their card
  if (cardDetected()) {
    String studentID = readCard();
    Serial.print("Attendance marked for ID: ");
    Serial.println(studentID);
  }
}
