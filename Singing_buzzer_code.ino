int notes[] = {60, 500, 300, 250, 70, 100}; //defining the array of frequencies
int duration[] = {500, 2000, 500, 3000, 1000, 2000}; //defining the duration in ms to hold out the notes
int notesLength = sizeof(notes) / sizeof(notes[0]); //defining the length of the notes array
int durationLength = sizeof(duration) / sizeof(duration[0]); //defining the length of the duration array
int i=0;
const int buzzer = 8; //defining the buzzer as pin 8

void setup() {
 

}

void loop() {
  
  for (i; i<notesLength; i++) {            
    if (i == notesLength -1) {
      tone(buzzer,i);
      int noteDuration = duration[i];
      delay(noteDuration);
      noTone(buzzer);
    }

    else{
      tone(buzzer,i);                         
      int noteDuration = duration[i];
      delay(noteDuration);    
    }
  }
}

// This code will iterate through the notes array, and will hold each note for 1 second, and wait for 1s before playing the other note
