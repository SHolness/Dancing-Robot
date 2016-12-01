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
  playNote(noteB4, QN);
  playNote(noteB4, QN);
  playNote(noteB4, QN);
  playNote(Rest, QN);

  playNote(noteB4, QN);
  playNote(noteB4, QN);
  playNote(noteB4, QN);
  playNote(Rest, QN);

  playNote(noteB4, QN);
  playNote(noteD5, QN);
  playNote(noteG4, QN+EN);
  playNote(noteA4, EN);

  playNote(noteB4, HN+QN);
  playNote(Rest, QN);

  playNote(noteC5, QN);
  playNote(noteC5, QN);
  playNote(noteC5, QN+EN);
  playNote(noteC5, EN);

  playNote(noteC5, QN);
  playNote(noteB4, QN);
  playNote(noteB4, QN);
  playNote(noteB4, EN);
  playNote(noteB4, EN);

  playNote(noteB4, QN);
  playNote(noteA4, QN);
  playNote(noteA4, QN);
  playNote(noteB4, QN);

  playNote(noteA4, HN);
  playNote(noteD5, QN);
  playNote(Rest, QN);

  playNote(noteB4, QN);
  playNote(noteB4, QN);
  playNote(noteB4, QN);
  playNote(Rest, QN);

  playNote(noteB4, QN);
  playNote(noteB4, QN);
  playNote(noteB4, QN);
  playNote(Rest, QN);

  playNote(noteB4, QN);
  playNote(noteD5, QN);
  playNote(noteG4, QN+EN);
  playNote(noteA4, EN);

  playNote(noteB4, HN+QN);
  playNote(Rest, QN);

  playNote(noteC5, QN);
  playNote(noteC5, QN);
  playNote(noteC5, QN+EN);
  playNote(noteC5, EN);

  playNote(noteC5, QN);
  playNote(noteB4, QN);
  playNote(noteB4, QN);
  playNote(noteB4, EN);
  playNote(noteB4, EN);

  playNote(noteD5, QN);
  playNote(noteD5, QN);
  playNote(noteC5, QN);
  playNote(noteA4, QN);

  playNote(noteG4, WN);
  
}

void playNote(int note, int duration)
// This custom function takes two parameters, note and duration to make playing songs easier.
// Each of the notes have been #defined in the notes.h file. The notes are broken down by 
// octave and sharp (s) / flat (b).
{
  tone(buzzerPin, note, duration);
  delay(duration);
}
