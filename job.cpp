#include "job.h"
#include "city.h"
#include "ui_job.h"
#include <QTimer>
#include "QMessageBox"

city w1;
city w2;
city w3;
city w4;
city w5;
city w6;
city w7;
city w8;

job::job(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::job)
{

    w1.zaman=5;
    w1.sorat=5;
    w1.pool=1;
    w1.afzayeshelevel=2;
    w1.level=0;
    w1.daramad=0;

    w2.zaman = 15;
    w2.sorat = 15;
    w2.pool = 16;
    w2.afzayeshelevel=20;
    w2.level=0;
    w2.daramad;
    w2.gheymat=6;
   // w2.ok=10;

    w3.zaman=20;
    w3.sorat=20;
    w3.pool=24;
    w3.afzayeshelevel=25;
    w3.level=0;
    w3.daramad;
    w3.gheymat=10;

    w4.zaman=25;
    w4.sorat=25;
    w4.pool=32;
    w4.afzayeshelevel=40;
    w4.level=0;
    w4.daramad;
    w4.gheymat=15;

    w5.zaman=30;
    w5.sorat=30;
    w5.pool=46;
    w5.afzayeshelevel=51;
    w5.level=0;
    w5.daramad;
    w5.gheymat=25;

    w6.zaman=35;
    w6.sorat=35;
    w6.pool=54;
    w6.afzayeshelevel=61;
    w6.level=0;
    w6.daramad;
    w6.gheymat=34;

    w7.zaman=40;
    w7.sorat=40;
    w7.pool=61;
    w7.afzayeshelevel=79;
    w7.level=0;
    w7.daramad;
    w7.gheymat=40;

    w8.zaman=45;
    w8.sorat=45;
    w8.pool=78;
    w8.afzayeshelevel=90;
    w8.level=0;
    w8.daramad;
    w8.gheymat=50;

    QTimer *timer = new QTimer(this);
    QTimer *timer2 = new QTimer(this);
    QTimer *timer3 = new QTimer(this);
    QTimer *timer4 = new QTimer(this);
    QTimer *timer5 = new QTimer(this);
    QTimer *timer6 = new QTimer(this);
    QTimer *timer7 = new QTimer(this);
    QTimer *timer8 = new QTimer(this);

    timer->setInterval(1000);
    timer->start();
    connect(timer, SIGNAL(timeout()),
    SLOT(updateClock()));
    timer2->setInterval(1000);
    timer2->start();
    connect(timer2, SIGNAL(timeout()),
    SLOT(updateClock2()));
    timer3->setInterval(1000);
    timer3->start();
    connect(timer3, SIGNAL(timeout()),
    SLOT(updateClock3()));
    timer4->setInterval(1000);
    timer4->start();
    connect(timer4, SIGNAL(timeout()),
    SLOT(updateClock4()));
    timer5->setInterval(1000);
    timer5->start();
    connect(timer5, SIGNAL(timeout()),
    SLOT(updateClock5()));
    timer6->setInterval(1000);
    timer6->start();
    connect(timer6, SIGNAL(timeout()),
    SLOT(updateClock6()));
    timer7->setInterval(1000);
    timer7->start();
    connect(timer7, SIGNAL(timeout()),
    SLOT(updateClock7()));
    timer8->setInterval(1000);
    timer8->start();
    connect(timer8, SIGNAL(timeout()),
    SLOT(updateClock8()));


    ui->setupUi(this);
}

job::~job()
{
    delete ui;
}


void job::on_timerClick_clicked()
{
    w1.zaman = w1.sorat ;

    w1.sw = 1;

    ui->moment->setText(QString::number(w1.zaman));

}
void job::updateClock()
 {

     if((w1.sw == 1) && w1.zaman > 0 )
     {
         w1.zaman --;
         ui->moment->setText(QString::number(w1.zaman));

         ui->pbar->setValue(w1.sorat - w1.zaman);
     }
     else if (w1.zaman == 0 && (w1.sw == 1))
     {
         w1.daramad += w1.pool;
         ui->Daramad->setText(QString::number(w1.daramad));
         ui->moneyUpdate->setText(QString::number(w1.pool));
         w1.sw = 0;
     }

 }
