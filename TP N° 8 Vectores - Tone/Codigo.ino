// Can be moved in header file i.e notes.h
#define ARRAY_LEN(array) (sizeof(array) / sizeof(array[0]))

// tempo
const int TEMPO = 120;

// notas
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_G3 196
#define NOTE_A3 220
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_D4 294
#define NOTE_E4 330

#define BUZZ = 11;

// convierte ñps cuadraditos a milisegundos segun el bpm
int cuadritosToDuration(int cuadritos) {
  int absCuadritos = (cuadritos < 0) ? -cuadritos : cuadritos;
  
  return absCuadritos * (60000 / TEMPO) / 8;
}

// hace la nota o el silencio
void playNote(int note, int duration) {
  int durationMs = cuadritosToDuration(duration);
  
  if (duration > 0 && note > 0) {
    tone(BUZZ, note);
    delay(durationMs);
    noTone(BUZZ);
  } else {
    // es un silencio
    noTone(BUZZER_PIN);
    delay(durationMs);
  }
  // pausa para que suenen bien todas las notas
  delay(30);
}

// recorre y reproduce los vectores
void playMelody(const int notes[], const int figures[], int length) {
  for (int i = 0; i < length; i++) {
    playNote(notes[i], figures[i]);
  }
}

// tiempo para repetir
void pauseBetweenLoops(int seconds) {
  delay(seconds * 1000);
}

// vectores con notas y duracion son 30
const int melodyNotes[30] = { NOTE_D4, NOTE_D4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_A3, NOTE_G3, NOTE_F3, NOTE_G3, NOTE_A3, NOTE_B3, NOTE_D4, NOTE_D4, NOTE_C4, NOTE_A3, NOTE_G3, NOTE_A3, NOTE_C4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_G3, NOTE_A3, NOTE_B3, NOTE_A3, NOTE_G3, NOTE_F3, NOTE_F3, NOTE_E3 };
const int melodyFigures[30] = { 6, 6, 6, 6, 12, 12, 12, 12, 24, 18, 6, 12, 12, 24, 24, 18, 6, 12, 12, 12, 6, 6, 12, 12, 18, 6, 12, 12, 24, 24 };

void setup() {
  pinMode(BUZZ, OUTPUT);
}

void loop() {
  // reproduccion de la melodia completa
  playMelody(melodyNotes, melodyFigures, 30);
  
  // pausa entre ciclos
  pauseBetweenLoops(3);
}