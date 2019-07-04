#include <Morse.h>

String s="";   //储存读出的摩尔码
Morse morse(13);
void setup()
{
  Serial.begin(9600);
}

void loop() {
  while(Serial.available()>0)
  {
     int t;
     bian(Serial.read());   //变码
     for(t=0;t<4;t++)
    {     
      if(s[t]=='-')
      morse.dash();
      if(s[t]=='*')
      morse.dot(); 
      delay(15);         //选择函数
    }
    delay(400);          
    s="";              
  }
}

void bian(int n) 
{
  switch(n)
  {
    case 97:s="*-   ";break;   //a
    case 98:s="-***";break;   //b
    case 99:s="-*-*";break;   //c
    case 100:s="-** ";break;  //d
    case 101:s="*   ";break;  //e
    case 102:s="**-*";break;  //f
    case 103:s="--* ";break;  //g
    case 104:s="****";break;  //h
    case 105:s="**  ";break;  //i
    case 106:s="*---";break;  //j
    case 107:s="-*- ";break;  //k
    case 108:s="*-**";break;  //l
    case 109:s="--  ";break;  //m
    case 110:s="-*  ";break;  //n
    case 111:s="--- ";break;  //o
    case 112:s="*--*";break;  //p
    case 113:s="--*-";break;  //r
    case 115:s="*** ";break;  //s
    case 116:s="-   ";break;  //t
    case 117:s="**- ";break;  //u
    case 118:s="***-";break;  //v
    case 119:s="*-- ";break;  //w
    case 120:s="-**-";break;  //x
    case 121:s="-*--";break;  //y
    case 122:s="--**";break;  //z
    case 32:s="*-*-";break;  //空格
    case 10:s="----";break;  //回车
    default:break;
  }
}
