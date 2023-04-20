
#include <WiFi.h>
#include <FirebaseESP32.h>

#define WIFI_SSID "TOPNET_24B8" // your wifi SSID
#define WIFI_PASSWORD "jxffa6q1zh" //your wifi PASSWORD
#define FIREBASE_HOST "ijdid-ya-rabe7-default-rtdb.firebaseio.com/" // change here
#define FIREBASE_AUTH "v9H3OCthc3y6uHUZbI1lpXIlVTcDXkuWvsa3El2A"  // your private key
FirebaseData firebaseData;

FirebaseJson json;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

   WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("Connecting to Wi-Fi");
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(300);
  }
  Serial.println();
  Serial.print("Connected with IP: ");
  Serial.println(WiFi.localIP());
  Serial.println();

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  Firebase.reconnectWiFi(true);
  Serial.println("------------------------------------");
  Serial.println("Connected...");

  // Init SPI bus

}

void loop() {

  // put your main code here, to run repeatedly:

 
  if (Firebase.getString(firebaseData, "/Led1Status")) // read the value of the actuator 
  {
    String daata = firebaseData.stringData(); 
    Serial.println(daata);

    }
}
