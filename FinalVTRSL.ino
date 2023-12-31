
#include "Arduino.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

SoftwareSerial mySoftwareSerial(10, 11); // RX, TX
DFRobotDFPlayerMini myDFPlayer;
void printDetail(uint8_t type, int value);
float thumb=0;
float first_finger=0;
float second_finger=0;
float third_finger=0;
float fourth_finger=0;

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to

void setup()
{
   // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  Serial.begin(9600);

  mySoftwareSerial.begin(9600);
  Serial.begin(115200);
  
  Serial.println();
  Serial.println(F("DFRobot DFPlayer Mini Demo"));
  Serial.println(F("Initializing DFPlayer ... (May take 3~5 seconds)"));
  
  if (!myDFPlayer.begin(mySoftwareSerial)) {  //Use softwareSerial to communicate with mp3.
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
    while(true);
  }
  Serial.println(F("DFPlayer Mini online."));
  
  myDFPlayer.setTimeOut(500); //Set serial communictaion time out 500ms
  
  //----Set volume----
  myDFPlayer.volume(30);  //Set volume value (0~30).
  myDFPlayer.volumeUp(); //Volume Up
  myDFPlayer.volumeDown(); //Volume Down
  
  //----Set different EQ----
  myDFPlayer.EQ(DFPLAYER_EQ_NORMAL);

  //----Set device we use SD as default----
//  myDFPlayer.outputDevice(DFPLAYER_DEVICE_U_DISK);
  myDFPlayer.outputDevice(DFPLAYER_DEVICE_SD);
//  myDFPlayer.outputDevice(DFPLAYER_DEVICE_AUX);
//  myDFPlayer.outputDevice(DFPLAYER_DEVICE_SLEEP);
//  myDFPlayer.outputDevice(DFPLAYER_DEVICE_FLASH);

  myDFPlayer.playFolder(15, 4);  //play specific mp3 in SD:/15/004.mp3; Folder Name(1~99); File Name(1~255)
  delay(1000);

  //----Read imformation----
  Serial.println(myDFPlayer.readState()); //read mp3 state
  Serial.println(myDFPlayer.readVolume()); //read current volume
  Serial.println(myDFPlayer.readEQ()); //read EQ setting
  Serial.println(myDFPlayer.readFileCounts()); //read all file counts in SD card
  Serial.println(myDFPlayer.readCurrentFileNumber()); //read current play file number
  Serial.println(myDFPlayer.readFileCountsInFolder(3)); //read file counts in folder SD:/03
}

