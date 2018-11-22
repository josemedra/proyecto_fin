#ifndef PARTICULA_H
#define PARTICULA_H

#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsScene>
#include <iostream>
#include <math.h>


using namespace std;

class particula : public QGraphicsItem
{
public:

   particula(float ini_px, float ini_py, float ini_r): px(ini_px), py(ini_py), r(ini_r){vx=90;vy=90;}  // Constructor para inicializar el radio, posicion y velocidad en x,y
   float getposx();    //Metodo para obtener la posicion en x
   float getposy();    //Metodo para obtener la posicion en y
   float getradio();   //Metodo para obtener el radio
   float getvelx();    //Metodo para obtener la velocidad en x
   float getvely();    //Metodo para obtener la velocidad en y

   float getangulo();

   void setposicion(int x, int y);  // Metodo para cambiar las coordenadas x,y de la particula
   void mover( float vertlim); // Metodo para actualizar posicion de la particula
   void setvelocidad(int velx, int vely); // Metodo para cambiar velocidad en x,y
   void setradio(int r);// metodo para cambiar el radio.
   void setangulo(int a_); // se crea una funcion para el anulo.



   QRectF boundingRect() const;

   void paint(QPainter *painter, const QStyleOptionGraphicsItem*option,QWidget*widget);

// QUITE EL DT DE FUNCION MOVER!!
private:
    float px;  //Coordenada x
    float py;  //Coordenada y
    float r;   //Radio
    float vx;  //Velocidad en x
    float vy;  //Velocidad en y
    float t;   //tiempo
int a;
int velx;
int vely;

    particula();
};

#endif // PARTICULA_H
