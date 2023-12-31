#define IN1 8
#define IN2 7
#define IN3 6
#define IN4 5



void setup() {
  // put your setup code here, to run once:
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);



  unsigned long start_time = millis();
  do {
    move_CW(1);
  } while (millis() - start_time <= 5000);

  delay(1000);

  int steps = 5;
  int delta_v = 255/steps;
  start_time = millis();
  do {
    move_CW(1);
  } while (millis() - start_time <= 5000);
}

int steps = 51;
int delta_v = 255/steps;

// blue = IN1
// pink =   IN2
// yellow = IN3
// orange = IN4


void _CW_step_1() {
  for (int step = 0; step <= steps; step++) {
    analogWrite(IN1, delta_v * step);
  }
  // digitalWrite(IN1, HIGH);
}
void _CW_step_2() {
  for (int step = 0; step <= steps; step++) {
    analogWrite(IN3, 255 - (delta_v * step));
  }
}
void _CW_step_3() {
  for (int step = 0; step <= steps; step++) {
    analogWrite(IN4, delta_v * step);
  }
  // digitalWrite(IN4, HIGH);
}
void _CW_step_4() {
  for (int step = 0; step <= steps; step++) {
    analogWrite(IN2, 255 - (delta_v * step));
  }
}
void _CW_step_5() {
  for (int step = 0; step <= steps; step++) {
    analogWrite(IN3, delta_v * step);
  }
  // digitalWrite(IN3, HIGH);
}
void _CW_step_6() {
  for (int step = 0; step <= steps; step++) {
    analogWrite(IN1, 255 - (delta_v * step));
  }
}
void _CW_step_7() {
  for (int step = 0; step <= steps; step++) {
    analogWrite(IN2, delta_v * step);
  }
  // digitalWrite(IN2, HIGH);
}
void _CW_step_8() {
  for (int step = 0; step <= steps; step++) {
    analogWrite(IN4, 255 - (delta_v * step));
  }
}

void move_CW(int delay_time) {
  _CW_step_1();
  delay(delay_time);
  _CW_step_2();
  delay(delay_time);
  _CW_step_3();
  delay(delay_time);
  _CW_step_4();
  delay(delay_time);
  _CW_step_5();
  delay(delay_time);
  _CW_step_6();
  delay(delay_time);
  _CW_step_7();
  delay(delay_time);
  _CW_step_8();
  delay(delay_time);
}

void move_CW() {
  _CW_step_1();
  _CW_step_2();
  _CW_step_3();
  _CW_step_4();
  _CW_step_5();
  _CW_step_6();
  _CW_step_7();
  _CW_step_8();
}

void loop() {
  // put your main code here, to run repeatedly:

}
