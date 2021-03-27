#include <Fuzzy.h>
#include <Arduino.h>
#include <Wire.h>

#include <BMP180I2C.h>

#define I2C_ADDRESS 0x77

//create an BMP180 object using the I2C interface
BMP180I2C bmp180(I2C_ADDRESS);


//DHT11
#include "DHT.h"
#define DHTPIN 3     // Digital pin connected to the DHT sensor
// Uncomment whatever type you're using!
#define DHTTYPE DHT11   // DHT 11
DHT dht(DHTPIN, DHTTYPE);


Fuzzy *fuzzy = new Fuzzy();


  //Suhu
  FuzzySet *D = new FuzzySet(0, 0, 17, 22);//Dingiun
  FuzzySet *N = new FuzzySet(21, 23, 25, 27);//Normal
  FuzzySet *P = new FuzzySet(26, 30, 38, 50);//Panas

  //Kelembapan
  FuzzySet *RK = new FuzzySet(20, 20, 55, 65);
  FuzzySet *Se = new FuzzySet(60, 70, 75, 80);
  FuzzySet *T = new FuzzySet(75, 85, 90, 90);

  //Tekanan Udara
  FuzzySet *RT = new FuzzySet(900, 900, 950, 975);
  FuzzySet *S = new FuzzySet(960, 980, 1000, 1011);
  FuzzySet *Ti = new FuzzySet(1003, 1050, 1100, 1100);


  //Output
  //Motor
  FuzzySet *Normal = new FuzzySet(50, 80, 100, 150); 
  FuzzySet *Cepat = new FuzzySet(130, 180, 255, 255); 

//-------------  PANGGIL TAB LAIN -------------

#include "fuzziSet.h"
#include "fuzzi3.h"
#include "percabangan.h"
void setup() {
Serial.begin(115200);
 //wait for serial connection to open (only necessary on some boards)
  while (!Serial);

  Wire.begin();

  //begin() initializes the interface, checks the sensor ID and reads the calibration parameters.  
  if (!bmp180.begin())
  {
    Serial.println("begin() failed. check your BMP180 Interface and I2C Address.");
    while (1);
  }

  //reset sensor to default parameters.
 // bmp180.resetToDefaults();

  //enable ultra high resolution mode for pressure measurements
  bmp180.setSamplingMode(BMP180MI::MODE_UHR);
  //DHT11

  Serial.println(F("DHTxx test!"));
  dht.begin();

  fuzziSet ();
  fuzzi3 ();
    }
    
void loop() {

//int suhu = random(0, 50);//suhu 
//int kelembapan = random(20, 90);//kelembapan
//int tudara = random(900, 1100);//tekanan

//int suhu = 27;//suhu 
//int kelembapan = 79;//kelembapan
//int tudara = 936;//tekanan

  int tudara = (bmp180.getPressure())/100;
  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
    // Read temperature as Celsius (the default)
  int x = bmp180.getTemperature();
  int y = dht.readTemperature();
  int suhu = (x+y)/2;
  int kelembapan = dht.readHumidity();

  //output kelembapan udara dan suhu
   //start a temperature measurement
  if (!bmp180.measureTemperature())
  {
    Serial.println("could not start temperature measurement, is a measurement already running?");
    return;
  }

  //wait for the measurement to finish. proceed as soon as hasValue() returned true. 
  do
  {
    delay(100);
  } while (!bmp180.hasValue());

  //Serial.print("Temperature: "); 
 // Serial.print(suhu); 
  //Serial.println(" °C");
  Serial.print(F("Suhu: "));
  Serial.print(suhu);
  Serial.print(F("°C  Kelembapan: "));
  Serial.print(kelembapan);
  Serial.print(F("% "));


   
    //start a pressure measurement. pressure measurements depend on temperature measurement, you should only start a pressure 
  //measurement immediately after a temperature measurement. 
  if (!bmp180.measurePressure())
  {
    Serial.println("could not start perssure measurement, is a measurement already running?");
    return;
  }

  //wait for the measurement to finish. proceed as soon as hasValue() returned true. 
  do
  {
    delay(100);
  } while (!bmp180.hasValue());
  Serial.print("Tekanan Udara: "); 
  Serial.print(tudara);
  Serial.print(" Hpa");


    // Check if any reads failed and exit early (to try again).
  if (isnan(suhu) || isnan(kelembapan))  {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  delay(2000);

  Serial.println("\n\n\nEntrace: ");
  Serial.print("\t\t\tSuhu : ");
  Serial.print(suhu);
  Serial.print(", dan Kelembapan: ");
  Serial.print(kelembapan);
  Serial.print(",dan Tekanan Udara: ");
  Serial.println(tudara);

    fuzzy->setInput(1, suhu);
    fuzzy->setInput(2, kelembapan);
    fuzzy->setInput(3, tudara);

    fuzzy->fuzzify();

  Serial.println("Input: ");

  Serial.print("\tDistance: Dingin-> ");
  Serial.print(D->getPertinence());
  Serial.print(", Normal-> ");
  Serial.print(N->getPertinence());
  Serial.print(", Panas-> ");
  Serial.println(P->getPertinence());

  Serial.print("\tDistance: Rendah-> ");
  Serial.print(RK->getPertinence());
  Serial.print(", Sedang-> ");
  Serial.print(Se->getPertinence());
  Serial.print(", Tinggi-> ");
  Serial.println(T->getPertinence());

  Serial.print("\tDistance: Rendah-> ");
  Serial.print(RT->getPertinence());
  Serial.print(", Sedang-> ");
  Serial.print(S->getPertinence());
  Serial.print(", Tinggi-> ");
  Serial.println(Ti->getPertinence());

  float output1 = fuzzy->defuzzify(1);

  Serial.println("Output: ");
  Serial.print("\t\tMotor: Normal-> ");
  Serial.print(Normal->getPertinence());
  Serial.print(",  Cepat-> ");
  Serial.print(Cepat->getPertinence());
  Serial.println("");

  Serial.println("Result: ");
  Serial.print("\t\t\tMotor: ");
  Serial.print(output1);
  Serial.println();

  
  percabangan ();
  delay(5000);
    }
