#include "notes.h"
#include <RedBot.h>
RedBotMotors motors;

// Create a couple of constants for our pins.
const int buzzerPin = 9;
const int buttonPin = 12;

void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin, INPUT_PULLUP); // configures the button as an INPUT
  // INPUT_PULLUP defaults it to HIGH.
  pinMode(buzzerPin, OUTPUT);  // configures the buzzerPin as an OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonPin) == LOW)
  {
    playDanceMusic();
    
  }
}

void playDanceMusic()
{
  //bar 1
  playNote(noteG5, EN+SN);
  playNote(Rest, SN);
  playNote(noteC6, EN+SN);
  playNote(Rest, SN);
  playNote(noteG5, EN+SN);
  playNote(Rest, SN);
  playNote(noteC6, EN+SN);
  playNote(Rest, SN);

  //bar 2
  playNote(noteG5, EN);
  playNote(noteC6, EN+SN);
  playNote(Rest, SN);
  playNote(noteG5, EN);
  playNote(Rest, EN);
  playNote(noteFs5, EN);
  playNote(noteG5, EN+SN);
  playNote(Rest, SN);

  //bar 3
  playNote(noteG5, EN);
  playNote(noteFs5, EN);
  playNote(noteG5, EN);
  playNote(noteF5, EN);
  playNote(Rest, EN);
  playNote(noteE5, EN);
  playNote(noteF5, EN);
  playNote(noteE5, EN);
  
  //bar 5
  playNote(noteEb5, QN+EN);
  playNote(noteC5, EN+HN);
  
  //bar 6
  playNote(noteG5, EN+SN);
  playNote(Rest, SN);
  playNote(noteC6, EN+SN);
  playNote(Rest, SN);
  playNote(noteG5, EN+SN);
  playNote(Rest, SN);
  playNote(noteC6, EN+SN);
  playNote(Rest, SN);

  //bar 6
  playNote(noteG5, EN);
  playNote(noteC6, EN+SN);
  playNote(Rest, SN);
  playNote(noteG5, EN);
  playNote(Rest, EN);
  playNote(noteFs5, EN);
  playNote(noteG5, EN+SN);
  playNote(Rest, SN);

  //bar 7
  playNote(noteF5, EN);
  playNote(Rest, EN);
  playNote(noteF5, QN+EN);
  playNote(noteE5, EN);
  playNote(noteF5, QN);

  //bar 8
  playNote(noteBb5, EN);
  playNote(noteAb5, QN);
  playNote(noteG5, QN);
  playNote(noteF5, QN+EN);

  //bar 9
  playNote(noteG5, EN+SN);
  playNote(Rest, SN);
  playNote(noteC6, EN+SN);
  playNote(Rest, SN);
  playNote(noteG5, EN+SN);
  playNote(Rest, SN);
  playNote(noteC6, EN+SN);
  playNote(Rest, SN);

  //bar 10
  playNote(noteG5, EN);
  playNote(noteC6, EN+SN);
  playNote(Rest, SN);
  playNote(noteG5, EN);
  playNote(Rest, EN);
  playNote(noteFs5, EN);
  playNote(noteG5, EN+SN);
  playNote(Rest, SN);

  //bar 11
  playNote(noteBb5, EN);
  playNote(Rest, EN);
  playNote(noteBb5, QN+EN);
  playNote(noteG5, EN);
  playNote(noteF5, QN);

  //bar 12
  playNote(noteEb5, QN+EN);
  playNote(noteC5, EN+HN);

  //bar 13
  playNote(noteC5, HN);
  playNote(noteEb5, HN);

  //bar 15
  playNote(noteG5, HN);
  playNote(noteBb5, HN);

  //bar 16 + 16
  playNote(noteDb6, QN);
  playNote(noteC6, QN);
  playNote(noteFs5, EN);
  playNote(noteG5, QN);
  playNote(noteEb5, EN+HN);
}

void playNote(int note, int duration)
// This custom function takes two parameters, note and duration to make playing songs easier.
// Each of the notes have been #defined in the notes.h file. The notes are broken down by 
// octave and sharp (s) / flat (b).
{
  tone(buzzerPin, note, duration);
  delay(duration);
}