void job::updateClock2()
{
    if((w2.sw == 1) && w2.zaman > 0 )
    {
       w2.zaman --;
       ui->moment_2->setText(QString::number(w2.zaman));

       ui->pbar_2->setValue(w2.sorat - w2.zaman);
    }
   else if (w2.zaman == 0 && (w2.sw == 1))
   {
      w2.daramad += w2.pool;
      ui->Daramad->setText(QString::number(w2.daramad));
      ui->moneyUpdate_2->setText(QString::number(w2.pool));
      w2.sw = 0;
   }
}
void job::updateClock3()
{
    if((w3.sw == 1) && w3.zaman > 0 )
    {
       w3.zaman --;
       ui->moment_3->setText(QString::number(w3.zaman));

       ui->pbar_3->setValue(w3.sorat - w3.zaman);
    }
   else if (w3.zaman == 0 && (w3.sw == 1))
   {
      w3.daramad += w3.pool;
      ui->Daramad->setText(QString::number(w3.daramad));
      ui->moneyUpdate_3->setText(QString::number(w3.pool));
      w3.sw = 0;
   }
}
void job::updateClock4()
{
    if((w4.sw == 1) && w4.zaman > 0 )
    {
       w4.zaman --;
       ui->moment_4->setText(QString::number(w4.zaman));

       ui->pbar_4->setValue(w4.sorat - w4.zaman);
    }
   else if (w4.zaman == 0 && (w4.sw == 1))
   {
      w4.daramad += w4.pool;
      ui->Daramad->setText(QString::number(w4.daramad));
      ui->moneyUpdate_4->setText(QString::number(w4.pool));
      w4.sw = 0;
   }
}
void job::updateClock5()
{
    if((w5.sw == 1) && w5.zaman > 0 )
    {
       w5.zaman --;
       ui->moment_5->setText(QString::number(w5.zaman));

       ui->pbar_5->setValue(w5.sorat - w5.zaman);
    }
   else if (w5.zaman == 0 && (w5.sw == 1))
   {
      w5.daramad += w5.pool;
      ui->Daramad->setText(QString::number(w5.daramad));
      ui->moneyUpdate_5->setText(QString::number(w5.pool));
      w5.sw = 0;
   }
}
void job::updateClock6()
{
    if((w6.sw == 1) && w6.zaman > 0 )
    {
       w6.zaman --;
       ui->moment_6->setText(QString::number(w6.zaman));

       ui->pbar_6->setValue(w6.sorat - w6.zaman);
    }
   else if (w6.zaman == 0 && (w6.sw == 1))
   {
      w6.daramad += w6.pool;
      ui->Daramad->setText(QString::number(w6.daramad));
      ui->moneyUpdate_6->setText(QString::number(w6.pool));
      w6.sw = 0;
   }
}
void job::updateClock7()
{
    if((w7.sw == 1) && w7.zaman > 0 )
    {
       w7.zaman --;
       ui->moment_7->setText(QString::number(w7.zaman));

       ui->pbar_7->setValue(w7.sorat - w7.zaman);
    }
   else if (w7.zaman == 0 && (w7.sw == 1))
   {
      w7.daramad += w7.pool;
      ui->Daramad->setText(QString::number(w7.daramad));
      ui->moneyUpdate_7->setText(QString::number(w7.pool));
      w7.sw = 0;
   }
}
void job::updateClock8()
{
    if((w8.sw == 1) && w8.zaman > 0 )
    {
       w8.zaman --;
       ui->moment_8->setText(QString::number(w8.zaman));

       ui->pbar_8->setValue(w8.sorat - w8.zaman);
    }
   else if (w8.zaman == 0 && (w8.sw == 1))
   {
      w8.daramad += w8.pool;
      ui->Daramad->setText(QString::number(w8.daramad));
      ui->moneyUpdate_8->setText(QString::number(w8.pool));
      w8.sw = 0;
   }
}
void job::on_moneyPlus_clicked()
{
    w1.level ++;
    ui->level->setText(QString::number(w1.level));

if( w1.daramad >= 0)
{
    w1.pool ++;
    //afzayeshelevel ++;
    if(w1.level == 7)
   {
        w1.afzayeshelevel ++;
    }
    w1.daramad = w1.daramad - w1.afzayeshelevel;
    ui->pbar->setMaximum(w1.sorat);

    if(w1.level%10 == 0)
    {
        w1.sorat --;
    }

      ui->moneyUpdate->setText(QString::number(w1.pool));

      ui->afzayesheLevel->setText(QString::number(w1.afzayeshelevel));
  }

if(w1.daramad<0)
   w1.daramad = 0;

ui->Daramad->setText(QString::number(w1.daramad));
}

