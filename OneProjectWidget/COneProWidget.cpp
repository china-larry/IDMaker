#include "COneProWidget.h"
#include <QBoxLayout>
COneProWidget::COneProWidget(QWidget *parent) : QWidget(parent)
{
    this->resize(1000, 500);
    m_pProjectInfoWidget = new CProjectInfoWidget(this);
    m_pNaturePeakWidget = new CNaturePeakWidget(this);
    //
    QVBoxLayout *pLayout = new  QVBoxLayout;
    pLayout->addWidget(m_pProjectInfoWidget);
    pLayout->addWidget(m_pNaturePeakWidget);

    this->setLayout(pLayout);
}
