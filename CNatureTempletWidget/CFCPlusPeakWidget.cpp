#include "CFCPlusPeakWidget.h"
#include <QBoxLayout>
CFCPlusPeakWidget::CFCPlusPeakWidget(QWidget *parent) : QWidget(parent)
{
    initWidget();
    initLayout();
}

void CFCPlusPeakWidget::initWidget()
{
    m_pFC2PeakWidget = new CFC2PeakWidget(this);
    m_pCurvePushButton = new QPushButton("曲线定标", this);
}

void CFCPlusPeakWidget::initLayout()
{
    QHBoxLayout *pLayout = new QHBoxLayout;
    pLayout->addWidget(m_pFC2PeakWidget);
    pLayout->addWidget(m_pCurvePushButton);
    this->setLayout(pLayout);

}
