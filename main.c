#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void printA()
{
    line(50,100,100,50);
 line(100,50,150,100);
 line(75,75,125,75);

}
void printB ()
{
    line(100,40,100,160);
    arc(100,70,90,270,30);
    arc(100,130,90,270,30);

}

void printC()
{
circle(190,183,2);
    arc(200,200,225,110,20);
}

void printD()
{
line(90,50,90,112);
    arc(90,81,90,270,30);
}
void printE()
{
    line(30,30,30,60);
    line(30,30,10,30);
    line(30,60,10,60);
    line(30,45,10,45);
}
void printF()
{

    line(30,30,30,60);
    line(30,30,10,30);
    line(30,45,10,45);
}
void printG ()
{

    arc(100,100,258,90,35);
   line(90,100,90,135);
   line(90,100,105,100);
}
void printH ()
{
    line(30,30,30,60);
    line(50,30,50,60);
    line(30,45,50,45);
}
void printI ()
{
    line(30,30,30,60);
    line(32,30,28,30);
    line(32,60,28,60);
}
void printK ()
{
    line(30,30,30,60);
    line(30,45,15,30);
    line(30,45,15,60);
}
void printL ()
{
    line(30,30,30,60);
    line(30,60,10,60);
}
void printM ()
{
    line(30,30,30,60);
    line(30,30,45,45);
    line(45,45,60,30);
    line(60,30,60,60);
}
void printN ()
{
    line(30,30,30,50);
    line(30,50,50,30);
    line(50,30,50,50);
}
void printO ()
{
     circle(100,100,25);
}
void printP ()
{
    circle(100,100,25);
    line(125,85,125,165);
}
void printQ ()
{
    circle(100,100,25);

    line(95,110,85,135);
}
void printR ()
{
     line(100,40,100,160);
    arc(100,70,90,270,30);
    line(100,100,45,155);

}
void printS ()
{
     line(20,20,40,20);
    line(40,20,40,40);
    line(40,40,20,40);
    line(20,40,20,60);
    line(20,60,40,60);

}
void printT ()
{
    line(30,30,30,60);
    line(15,30,45,30);
}
void printV ()
{
    line(20,20,30,45);
    line(30,45,40,20);
}
void printW ()
{
     line(30,30,30,60);
    line(30,60,45,45);
    line(45,45,60,60);
    line(60,60,60,30);

}
void printX ()
{
     line(50,20,25,50);
    line(25,20,50,50);

}
void printY ()
{
     line(20,20,30,45);
    line(30,45,40,20);
    line(30,45,30,55);
    line(28,55,32,55);

}
void printZ ()
{
    line(30,30,50,30);
    line(30,30,50,50);
    line(50,50,30,50);
}
int main()
{
    char c;
    scanf("%c",&c);

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c://+c//bgi");

    switch (c)
    {
    case 'A' :
        printA();
        break;
      case 'B' :
        printB();
        break;
    case 'C':
        printC();
        break;
    case 'D' :
        printD();
        break;
    case 'E' :
        printE();
        break;
         case 'F':
        printF();
        break;
      case 'G' :
        printG();
        break;
      case 'H' :
        printH();
        break;
    case 'I' :
        printI();
        break;
    case 'K' :
        printK();
        break;
    case 'L' :
        printL();
        break;
    case 'M' :
        printM();
        break;
    case 'N' :
        printN();
        break;
    case 'O' :
        printO();
        break;
    case 'P' :
        printP();
        break;
    case 'Q' :
        printQ();
        break;
      case 'R' :
        printR();
        break;
      case 'S' :
        printS();
        break;
    case 'T' :
        printT();
        break;
    case 'V' :
        printV();
        break;
    case 'W' :
        printW();
        break;
    case 'X' :
        printX();
        break;
    case 'Y' :
        printY();
        break;
    case 'Z' :
        printZ();
        break;

    }
       getch();
    closegraph();
    return 0;
}
