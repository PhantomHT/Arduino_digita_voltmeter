 # 1 channel digital voltmeter
 # using analog inputs and basic conversion formula
 int input_pin= A0;
 float serial_voltage=0.00;
 void setup()
 {
 Serial.begin(9600);
 pinMode(input_pin, INPUT);
 }
 
 void loop()
 {
 serial_voltage=analogRead(input_pin*5.0)/1024.0;
 Serial.print("Voltage: ");
 Serial.println(serial_voltage);
 delay(100);

 }
 
