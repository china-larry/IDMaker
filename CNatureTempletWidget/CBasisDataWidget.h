#ifndef CBASISDATAWIDGET_H
#define CBASISDATAWIDGET_H
// 测试值T2/C 面板
#include <QWidget>
#include <QLabel>
#include "CGeneralWidget/CLabelComboxWidget.h"
#include "CGeneralWidget/CLabelLineEditWidget.h"
class CBasisDataWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CBasisDataWidget(QWidget *parent = 0);

signals:

public slots:
private:
    void initWidget();
    void initLayout();
private:
    //1 line
    // 测试值
    CLabelComboxWidget *m_pTestValueLCWidget;
    // 使用区域
    CLabelComboxWidget *m_pUseAreaLCWidget;
    // 2 line
    //血清血浆
    CLabelLineEditWidget *m_pSerumLLWidget;
    // 全血系数
    CLabelLineEditWidget *m_pWholeBloodLLWidget;
    // a1(未知数据，当前猜测为全血a1)
    CLabelLineEditWidget *m_pBloodA1LLWidget;
    // 报告单标题
    CLabelLineEditWidget *m_pReportTitleLLWidget;
    // 3 line
    // 质控液系数
    CLabelLineEditWidget *m_pQualityControlLLWidget;
    // 粪便系数
    CLabelLineEditWidget *m_pStoolValueLLWidget;
    // B（未知数据，猜测为粪便数据B）
    CLabelLineEditWidget *m_pStoolBValueLLWidget;
    // 单位
    CLabelLineEditWidget *m_pUnitLLWidget;
    // 倒计时
    CLabelLineEditWidget *m_pCountdownLLWidget;
    // 4 line
    // 尿液系数
    CLabelLineEditWidget *m_pUrineValueLLWidget;
    // a(未知数据，猜测为尿液a)
    CLabelLineEditWidget *m_pUrineAValueLLWidget;
    // b1(未知数据，猜测为尿液b1)
    CLabelLineEditWidget *m_pUrineB1ValueLLWidget;
    // 小数位数
    CLabelLineEditWidget *m_pDecimalPlaceLLWidget;
    // 测试时间
    CLabelLineEditWidget *m_pTestTimeLLWidget;
};

#endif // CBASISDATAWIDGET_H
