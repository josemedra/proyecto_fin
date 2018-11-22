#include "parabolico.h"
#include "ui_parabolico.h"

Parabolico::Parabolico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Parabolico)
{
    ui->setupUi(this);
}

Parabolico::~Parabolico()
{
    delete ui;
}

void Parabolico::on_buttonBox_accepted()
{
    accept();
}

void Parabolico::on_buttonBox_rejected()
{
    reject();
}



int Parabolico::getpx()
{
    return ui->px->value();

}


int Parabolico::getpy()
{
    return ui->py->value();

}

int  Parabolico:: getradio()

{

    return ui->radio->value();
}

int Parabolico:: getvel()
{

    return ui->vel->value();
}


int Parabolico:: getangulo()
{
    return ui->angulo->value();
}


