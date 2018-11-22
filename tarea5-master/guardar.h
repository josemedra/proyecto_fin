#ifndef GUARDAR_H
#define GUARDAR_H


class Guardar
{
public:
    Guardar();

    int getposx();
    int getposy();
    int getrad();
    int getvelox();
    int getveloy();
    int getang();


    void setposx(int x);
    void setposy(int y);
    void setrad(int r);
    void setvelo(int vx , int vy);
    void setang(int a);


private:

int posx;
int posy;
int an;
int rad;
int  velx;
int vely;


};




#endif // GUARDAR_H
