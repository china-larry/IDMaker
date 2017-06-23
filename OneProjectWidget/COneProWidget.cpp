#include "COneProWidget.h"
#include <QBoxLayout>
COneProWidget::COneProWidget(QWidget *parent) : QWidget(parent)
{
    this->resize(1000, 500);
    m_pProjectInfoWidget = new CProjectInfoWidget(this);

    //
    QVBoxLayout *pLayout = new  QVBoxLayout;
    pLayout->addWidget(m_pProjectInfoWidget);

    this->setLayout(pLayout);
}
