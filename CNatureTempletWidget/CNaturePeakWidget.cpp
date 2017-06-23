#include "CNaturePeakWidget.h"
#include <QBoxLayout>
CNaturePeakWidget::CNaturePeakWidget(QWidget *parent) : QWidget(parent)
{
    initWidget();
    initLayout();
}

void CNaturePeakWidget::initWidget()
{
    // 峰值名称
    m_pPeakNameLabel = new QLabel("峰值名称", this);
    m_pT1PeakNameCBox = new QComboBox(this);
    m_pT2PeakNameCBox = new QComboBox(this);
    m_pCPeakNameCBox = new QComboBox(this);
    QStringList qstrListTmp = {"T1", "T2", "C"};
    m_pT1PeakNameCBox->addItems(qstrListTmp);
    m_pT2PeakNameCBox->addItems(qstrListTmp);
    m_pT2PeakNameCBox->setCurrentIndex(1);
    m_pCPeakNameCBox->addItems(qstrListTmp);
    m_pCPeakNameCBox->setCurrentIndex(2);
    // 开始位置
    m_pStartLabel = new QLabel("开始位置", this);
    m_pT1StartPosLineEdit = new QLineEdit("0", this);
    m_pT1StartPosLineEdit->setMaximumSize(50, 20);
    m_pT2StartPosLineEdit = new QLineEdit("61", this);
    m_pT2StartPosLineEdit->setMaximumSize(50, 20);
    m_pCStartPosLineEdit = new QLineEdit("121", this);
    m_pCStartPosLineEdit->setMaximumSize(50, 20);
    // -Label
    m_pLineLabel01 = new QLabel(" — ", this);
    m_pLineLabel02 = new QLabel(" — ", this);
    m_pLineLabel03 = new QLabel(" — ", this);
    ;
    // 结束位置
    m_pEndPosLabel = new QLabel("结束位置", this);
    m_pT1EndPosLineEdit = new QLineEdit("60", this);
    m_pT1EndPosLineEdit->setMaximumSize(50, 20);
    m_pT2EndPosLineEdit = new QLineEdit("120", this);
    m_pT2EndPosLineEdit->setMaximumSize(50, 20);
    m_pCEndPosLineEdit = new QLineEdit("174", this);
    m_pCEndPosLineEdit->setMaximumSize(50, 20);
    // 取值数量
    m_pValueLabel = new QLabel("取值数量", this);
    m_pT1ValueLineEdit = new QLineEdit("5", this);
    m_pT1ValueLineEdit->setMaximumSize(50, 20);
    m_pT2ValueLineEdit = new QLineEdit("5", this);
    m_pT2ValueLineEdit->setMaximumSize(50, 20);
    m_pCValueLineEdit = new QLineEdit("5", this);
    m_pCValueLineEdit->setMaximumSize(50, 20);
}

void CNaturePeakWidget::initLayout()
{
    QGridLayout *pGridLayout = new QGridLayout;
    // 1行
    pGridLayout->addWidget(m_pPeakNameLabel, 0, 0);
    pGridLayout->addWidget(m_pStartLabel, 0, 1);
    //pGridLayout->addWidget(m_pLineLabel, 0, 2);
    pGridLayout->addWidget(m_pEndPosLabel, 0, 3);
    pGridLayout->addWidget(m_pValueLabel, 0, 4);
    // 2行
    pGridLayout->addWidget(m_pT1PeakNameCBox, 1, 0);
    pGridLayout->addWidget(m_pT1StartPosLineEdit, 1, 1);
    pGridLayout->addWidget(m_pLineLabel01, 1, 2);
    pGridLayout->addWidget(m_pT1EndPosLineEdit, 1, 3);
    pGridLayout->addWidget(m_pT1ValueLineEdit, 1, 4);
    // 3行
    pGridLayout->addWidget(m_pT2PeakNameCBox, 2, 0);
    pGridLayout->addWidget(m_pT2StartPosLineEdit, 2, 1);
    pGridLayout->addWidget(m_pLineLabel02, 2, 2);
    pGridLayout->addWidget(m_pT2EndPosLineEdit, 2, 3);
    pGridLayout->addWidget(m_pT2ValueLineEdit, 2, 4);
    // 4行
    pGridLayout->addWidget(m_pCPeakNameCBox, 3, 0);
    pGridLayout->addWidget(m_pCStartPosLineEdit, 3, 1);
    pGridLayout->addWidget(m_pLineLabel03, 3, 2);
    pGridLayout->addWidget(m_pCEndPosLineEdit, 3, 3);
    pGridLayout->addWidget(m_pCValueLineEdit, 3, 4);
    //
    this->setLayout(pGridLayout);
}
