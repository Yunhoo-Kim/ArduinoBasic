# 아두이노 수업 - 코딩 플러스 김윤후

## 명령어 모음

### pinMode(pinNumber, Mode(INPUT, OUTPUT))
핀(0 ~ 13, A0 - A5)을 입력, 출력으로 사용할 지 설정하는 함수.
기본적으로 setUp 함수 내에 선언.

### digitalWrite(pinNumber, StateOfPin)
디지털 핀(0-13)이 출력 모드일때 설정한 핀에 상태 값을 출력하는 함수

|StateOfPin|Value|Volt|
|------|---|--|
|HIGH|1|5V|
|LOW|0|0V|
전압이 5V인 경우 핀이 작동한다.

### delay(millisecondForDelay)
일정시간만큼 block을 해서 설정한 시간만큼 기다리는 함수.
```
digitalWrite(13, HIGH) // 13번 핀을 활성화
delay(1000); // 1초동안 기다려라
// 13번핀을 활성화하고 1초동안 기다림.
```

## 시리얼 통신

### Serial.begin(통신 속도)
시리얼 통신 전송 값을 어떤 주기로 전송할지 설정한다. 보통 9600

### Serial.print(출력값);
실제로 값을 출력한다.

### Serial.println(출력값);
출력값 끝에 줄 바꿈 문자 추가

### Serial.available();
시리얼 포트에 수신되어 저장되어 있는 데이터 바이트 수를 반환.
데이터가 없으면 0, 있으면 데이터 개수.

### Serial.read();
포트에 수신되어 버퍼에 저장된 첫번째 문자를 읽어서 반환. 수신버퍼가 비어있으면 -1, 값이 있으면 ASCII 값 반환.

## Serial.end();
시리얼 통신을 종료할 때 사용.

## 하드웨어

### 저항기
저항기는 전류를 조절함으로써 전기회로에서 전압, 전류를 제어하는 필수적인 소자이다.

#### 고정 저항기

#### 가변 저항기
아날로그 스위치, 스위치 등이 가변 저항기.
저항 값을 변경할 수 있도록 한다.

참고 http://codingrun.com/65

참고 http://deneb21.tistory.com/313  - (장애물 감지)

참고 http://deneb21.tistory.com/311 - 블루투스 자동차 만들기

## 1. 전구 켜고 끄기 - 신호등 만들기

전구를 키고 끄는 ㅎㅎㅎㅎ
