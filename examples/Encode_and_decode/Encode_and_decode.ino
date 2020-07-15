#include <URLEncoding.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("============================\nURL Encode test");
  String raw = "Hello, world!";
  Serial.print("Original message: ");Serial.println(raw);
  String encoded = urlEncode(raw);
  Serial.print("Message encoded: ");Serial.println(encoded);
  String decoded = urlDecode(encoded);
  Serial.print("Message decoded: ");Serial.println(decoded);
}

void loop() {
  // put your main code here, to run repeatedly:
 
}