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
    m_pT1PeakNameCBox->setMinimumWidth(50);
    m_pT2PeakNameCBox->setMinimumWidth(50);
    m_pCPeakNameCBox->setMinimumWidth(50);
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
    QVBoxLayout *pLayout = new QVBoxLayout;
    //
    QHBoxLayout *pLine1HLayout = new QHBoxLayout;
    pLine1HLayout->addWidget(m_pPeakNameLabel);
    pLine1HLayout->addWidget(m_pStartLabel);
    pLine1HLayout->addSpacing(20);
    pLine1HLayout->addWidget(m_pEndPosLabel);
    pLine1HLayout->addWidget(m_pValueLabel);
    QHBoxLayout *pLine2HLayout = new QHBoxLayout;
    pLine2HLayout->addWidget(m_pT1PeakNameCBox);
    pLine2HLayout->addWidget(m_pT1StartPosLineEdit);
    pLine2HLayout->addWidget(m_pLineLabel01);
    pLine2HLayout->addWidget(m_pT1EndPosLineEdit);
    pLine2HLayout->addWidget(m_pT1ValueLineEdit);
    QHBoxLayout *pLine3HLayout = new QHBoxLayout;
    pLine3HLayout->addWidget(m_pT2PeakNameCBox);
    pLine3HLayout->addWidget(m_pT2StartPosLineEdit);
    pLine3HLayout->addWidget(m_pLineLabel02);
    pLine3HLayout->addWidget(m_pT2EndPosLineEdit);
    pLine3HLayout->addWidget(m_pT2ValueLineEdit);
    QHBoxLayout *pLine4HLayout = new QHBoxLayout;
    pLine4HLayout->addWidget(m_pCPeakNameCBox);
    pLine4HLayout->addWidget(m_pCStartPosLineEdit);
    pLine4HLayout->addWidget(m_pLineLabel03);
    pLine4HLayout->addWidget(m_pCEndPosLineEdit);
    pLine4HLayout->addWidget(m_pCValueLineEdit);
    //
    pLayout->addLayout(pLine1HLayout);
    pLayout->addLayout(pLine2HLayout);
    pLayout->addLayout(pLine3HLayout);
    pLayout->addLayout(pLine4HLayout);
    pLayout->addStretch(100);
    //
    this->setLayout(pLayout);

//    //
//    this->setLayout(pGridLayout);
}
