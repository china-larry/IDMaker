#ifndef CFC2PEAKWIDGET_H
#define CFC2PEAKWIDGET_H
// 飞测2临界值
#include <QWidget>
#include <QCheckBox>
#include "CGeneralWidget/CLabelComboxWidget.h"
#include "CGeneralWidget/CLabelLineEditWidget.h"
class CFC2PeakWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CFC2PeakWidget(QWidget *parent = 0);

signals:

public slots:

private:
    void initWidget();
    void initLayout();
private:
    // 第一排峰值
    CLabelComboxWidget *m_pPeakNameLCWidget01;
    QCheckBox *m_pToTopFlagCheckBox;// 冲顶
    CLabelLineEditWidget *m_pToTopValueLLWidget;
    // 第二排峰值
    CLabelComboxWidget *m_pPeakNameLCWidget02;
    QCheckBox *m_pAddSampleFlagCheckBox;// 加样
    CLabelLineEditWidget *m_pAddSampleValueLLWidget;
};

#endif // CFC2PEAKWIDGET_H
