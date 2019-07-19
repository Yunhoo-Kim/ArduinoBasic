int leds[] = {2, 3, 4, 5, 6, 7, 8, 9}; // 지정된 7세그먼트 led 개수
int led_num = 8; // 7세그먼트 led 
int num= 0;             // 현재 LED에 표시되고 있는 숫자

int set_number[10][8] = {  // 각 숫자에 대한 LED 설정 값을 정의.
  {0, 0, 0, 0, 0, 0, 1, 1}, // 0
  {1, 0, 0, 1, 1, 1, 1, 1}, // 1
  {0, 0, 1, 0, 0, 1, 0, 1}, // 2
  {0, 0, 0, 0, 1, 1, 0, 1}, // 3
  {1, 0, 0, 1, 1, 0, 0, 1}, // 4
  {0, 1, 0, 0, 1, 0, 0, 1}, // 5
  {0, 1, 0, 0, 0, 0, 0, 1}, // 6
  {0, 0, 0, 1, 1, 1, 1, 1}, // 7
  {0, 0, 0, 0, 0, 0, 0, 1}, // 8
  {0, 0, 0, 0, 1, 0, 0, 1}  // 9
};
void setup() {
  for (int i = 0 ; i < led_num ; i++) {    // 7세그먼트 led에 연결된 핀을 출력으로 설정
    pinMode(leds[i], OUTPUT);
  }
  
  pinMode(13, INPUT_PULLUP);    // 택트 스위치를 input_pullup으로 설정
}

void loop() {
    
  if(digitalRead(13) == LOW){     // 버튼이 한번 눌릴때마다 7세그먼트 숫자가 하나씩 올라감
    if(num == 9) num = 0;             // 7세그먼트에 표시됨
    else num ++;
  }

  for (int j = 0 ; j < led_num ; j++) {      // 7 세그먼트 LED 출력
      digitalWrite(leds[j], set_number[num][j]);
  }
  
  delay(150);    
}



void setup() {
  // 각 핀의 모드를 설정해줍니다.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
 
}

void loop() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
}
