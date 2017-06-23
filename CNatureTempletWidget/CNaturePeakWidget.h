#ifndef CNATUREPEAKWIDGET_H
#define CNATUREPEAKWIDGET_H

#include <QWidget>
#include <QComboBox>
#include <QLineEdit>
#include <QLabel>
class CNaturePeakWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CNaturePeakWidget(QWidget *parent = 0);

signals:

public slots:
private:
    void initWidget();
    void initLayout();
private:
    // 峰值名称
    QLabel *m_pPeakNameLabel;
    QComboBox *m_pT1PeakNameCBox;
    QComboBox *m_pT2PeakNameCBox;
    QComboBox *m_pCPeakNameCBox;
    // 开始位置
    QLabel *m_pStartLabel;
    QLineEdit *m_pT1StartPosLineEdit;
    QLineEdit *m_pT2StartPosLineEdit;
    QLineEdit *m_pCStartPosLineEdit;
    // -Label临时的-label
    QLabel *m_pLineLabel01;// -
    QLabel *m_pLineLabel02;// -
    QLabel *m_pLineLabel03;// -
    // 结束位置
    QLabel *m_pEndPosLabel;
    QLineEdit *m_pT1EndPosLineEdit;
    QLineEdit *m_pT2EndPosLineEdit;
    QLineEdit *m_pCEndPosLineEdit;
    // 取值数量
    QLabel *m_pValueLabel;
    QLineEdit *m_pT1ValueLineEdit;
    QLineEdit *m_pT2ValueLineEdit;
    QLineEdit *m_pCValueLineEdit;
};

#endif // CNATUREPEAKWIDGET_H
