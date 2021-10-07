#include "job.h"
#include "city.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    job *w=new job();
    w->show();



    return a.exec();
}