void job::on_timerClick_2_clicked()
{

    if (w1.daramad>= w2.gheymat && w2.count==0)
    {
           QMessageBox msgBox;
           msgBox.setText("you can buy a new job :D ");
           msgBox.setInformativeText("Click Save to unlock the job or Discard to be locked yet");
           msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard);
           msgBox.setDefaultButton(QMessageBox::Discard);
           int ret = msgBox.exec();
           switch (ret) {
           case QMessageBox::Save:
               w2.count = 1;
               w2.ok = 5;
               w2.sw = 1;
               w2.zaman = w2.sorat ;
               ui->moment_2->setText(QString::number(w2.zaman));
               w2.daramad = w1.daramad - w2.gheymat;
               ui->Daramad->setText(QString::number(w2.daramad));
               break;
           case QMessageBox::Discard:
               w2.sw = 0;
               break;
           default:
               break; }

    }
    else if(w2.count == 1)
    {
        w2.ok = 5;
        w2.sw = 1;
        w2.zaman = w2.sorat ;
        ui->moment_2->setText(QString::number(w2.zaman));
        w2.daramad = w1.daramad - w2.gheymat;
        ui->Daramad->setText(QString::number(w2.daramad));
    }
}

void job::on_moneyPlus_2_clicked()
{
    if (w2.ok == 5)
    {
        //w2.sw = 1;
         w2.level ++;
         ui->level_2->setText(QString::number(w2.level));
       if(w2.daramad<0)
       {
           w2.daramad =0;
       }

         if( w2.daramad >= 0)
         {
            w2.pool ++;
            //afzayeshelevel ++;
            if(w2.level == 7)
            {
                 w2.afzayeshelevel ++;
            }
        w2.daramad = w2.daramad - w2.afzayeshelevel;
        ui->pbar_2->setMaximum(w2.sorat);

        if(w2.level%10 == 0)
        {
            w2.sorat --;
        }

        ui->moneyUpdate_2->setText(QString::number(w2.pool));

        ui->afzayesheLevel_2->setText(QString::number(w2.afzayeshelevel));
        }
    if(w2.daramad<0)
    {
        w2.daramad =0;
    }

    ui->Daramad->setText(QString::number(w2.daramad));
}
}

void job::on_timerClick_3_clicked()
{
    if (w2.daramad>= w3.gheymat && w3.count==0)
    {
           QMessageBox msgBox;
           msgBox.setText("you can buy a new job :D ");
           msgBox.setInformativeText("Click Save to unlock the job or Discard to be locked yet");
           msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard);
           msgBox.setDefaultButton(QMessageBox::Discard);
           int ret = msgBox.exec();
           switch (ret) {
           case QMessageBox::Save:
               w3.count = 1;
               w3.ok = 5;
               w3.sw = 1;
               w3.zaman = w3.sorat ;
               ui->moment_3->setText(QString::number(w3.zaman));
               w3.daramad = w2.daramad - w3.gheymat;
               ui->Daramad->setText(QString::number(w3.daramad));
               break;
           case QMessageBox::Discard:
               w3.sw = 0;
               break;
           default:
               break; }

    }
    else if(w3.count == 1)
    {
        w3.ok = 5;
        w3.sw = 1;
        w3.zaman = w3.sorat ;
        ui->moment_3->setText(QString::number(w3.zaman));
        w3.daramad = w2.daramad - w3.gheymat;
        ui->Daramad->setText(QString::number(w3.daramad));
    }

}

