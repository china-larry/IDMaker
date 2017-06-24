#ifndef CLABELCOMBOXWIDGET_H
#define CLABELCOMBOXWIDGET_H
// 组合控件
#include <QLabel>
#include <QComboBox>

class CLabelComboxWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CLabelComboxWidget(QWidget *parent = 0);
    explicit CLabelComboxWidget(QString qstrLabel, QStringList qstrlistComboBox, QWidget *parent = 0);


private:
    QLabel *m_pLabel;
    QComboBox *m_pComboBox;
};

#endif // CLABELCOMBOXWIDGET_H
