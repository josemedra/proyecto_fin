#ifndef PARABOLICO_H
#define PARABOLICO_H

#include <QDialog>

namespace Ui {
class Parabolico;
}

class Parabolico : public QDialog
{
    Q_OBJECT

public:
    explicit Parabolico(QWidget *parent = nullptr);
    ~Parabolico();


    int getpx();
    int getpy();
    int getradio();
    int getvel();
    int getangulo();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::Parabolico *ui;
};

#endif // PARABOLICO_H
