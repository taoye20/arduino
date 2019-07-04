#include <Morse.h>

String str="";   //储存读出的摩尔码

Morse morse(13);
void setup() {
  
  Serial.begin(9600);
}

void loop() {
  while(Serial.available()>0)
  {
     int t;
   bian(Serial.read());   //变码
    for(t=0;t<4;t++)
    {
      if(str[t]=='*')
      morse.dot();      
      if(str[t]=='-')
      morse.dash();      
      delay(15);         //选择函数
    }
    delay(400);          
    str="";              
  }
}

void bian(int n) 
{
  switch(n)
  {
    case 97:str="*-  ";break;   //a
    case 98:str="-***";break;   //b
    case 99:str="-*-*";break;   //c
    case 100:str="-** ";break;  //d
    case 101:str="*   ";break;  //e
    case 102:str="**-*";break;  //f
    case 103:str="--* ";break;  //g
    case 104:str="****";break;  //h
    case 105:str="**  ";break;  //i
    case 106:str="*---";break;  //j
    case 107:str="-*- ";break;  //k
    case 108:str="*-**";break;  //l
    case 109:str="--  ";break;  //m
    case 110:str="-*  ";break;  //n
    case 111:str="--- ";break;  //o
    case 112:str="*--*";break;  //p
    case 113:str="--*-";break;  //r
    case 115:str="*** ";break;  //s
    case 116:str="-   ";break;  //t
    case 117:str="**- ";break;  //u
    case 118:str="***-";break;  //v
    case 119:str="*-- ";break;  //w
    case 120:str="-**-";break;  //x
    case 121:str="-*--";break;  //y
    case 122:str="--**";break;  //z
    case 32:str="*-*-";break;  //空格
    case 10:str="----";break;  //回车
    default:break;
  }
}
