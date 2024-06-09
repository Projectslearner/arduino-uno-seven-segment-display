/*
    Project name : 7 Segment display
    Modified Date: 09-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-seven-segment-display
*/

const int segments[] = {A, B, C, D, E, F, G};
const int digits[] = {D1, D2};
const byte digitPatterns[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1}  // 9
};

void setup() 
{
  for (int i = 0; i < 7; i++) pinMode(segments[i], OUTPUT);
  for (int i = 0; i < 2; i++) pinMode(digits[i], OUTPUT);
}

void loop() 
{
  for (int num = 0; num < 10; num++) 
  {
    displayNumber(num);
    delay(1000);
  }
}

void displayNumber(int num) 
{
  for (int seg = 0; seg < 7; seg++) digitalWrite(segments[seg], digitPatterns[num][seg]);
  digitalWrite(digits[num < 8 ? 0 : 1], LOW);
  delay(5); // Adjust delay as needed for brightness
  for (int seg = 0; seg < 7; seg++) digitalWrite(segments[seg], LOW);
  digitalWrite(digits[num < 8 ? 0 : 1], HIGH);
}
