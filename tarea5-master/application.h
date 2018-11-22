#ifndef APPLICATION_H
#define APPLICATION_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include <cstdlib>
#include <ctime>
#include "particula.h"
#include "parabolico.h"
#include "guardar.h"
#include <vector>
#include "guardar.h"


#define ANCHO 1000
#define ALTO 500
# define DT 1.7
#define g 10
#define alpha 50
#define pi 3.1415



namespace Ui {
class application;
}

class application : public QMainWindow
{
    Q_OBJECT

public:
    explicit application(QWidget *parent = 0);
    ~application();

    int pox;
    int poy;
    int rad;

    int a;
    int vel;
    int veli;

    vector<Guardar>informacion;






private slots:
    void on_START_clicked();
    void actual_scene();

private:
    Ui::application *ui;
    QTimer *timer =nullptr;
    QGraphicsScene *scene = nullptr;
    particula *partic = nullptr;

};

#endif // APPLICATION_H
