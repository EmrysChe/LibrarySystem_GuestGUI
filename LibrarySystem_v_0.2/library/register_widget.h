#ifndef REGISTER_WIDGET_H
#define REGISTER_WIDGET_H

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
class register_widget;
}

class register_widget : public QWidget
{
    Q_OBJECT

public:
    explicit register_widget(QWidget *parent = 0);
    ~register_widget();
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);


private slots:
    void on_comfirm_pushButton_clicked();

private:
    Ui::register_widget *ui;
    QSqlTableModel *model_reg;
    QPoint p1;
};

#endif // REGISTER_WIDGET_H
