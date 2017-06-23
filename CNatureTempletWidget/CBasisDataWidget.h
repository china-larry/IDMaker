#ifndef CBASISDATAWIDGET_H
#define CBASISDATAWIDGET_H
// 测试值T2/C 面板
#include <QWidget>
#include <QLabel>
#include <QComboBox>
#include <QLineEdit>

class CBasisDataWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CBasisDataWidget(QWidget *parent = 0);

signals:

public slots:

private:
    //1 line
    // 测试值
    QLabel *m_pTestValueLabel;
    QComboBox *m_pTestValueCBox;
    // 使用区域
    QLabel *m_pUseAreaLabel;
    QComboBox *m_pUseAreaCBox;
    // 2 line
    //血清血浆
    QLabel *m_pSerumLabel;
    QLineEdit *m_pSerumLineEdit;
    // 全血系数
    QLabel *m_pWholeBloodLabel;
    QLineEdit *m_pWholeBloodLineEdit;
    // a1(未知数据，当前猜测为全血a1)
    QLabel *m_pBloodA1Label;
    QLineEdit *m_pBloodA1LineEdit;
    // 报告单标题
    QLabel *m_pReportTitleLabel;
    QLineEdit *m_pReportTitleLineEdit;
    // 3 line
    // 质控液系数
    QLabel *m_pQualityControlLabel;
    QLineEdit *m_pQualityControlLineEdit;
    // 粪便系数
    QLabel *m_pStoolValueLabel;
    QLineEdit *m_pStoolValueLineEdit;
    // B（未知数据，猜测为粪便数据B）
    QLabel *m_pStoolBValueLabel;
    QLineEdit *m_pStoolBValueLineEdit;
    // 单位
    QLabel *m_pUnitLabel;
    QLineEdit *m_pUnitLineEdit;
    // 倒计时
    QLabel *m_pCountdownLabel;
    QLineEdit *m_pCountdownLineEdit;
    // 4 line
    // 尿液系数
    QLabel *m_pUrineValueLabel;
    QLineEdit *m_pUrineValueLineEdit;
    // a(未知数据，猜测为尿液a)
    QLabel *m_pUrineAValueLabel;
    QLineEdit *m_pUrineAValueLineEdit;
    // b1(未知数据，猜测为尿液b1)
    QLabel *m_pUrineB1ValueLabel;
    QLineEdit *m_pUrineB1ValueLineEdit;
    // 小数位数
    QLabel *m_pDecimalPlaceLabel;
    QLineEdit *m_pDecimalPlaceLineEdit;
    // 测试时间
    QLabel *m_pTestTimeLabel;
    QLineEdit *m_pTestTimeLineEdit;
};

#endif // CBASISDATAWIDGET_H