void job::on_moneyPlus_3_clicked()
{
    if(w3.ok == 5)
 {
    //w3.sw = 1;
    w3.level ++;
    ui->level_3->setText(QString::number(w3.level));
    if(w3.daramad<0)
    {
        w3.daramad =0;
    }

if( w3.daramad >= 0)
{
    w3.pool ++;
    //afzayeshelevel ++;
    if(w3.level == 7)
   {
        w3.afzayeshelevel ++;
    }
    w3.daramad = w3.daramad - w3.afzayeshelevel;
    ui->pbar_3->setMaximum(w3.sorat);

    if(w3.level%10 == 0)
    {
        w3.sorat --;
    }
      ui->moneyUpdate_3->setText(QString::number(w3.pool));

      ui->afzayesheLevel_3->setText(QString::number(w3.afzayeshelevel));

  }
    if(w3.daramad<0)
    {
        w3.daramad =0;
    }

    ui->Daramad->setText(QString::number(w3.daramad));
}
}

void job::on_timerClick_4_clicked()
{
    if (w3.daramad>= w4.gheymat && w4.count==0)
    {
           QMessageBox msgBox;
           msgBox.setText("you can buy a new job :D ");
           msgBox.setInformativeText("Click Save to unlock the job or Discard to be locked yet");
           msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard);
           msgBox.setDefaultButton(QMessageBox::Discard);
           int ret = msgBox.exec();
           switch (ret) {
           case QMessageBox::Save:
               w4.count = 1;
               w4.ok = 5;
               w4.sw = 1;
               w4.zaman = w4.sorat ;
               ui->moment_4->setText(QString::number(w4.zaman));
               w4.daramad = w3.daramad - w4.gheymat;
               ui->Daramad->setText(QString::number(w4.daramad));
               break;
           case QMessageBox::Discard:
               w4.sw = 0;
               break;
           default:
               break; }
    }
    else if(w4.count == 1)
    {
        w4.ok = 5;
        w4.sw = 1;
        w4.zaman = w4.sorat ;
        ui->moment_4->setText(QString::number(w4.zaman));
        w4.daramad = w3.daramad - w4.gheymat;
        ui->Daramad->setText(QString::number(w4.daramad));
    }

}

void job::on_moneyPlus_4_clicked()
{
if(w4.ok == 5){
    //w4.sw = 1;
    w4.level ++;
    ui->level_4->setText(QString::number(w4.level));
    if(w4.daramad<0)
    {
        w4.daramad =0;
    }

if( w4.daramad >= 0)
{
    w4.pool ++;
    //afzayeshelevel ++;
    if(w4.level == 7)
   {
        w4.afzayeshelevel ++;
    }
    w4.daramad = w4.daramad - w4.afzayeshelevel;
    ui->pbar_4->setMaximum(w4.sorat);

    if(w4.level%10 == 0)
    {
        w4.sorat --;
    }
      ui->moneyUpdate_4->setText(QString::number(w4.pool));

      ui->afzayesheLevel_4->setText(QString::number(w4.afzayeshelevel));

  }

if(w4.daramad<0)
   w4.daramad = 0;
ui->Daramad->setText(QString::number(w4.daramad));
}
}
void job::on_timerClick_5_clicked()
{
    if (w4.daramad>= w5.gheymat && w5.count==0)
    {
           QMessageBox msgBox;
           msgBox.setText("you can buy a new job :D ");
           msgBox.setInformativeText("Click Save to unlock the job or Discard to be locked yet");
           msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard);
           msgBox.setDefaultButton(QMessageBox::Discard);
           int ret = msgBox.exec();
           switch (ret) {
           case QMessageBox::Save:
               w5.count = 1;
               w5.ok = 5;
               w5.sw = 1;
               w5.zaman = w5.sorat ;
               ui->moment_5->setText(QString::number(w5.zaman));
               w5.daramad = w4.daramad - w5.gheymat;
               ui->Daramad->setText(QString::number(w5.daramad));
               break;
           case QMessageBox::Discard:
               w5.sw = 0;
               break;
           default:
               break; }
    }
    else if(w5.count == 1)
    {
        w5.ok = 5;
        w5.sw = 1;
        w5.zaman = w5.sorat ;
        ui->moment_5->setText(QString::number(w5.zaman));
        w5.daramad = w4.daramad - w5.gheymat;
        ui->Daramad->setText(QString::number(w5.daramad));
    }

}

