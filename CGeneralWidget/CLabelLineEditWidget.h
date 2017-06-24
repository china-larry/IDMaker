#ifndef CLABELLINEEDITWIDGET_H
#define CLABELLINEEDITWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
// 组合控件
class CLabelLineEditWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CLabelLineEditWidget(QWidget *parent = 0);
    explicit CLabelLineEditWidget(QString qstrLabel, QString qstrLineEdit, QWidget *parent = 0);


private:
    QLabel *m_pLabel;
    QLineEdit *m_pLineEdit;
};

#endif // CLABELLINEEDITWIDGET_H
