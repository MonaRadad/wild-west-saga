#ifndef JOB_H
#define JOB_H

#include <QMainWindow>

namespace Ui {
class job;
}

class job : public QMainWindow
{
    Q_OBJECT

public:
    explicit job(QWidget *parent = 0);
    ~job();




private slots:
    void updateClock();

    void updateClock2();

    void updateClock3();

    void updateClock4();

    void updateClock5();

    void updateClock6();

    void updateClock7();

    void updateClock8();

    void on_timerClick_clicked();
    void on_moneyPlus_clicked();

    void on_timerClick_2_clicked();

    void on_moneyPlus_2_clicked();

    void on_timerClick_3_clicked();

    void on_moneyPlus_3_clicked();

    void on_timerClick_4_clicked();

    void on_moneyPlus_4_clicked();

    void on_timerClick_5_clicked();

    void on_moneyPlus_5_clicked();

    void on_timerClick_6_clicked();

    void on_moneyPlus_6_clicked();

    void on_timerClick_7_clicked();

    void on_moneyPlus_7_clicked();

    void on_timerClick_8_clicked();

    void on_moneyPlus_8_clicked();

private:
    Ui::job *ui;

};

#endif // JOB_H