void loop()
{
  float thumb = analogRead(A0)
float first_finger = analogRead(A1)
float second_finger = analogRead(A2)
float third_finger = analogRead(A3)
float fourth_finger = analogRead(A4)
Serial.print(thumb);
Serial.print("    ");



Serial.print(first_finger);
Serial.print("    ");


Serial.print(second_finger);
Serial.print("    ");


Serial.print(third_finger);
Serial.print("    ");

Serial.println(fourth_finger);
Serial.print("    ");

if(thumb>45 && first_finger<45 && second_finger<45 && third_finger<45 && fourth_finger<45)
{
  myDFPlayer.playFolder(1,1); //  folder,file number/name
  delay(1000)
}
else if(thumb<45 && first_finger>45 && second_finger<45 && third_finger<45 && fourth_finger<45)
{
  myDFPlayer.playFolder(1,2); //  folder,file number/name
  delay(1000)
}
else if(thumb<45 && first_finger<45 && second_finger>45 && third_finger<45 && fourth_finger<45)
{
  myDFPlayer.playFolder(1,3); //  folder,file number/name
  delay(1000)
}
else if(thumb<45 && first_finger<45 && second_finger<45 && third_finger>45 && fourth_finger<45)
{
  myDFPlayer.playFolder(1,4); //  folder,file number/name
  delay(1000)
}
else if(thumb<45 && first_finger<45 && second_finger<45 && third_finger<45 && fourth_finger>45)
{
  myDFPlayer.playFolder(1,5); //  folder,file number/name
  delay(1000)
}
else if(thumb>45 && first_finger>45 && second_finger<45 && third_finger<45 && fourth_finger<45)
{
  myDFPlayer.playFolder(1,6); //  folder,file number/name
  delay(1000)
}
else if(thumb<45 && first_finger>45 && second_finger>45 && third_finger<45 && fourth_finger<45)
{
  myDFPlayer.playFolder(1,7); //  folder,file number/name
  delay(1000)
}
else if(thumb<45 && first_finger<45 && second_finger>45 && third_finger>45 && fourth_finger<45)
{
  myDFPlayer.playFolder(1,8); //  folder,file number/name
  delay(1000)
}
else if(thumb<45 && first_finger<45 && second_finger<45 && third_finger>45 && fourth_finger>45)
{
  myDFPlayer.playFolder(1,9); //  folder,file number/name
  delay(1000)
}
else if(thumb>45 && first_finger<45 && second_finger>45 && third_finger<45 && fourth_finger<45)
{
  myDFPlayer.playFolder(1,10); //  folder,file number/name
  delay(1000)
}
else if(thumb>45 && first_finger<45 && second_finger<45 && third_finger>45 && fourth_finger<45)
{
  myDFPlayer.playFolder(1,11); //  folder,file number/name
  delay(1000)
}
else if(thumb>45 && first_finger<45 && second_finger<45 && third_finger<45 && fourth_finger>45)
{
  myDFPlayer.playFolder(1,12); //  folder,file number/name
  delay(1000)
}
else if(thumb<45 && first_finger>45 && second_finger<45 && third_finger>45 && fourth_finger<45)
{
  myDFPlayer.playFolder(1,13); //  folder,file number/name
  delay(1000)
}
else if(thumb<45 && first_finger>45 && second_finger<45 && third_finger<45 && fourth_finger>45)
{
  myDFPlayer.playFolder(1,14); //  folder,file number/name
  delay(1000)
}
else if(thumb<45 && first_finger<45 && second_finger>45 && third_finger<45 && fourth_finger>45)
{
  myDFPlayer.playFolder(1,15); //  folder,file number/name
  delay(1000)
}
else if(thumb<45 && first_finger>45 && second_finger>45 && third_finger>45 && fourth_finger>45)
{
  myDFPlayer.playFolder(1,16); //  folder,file number/name
  delay(1000)
}
else if(thumb>45 && first_finger<45 && second_finger>45 && third_finger>45 && fourth_finger>45)
{
  myDFPlayer.playFolder(1,17); //  folder,file number/name
  delay(1000)
}
else if(thumb>45 && first_finger>45 && second_finger<45 && third_finger>45 && fourth_finger>45)
{
  myDFPlayer.playFolder(1,18); //  folder,file number/name
  delay(1000)
}
else if(thumb>45 && first_finger>45 && second_finger>45 && third_finger<45 && fourth_finger>45)
{
  myDFPlayer.playFolder(1,19); //  folder,file number/name
  delay(1000)
}
else if(thumb>45 && first_finger>45 && second_finger>45 && third_finger>45 && fourth_finger<45)
{
  myDFPlayer.playFolder(1,20); //  folder,file number/name
  delay(1000)
}
else if(thumb<45 && first_finger>45 && second_finger>45 && third_finger>45 && fourth_finger<45)
{
  myDFPlayer.playFolder(1,21); //  folder,file number/name
  delay(1000)
}
else if(thumb>45 && first_finger>45 && second_finger>45 && third_finger>45 && fourth_finger>45)
{
  myDFPlayer.playFolder(1,22); //  folder,file number/name emergency
  delay(8000)
}
else if(thumb>45 && first_finger<45 && second_finger>45 && third_finger<45 && fourth_finger>45)
{
  myDFPlayer.playFolder(1,23); //  folder,file number/name
  delay(1000)
}
else if(thumb<45 && first_finger<45 && second_finger>45 && third_finger>45 && fourth_finger>45)
{
  myDFPlayer.playFolder(1,24); //  folder,file number/name
  delay(1000)
}
else if(thumb<45 && first_finger>45 && second_finger<45 && third_finger>45 && fourth_finger>45)
{
  myDFPlayer.playFolder(1,25); //  folder,file number/name
  delay(1000)
}
else if(thumb<45 && first_finger>45 && second_finger>45 && third_finger<45 && fourth_finger>45)
{
  myDFPlayer.playFolder(1,26); //  folder,file number/name
  delay(1000)
}
else if(thumb>45 && first_finger<45 && second_finger<45 && third_finger>45 && fourth_finger>45)
{
  myDFPlayer.playFolder(1,27); //  folder,file number/name
  delay(1000)
}
else if(thumb>45 && first_finger<45 && second_finger>45 && third_finger>45 && fourth_finger<45)
{
  myDFPlayer.playFolder(1,28); //  folder,file number/name
  delay(1000)
}
else if(thumb>45 && first_finger>45 && second_finger<45 && third_finger<45 && fourth_finger>45)
{
  myDFPlayer.playFolder(1,29); //  folder,file number/name
  delay(1000)
}
else if(thumb>45 && first_finger>45 && second_finger<45 && third_finger>45 && fourth_finger<45)
{
  myDFPlayer.playFolder(1,30); //  folder,file number/name
  delay(1000)
}
else if(thumb>45 && first_finger>45 && second_finger>45 && third_finger<45 && fourth_finger<45)
{
  myDFPlayer.playFolder(1,31); //  folder,file number/name
  delay(1000)
}

  static unsigned long timer = millis();
  
  if (millis() - timer > 3000) {
    timer = millis();
    myDFPlayer.next();  //Play next mp3 every 3 second.
  }
  
  if (myDFPlayer.available()) {
    printDetail(myDFPlayer.readType(), myDFPlayer.read()); //Print the detail message from DFPlayer to handle different errors and states.
  }
}

void printDetail(uint8_t type, int value){
  switch (type) {
    case TimeOut:
      Serial.println(F("Time Out!"));
      break;
    case WrongStack:
      Serial.println(F("Stack Wrong!"));
      break;
    case DFPlayerCardInserted:
      Serial.println(F("Card Inserted!"));
      break;
    case DFPlayerCardRemoved:
      Serial.println(F("Card Removed!"));
      break;
    case DFPlayerCardOnline:
      Serial.println(F("Card Online!"));
      break;
    case DFPlayerUSBInserted:
      Serial.println("USB Inserted!");
      break;
    case DFPlayerUSBRemoved:
      Serial.println("USB Removed!");
      break;
    case DFPlayerPlayFinished:
      Serial.print(F("Number:"));
      Serial.print(value);
      Serial.println(F(" Play Finished!"));
      break;
    case DFPlayerError:
      Serial.print(F("DFPlayerError:"));
      switch (value) {
        case Busy:
          Serial.println(F("Card not found"));
          break;
        case Sleeping:
          Serial.println(F("Sleeping"));
          break;
        case SerialWrongStack:
          Serial.println(F("Get Wrong Stack"));
          break;
        case CheckSumNotMatch:
          Serial.println(F("Check Sum Not Match"));
          break;
        case FileIndexOut:
          Serial.println(F("File Index Out of Bound"));
          break;
        case FileMismatch:
          Serial.println(F("Cannot Find File"));
          break;
        case Advertise:
          Serial.println(F("In Advertise"));
          break;
        default:
          break;
      }
      break;
    default:
      break;
  }
  
}