void job::on_moneyPlus_5_clicked()
{
if(w5.ok == 5){
  //  w5.sw = 1;
    w5.level ++;
    ui->level_5->setText(QString::number(w5.level));
    if(w5.daramad<0)
    {
        w5.daramad =0;
    }

if( w5.daramad >= 0)
{
    w5.pool ++;
    //afzayeshelevel ++;
    if(w5.level == 7)
   {
        w5.afzayeshelevel ++;
    }
    w5.daramad = w5.daramad - w5.afzayeshelevel;
    ui->pbar_5->setMaximum(w5.sorat);

    if(w5.level%10 == 0)
    {
        w5.sorat --;
    }



      ui->moneyUpdate_5->setText(QString::number(w5.pool));

      ui->afzayesheLevel_5->setText(QString::number(w5.afzayeshelevel));


  }

if(w5.daramad<0)
   w5.daramad = 0;
 ui->Daramad->setText(QString::number(w5.daramad));
}
}
void job::on_timerClick_6_clicked()
{
    if (w5.daramad>= w6.gheymat && w6.count==0)
    {
           QMessageBox msgBox;
           msgBox.setText("you can buy a new job :D ");
           msgBox.setInformativeText("Click Save to unlock the job or Discard to be locked yet");
           msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard);
           msgBox.setDefaultButton(QMessageBox::Discard);
           int ret = msgBox.exec();
           switch (ret) {
           case QMessageBox::Save:
               w6.count = 1;
               w6.ok = 5;
               w6.sw = 1;
               w6.zaman = w6.sorat ;
               ui->moment_6->setText(QString::number(w6.zaman));
               w6.daramad = w5.daramad - w6.gheymat;
               ui->Daramad->setText(QString::number(w6.daramad));
               break;
           case QMessageBox::Discard:
               w6.sw = 0;
               break;
           default:
               break; }

    }
    else if(w6.count == 1)
    {
        w6.ok = 5;
        w6.sw = 1;
        w6.zaman = w6.sorat ;
        ui->moment_6->setText(QString::number(w6.zaman));
        w6.daramad = w5.daramad - w6.gheymat;
        ui->Daramad->setText(QString::number(w6.daramad));
    }

}

void job::on_moneyPlus_6_clicked()
{
if(w6.ok==5){
    //w6.sw = 1;
    w6.level ++;
    ui->level_6->setText(QString::number(w6.level));
    if(w6.daramad<0)
    {
        w6.daramad =0;
    }

if( w6.daramad >= 0)
{
    w6.pool ++;
    //afzayeshelevel ++;
    if(w6.level == 7)
   {
        w6.afzayeshelevel ++;
    }
    w6.daramad = w6.daramad - w6.afzayeshelevel;
    ui->pbar_6->setMaximum(w6.sorat);

    if(w6.level%10 == 0)
    {
        w6.sorat --;
    }
      ui->moneyUpdate_6->setText(QString::number(w6.pool));

      ui->afzayesheLevel_6->setText(QString::number(w6.afzayeshelevel));

  }
if(w6.daramad<0)
{
    w6.daramad =0;
}

ui->Daramad->setText(QString::number(w6.daramad));
}
}

