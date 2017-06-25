#ifndef CFCPLUSPEAKWIDGET_H
#define CFCPLUSPEAKWIDGET_H
// 飞测plus以上设备定标
#include <QWidget>
#include <QPushButton>
#include "CFC2PeakWidget.h"
class CFCPlusPeakWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CFCPlusPeakWidget(QWidget *parent = 0);

signals:

public slots:
private:
    void initWidget();
    void initLayout();
private:
    CFC2PeakWidget *m_pFC2PeakWidget;
    QPushButton *m_pCurvePushButton;
};

#endif // CFCPLUSPEAKWIDGET_H
