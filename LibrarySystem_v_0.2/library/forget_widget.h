#ifndef FORGET_WIDGET_H
#define FORGET_WIDGET_H

#include <QWidget>
#include <QMessageBox>
#include <QDebug>
#include <QPoint>
#include <QMouseEvent>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlQuery>

namespace Ui {
class forget_widget;
}

class forget_widget : public QWidget
{
    Q_OBJECT

public:
    explicit forget_widget(QWidget *parent = 0);
    ~forget_widget();
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);


private slots:
    void on_confirm_pushButton_clicked();

private:
    Ui::forget_widget *ui;
    QSqlTableModel *model_for;
    QPoint p1;
};

#endif // FORGET_WIDGET_H