void job::on_timerClick_7_clicked()
{
    if (w6.daramad>= w7.gheymat && w7.count==0)
    {
           QMessageBox msgBox;
           msgBox.setText("you can buy a new job :D ");
           msgBox.setInformativeText("Click Save to unlock the job or Discard to be locked yet");
           msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard);
           msgBox.setDefaultButton(QMessageBox::Discard);
           int ret = msgBox.exec();
           switch (ret) {
           case QMessageBox::Save:
               w7.count = 1;
               w7.ok = 5;
               w7.sw = 1;
               w7.zaman = w7.sorat ;
               ui->moment_7->setText(QString::number(w7.zaman));
               w7.daramad = w6.daramad - w7.gheymat;
               ui->Daramad->setText(QString::number(w7.daramad));
               break;
           case QMessageBox::Discard:
               w7.sw = 0;
               break;
           default:
               break; }
    }
    else if(w7.count == 1)
    {
        w7.ok = 5;
        w7.sw = 1;
        w7.zaman = w7.sorat ;
        ui->moment_7->setText(QString::number(w7.zaman));
        w7.daramad = w6.daramad - w7.gheymat;
        ui->Daramad->setText(QString::number(w7.daramad));
    }

}

void job::on_moneyPlus_7_clicked()
{
if(w7.ok==5){
    //w7.sw = 1;
    w7.level ++;
    ui->level_7->setText(QString::number(w7.level));
    if(w7.daramad<0)
    {
        w7.daramad =0;
    }

if( w7.daramad >= 0)
{
    w7.pool ++;
    //afzayeshelevel ++;
    if(w7.level == 7)
   {
        w7.afzayeshelevel ++;
    }
    w7.daramad = w7.daramad - w7.afzayeshelevel;
    ui->pbar_7->setMaximum(w7.sorat);

    if(w7.level%10 == 0)
    {
        w7.sorat --;
    }
      ui->moneyUpdate_7->setText(QString::number(w7.pool));

      ui->afzayesheLevel_7->setText(QString::number(w7.afzayeshelevel));
  }
if(w7.daramad<0)
{
    w7.daramad =0;
}

ui->Daramad->setText(QString::number(w7.daramad));
}
}

void job::on_timerClick_8_clicked()
{
    if (w7.daramad>= w8.gheymat && w8.count==0)
    {
           QMessageBox msgBox;
           msgBox.setText("you can buy a new job :D ");
           msgBox.setInformativeText("Click Save to unlock the job or Discard to be locked yet");
           msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard);
           msgBox.setDefaultButton(QMessageBox::Discard);
           int ret = msgBox.exec();
           switch (ret) {
           case QMessageBox::Save:
               w8.count = 1;
               w8.ok = 5;
               w8.sw = 1;
               w8.zaman = w8.sorat ;
               ui->moment_8->setText(QString::number(w8.zaman));
               w8.daramad = w7.daramad - w8.gheymat;
               ui->Daramad->setText(QString::number(w8.daramad));
               break;
           case QMessageBox::Discard:
               w8.sw = 0;
               break;
           default:
               break; }
    }
    else if(w8.count == 1)
    {
        w8.ok = 5;
        w8.sw = 1;
        w8.zaman = w8.sorat ;
        ui->moment_8->setText(QString::number(w8.zaman));
        w8.daramad = w7.daramad - w8.gheymat;
        ui->Daramad->setText(QString::number(w8.daramad));
    }

}

void job::on_moneyPlus_8_clicked()
{
if(w8.ok==5){
    //w8.sw = 1;
    w8.level ++;
    ui->level_8->setText(QString::number(w8.level));
    if(w8.daramad<0)
    {
        w8.daramad =0;
    }

if( w8.daramad >= 0)
{
    w8.pool ++;
    //afzayeshelevel ++;
    if(w8.level == 7)
   {
        w8.afzayeshelevel ++;
    }
    w8.daramad = w8.daramad - w8.afzayeshelevel;
    ui->pbar_8->setMaximum(w8.sorat);

    if(w8.level%10 == 0)
    {
        w8.sorat --;
    }

      ui->moneyUpdate_8->setText(QString::number(w8.pool));

      ui->afzayesheLevel_8->setText(QString::number(w8.afzayeshelevel));
  }
if(w8.daramad<0)
{
    w8.daramad =0;
}
 ui->Daramad->setText(QString::number(w8.daramad));
 }
}
