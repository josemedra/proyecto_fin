#include "application.h"
#include "ui_application.h"
#include"parabolico.h"
#include"parabolico.h"


application::application(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::application)
{
    ui->setupUi(this);

    srand(time(NULL));
    timer=new QTimer(this);
    scene=new QGraphicsScene(this);
    scene->setSceneRect(0,0,ANCHO,ALTO);

    ui->graphicsView->setScene(scene);

    scene->addRect(scene->sceneRect());

    ui->graphicsView->resize(scene->width(),scene->height());
    this->resize(ui->graphicsView->width()+100,ui->graphicsView->height()+100);



    partic = new particula(30,10,20);
    scene->addItem(partic);
    partic->mover(ALTO);

    timer->stop();
    connect(timer,SIGNAL(timeout()),this,SLOT(actual_scene()));

}

application::~application()
{
    delete ui;
    delete partic;
    delete timer;
    delete scene;
}

void application::on_START_clicked()
{
    int resul;
    Parabolico objeto(this);
    objeto.setWindowTitle("Movimiento Parabolico");
    resul= objeto.exec();

    if (resul==QDialog::Rejected)
        return;

    Guardar objeto2;
    objeto2.setvelo(objeto.getvel(),objeto.getvel());
    objeto2.setposx(objeto.getpx());
    objeto2.setposy(objeto.getpy());
    objeto2.setang(objeto.getangulo());
    objeto2.setrad(objeto.getradio());

    //informacion [0]=objeto2;
    informacion.insert(informacion.begin(),objeto2);



         pox=informacion.at(0).getposx();
         poy=informacion.at(0).getposy();//reconocer los valores ingresados por pantalla.
         rad= informacion.at(0).getrad();
         a=informacion.at(0).getang();
         vel=informacion.at(0).getvelox();
         veli=informacion.at(0).getveloy();

         
         
         partic->setposicion(pox,poy);
         partic->setradio(rad);
         partic->setangulo(a);
         partic->setvelocidad(vel,veli);
                 
                 
          partic->mover(ALTO);






   timer->start(40);
}

void application::actual_scene()
{
    partic->mover(ALTO);

}




