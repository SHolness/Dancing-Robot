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
  playNote(noteG4, EN+SN);
  playNote(Rest, SN);
  playNote(noteC5, EN+SN);
  playNote(Rest, SN);
  playNote(noteG4, EN+SN);
  playNote(Rest, SN);
  playNote(noteC5, EN+SN);
  playNote(Rest, SN);

  //bar 2
  playNote(noteG4, EN);
  playNote(noteC5, EN+SN);
  playNote(Rest, SN);
  playNote(noteG4, EN);
  playNote(Rest, EN);
  playNote(noteFs4, EN);
  playNote(noteG4, EN+SN);
  playNote(Rest, SN);

  //bar 3
  playNote(noteG4, EN);
  playNote(noteFs4, EN);
  playNote(noteG4, EN);
  playNote(noteF4, EN);
  playNote(Rest, EN);
  playNote(noteE4, EN);
  playNote(noteF4, EN);
  playNote(noteE4, EN);
  
  //bar 4
  playNote(noteEb4, QN+EN);
  playNote(noteC4, EN+HN);
  
  //bar 5
  playNote(noteG4, EN+SN);
  playNote(Rest, SN);
  playNote(noteC5, EN+SN);
  playNote(Rest, SN);
  playNote(noteG4, EN+SN);
  playNote(Rest, SN);
  playNote(noteC5, EN+SN);
  playNote(Rest, SN);

  //bar 6
  playNote(noteG4, EN);
  playNote(noteC5, EN+SN);
  playNote(Rest, SN);
  playNote(noteG4, EN);
  playNote(Rest, EN);
  playNote(noteFs4, EN);
  playNote(noteG4, EN+SN);
  playNote(Rest, SN);

  //bar 7
  playNote(noteF4, EN);
  playNote(Rest, EN);
  playNote(noteF4, QN+EN);
  playNote(noteE4, EN);
  playNote(noteF4, QN);

  //bar 8
  playNote(noteBb4, EN);
  playNote(noteAb4, QN);
  playNote(noteG4, QN);
  playNote(noteF4, QN+EN);

  //bar 9
  playNote(noteG4, EN+SN);
  playNote(Rest, SN);
  playNote(noteC5, EN+SN);
  playNote(Rest, SN);
  playNote(noteG4, EN+SN);
  playNote(Rest, SN);
  playNote(noteC5, EN+SN);
  playNote(Rest, SN);

  //bar 10
  playNote(noteG4, EN);
  playNote(noteC5, EN+SN);
  playNote(Rest, SN);
  playNote(noteG4, EN);
  playNote(Rest, EN);
  playNote(noteFs4, EN);
  playNote(noteG4, EN+SN);
  playNote(Rest, SN);

  //bar 11
  playNote(noteBb4, EN);
  playNote(Rest, EN);
  playNote(noteBb4, QN+EN);
  playNote(noteG4, EN);
  playNote(noteF4, QN);

  //bar 12
  playNote(noteEb4, QN+EN);
  playNote(noteC4, EN+HN);

  //bar 13
  playNote(noteC4, HN);
  playNote(noteEb4, HN);

  //bar 14
  playNote(noteG4, HN);
  playNote(noteBb4, HN);

  //bar 15 + 16
  playNote(noteDb5, QN);
  playNote(noteC5, QN);
  playNote(noteFs4, EN);
  playNote(noteG4, QN);
  playNote(noteEb4, EN+HN);
}

void playNote(int note, int duration)
// This custom function takes two parameters, note and duration to make playing songs easier.
// Each of the notes have been #defined in the notes.h file. The notes are broken down by 
// octave and sharp (s) / flat (b).
{
  tone(buzzerPin, note, duration);
  delay(duration);
}
