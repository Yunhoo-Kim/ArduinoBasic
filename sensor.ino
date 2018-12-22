

/*

   TCRT5000 라인센서

   왼쪽 라인센서 DO - D2

   오른쪽 라인센서 DO - D3

*/


int leftLineSensor =  7;

int rightLineSensor = 8;



int speed = 100;



void setup() {

  

  //TCRT5000 라인센서를 입력으로 변경합니다.

  pinMode(leftLineSensor, INPUT);

  pinMode(rightLineSensor, INPUT);

}





/**

   함수내 코드가 무한히 실행됩니다.

*/

void loop() {

  //양쪽 센서가 모두 선을 감지하지 않았을 경우 전진합니다.

  if (!digitalRead(leftLineSensor) && !digitalRead(rightLineSensor)) {

   // 전진
   
  } else if (!digitalRead(leftLineSensor) && digitalRead(rightLineSensor)) {

    // 좌회전
  } else if (digitalRead(leftLineSensor) && !digitalRead(rightLineSensor)) {

    // 우회전
    
  }

}
