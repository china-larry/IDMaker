#include "CFC2PeakWidget.h"
#include <QBoxLayout>

CFC2PeakWidget::CFC2PeakWidget(QWidget *parent) : QWidget(parent)
{
    initWidget();
    initLayout();
}

void CFC2PeakWidget::initWidget()
{
    // 第一排峰值
    QStringList qstrlistPeakName;
    qstrlistPeakName << "X1" << "X2" << "X3" << "X4";
    m_pPeakNameLCWidget01 = new CLabelComboxWidget("峰值名称：", qstrlistPeakName, this);
    m_pToTopFlagCheckBox = new QCheckBox("判断是否冲顶", this);
    m_pToTopFlagCheckBox->setChecked(true);
    m_pToTopValueLLWidget = new CLabelLineEditWidget("值：", "260000", this);
    // 第二排峰值
    m_pPeakNameLCWidget02 = new CLabelComboxWidget("峰值名称：", qstrlistPeakName, this);
    m_pAddSampleFlagCheckBox = new QCheckBox("判断是否加样", this);
    m_pAddSampleFlagCheckBox->setChecked(true);
    m_pAddSampleValueLLWidget = new CLabelLineEditWidget("值：", "4000", this);
}

void CFC2PeakWidget::initLayout()
{
    QVBoxLayout *pLayout = new QVBoxLayout;
    //
    QHBoxLayout *pHLayout01 = new QHBoxLayout;
    pHLayout01->addWidget(m_pPeakNameLCWidget01);
    pHLayout01->addWidget(m_pToTopFlagCheckBox);
    pHLayout01->addWidget(m_pToTopValueLLWidget);
    //
    QHBoxLayout *pHLayout02 = new QHBoxLayout;
    pHLayout02->addWidget(m_pPeakNameLCWidget02);
    pHLayout02->addWidget(m_pAddSampleFlagCheckBox);
    pHLayout02->addWidget(m_pAddSampleValueLLWidget);
    //
    pLayout->addLayout(pHLayout01);
    pLayout->addLayout(pHLayout02);
    //
    this->setLayout(pLayout);
}
