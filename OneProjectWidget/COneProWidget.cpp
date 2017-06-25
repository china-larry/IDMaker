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
    m_pFC2TableWidget = new CFC2TableWidget(this);
    // 头部区域
    QVBoxLayout *pLayout = new  QVBoxLayout;
    pLayout->addWidget(m_pProjectInfoWidget);
    // 中间区域
    QHBoxLayout *pPeakBasisLayout = new QHBoxLayout;
    pPeakBasisLayout->addWidget(m_pNaturePeakWidget);
    pPeakBasisLayout->addWidget(m_pBasisDataWidget);
    pLayout->addLayout(pPeakBasisLayout);
    // 第三排
    QHBoxLayout *pFCLayout = new QHBoxLayout;
    // 左侧
    QVBoxLayout *pFC2Layout = new QVBoxLayout;
    pFC2Layout->addWidget(m_pFC2PeakWidget);
    pFC2Layout->addWidget(m_pFC2SectionWidget);
    pFC2Layout->addWidget(m_pFCPlusPeakWidget);
    // 中间
    pFCLayout->addLayout(pFC2Layout);
    pFCLayout->addWidget(m_pFC2TableWidget);
    //
    pLayout->addLayout(pFCLayout);
    //
    this->setLayout(pLayout);
}
