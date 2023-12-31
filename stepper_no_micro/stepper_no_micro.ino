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
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

}

int steps = 64;
int delta_v = 256/steps;


// blue = IN1
// pink =   IN2
// yellow = IN3
// orange = IN4


void _CW_step_1() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void _CW_step_2() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void _CW_step_3() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void _CW_step_4() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void _CW_step_5() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
}

void _CW_step_6() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
}

void _CW_step_7() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
}


void _CW_step_8() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
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
  _CW_step_1();
  delay(delay_time);
}

void move_CCW(int delay_time) {
  _CW_step_1();
  delay(delay_time);
  _CW_step_8();
  delay(delay_time);
  _CW_step_7();
  delay(delay_time);
  _CW_step_6();
  delay(delay_time);
  _CW_step_5();
  delay(delay_time);
  _CW_step_4();
  delay(delay_time);
  _CW_step_3();
  delay(delay_time);
  _CW_step_2();
  delay(delay_time);
  _CW_step_1();
  delay(delay_time);
}


void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 1000; i++) {
    move_CW(1);
  }
  for (int i = 0; i < 1000; i++) {
    move_CCW(1);
  }
}
