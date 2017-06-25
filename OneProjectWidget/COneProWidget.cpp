#include "COneProWidget.h"
#include <QBoxLayout>
COneProWidget::COneProWidget(QWidget *parent) : QWidget(parent)
{
    this->resize(1000, 500);
    m_pProjectInfoWidget = new CProjectInfoWidget(this);
    m_pNaturePeakWidget = new CNaturePeakWidget(this);
    m_pBasisDataWidget = new CBasisDataWidget(this);
    m_pFC2PeakWidget = new CFC2PeakWidget(this);
    m_pFC2SectionWidget = new CFC2SectionWidget(this);
    m_pFCPlusPeakWidget = new CFCPlusPeakWidget(this);
    // 头部区域
    QVBoxLayout *pLayout = new  QVBoxLayout;
    pLayout->addWidget(m_pProjectInfoWidget);
    // 中间区域
    QHBoxLayout *pPeakBasisLayout = new QHBoxLayout;
    pPeakBasisLayout->addWidget(m_pNaturePeakWidget);
    pPeakBasisLayout->addWidget(m_pBasisDataWidget);
    pLayout->addLayout(pPeakBasisLayout);
    // 第三排
    pLayout->addWidget(m_pFC2PeakWidget);
    pLayout->addWidget(m_pFC2SectionWidget);
    pLayout->addWidget(m_pFCPlusPeakWidget);
    //
    this->setLayout(pLayout);
}
