#include "LedControl.h"
//  라이브러리(아두이노 자체에는 없지만 아두이노를 좀더 쉽게 사용하게 해주는 도구)설치
LedControl lc = LedControl(12, 11, 10, 1);
// LED객체 생성
 
byte a[8] = [0xc3, 0xe7, 0x7e, 0x3c, 0x3c, 0x7e, 0xe7, 0xc3];
//https://dotmatrix.5corpion.dev/   여기에서 당신이 원하는 모양을 만드세요!!!

void setup()
{

  lc.shutdown(0, false);
// 전광판 절전모드 끄기
  lc.setIntensity(0, 8);
//전광판 크기 설정
  lc.clearDisplay(0);
 //전광판 에켜저있는 불다 끄기(초기화)
}
 
 

void loop()
{
 
  for (int row = 0; row < 8; row++)
  {
    lc.setRow(0, row, a[row]);  
    delay(25);
  }
//  행렬을 한칸한칸 채우는 과정
}


/*
 void setup()
 실행이 처음에 하고 그이후에 
 void loop()
 을 계속해서 실행함
 */
