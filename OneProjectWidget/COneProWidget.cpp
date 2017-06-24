#include "COneProWidget.h"
#include <QBoxLayout>
COneProWidget::COneProWidget(QWidget *parent) : QWidget(parent)
{
    this->resize(1000, 500);
    m_pProjectInfoWidget = new CProjectInfoWidget(this);
    m_pNaturePeakWidget = new CNaturePeakWidget(this);
    m_pBasisDataWidget = new CBasisDataWidget(this);
    // 头部区域
    QVBoxLayout *pLayout = new  QVBoxLayout;
    pLayout->addWidget(m_pProjectInfoWidget);
    // 中间区域
    QHBoxLayout *pPeakBasisLayout = new QHBoxLayout;
    pPeakBasisLayout->addWidget(m_pNaturePeakWidget);
    pPeakBasisLayout->addWidget(m_pBasisDataWidget);


    //
    pLayout->addLayout(pPeakBasisLayout);
    this->setLayout(pLayout);
}
