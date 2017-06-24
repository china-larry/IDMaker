#include "CLabelLineEditWidget.h"
#include <QBoxLayout>

CLabelLineEditWidget::CLabelLineEditWidget(QWidget *parent) : QWidget(parent)
{
    m_pLabel = new QLabel(parent);
    m_pLineEdit = new QLineEdit(parent);
}

CLabelLineEditWidget::CLabelLineEditWidget(QString qstrLabel, QString qstrLineEdit, QWidget *parent)
{
    m_pLabel = new QLabel(qstrLabel, parent);
    m_pLineEdit = new QLineEdit(qstrLineEdit ,parent);
    //
    QHBoxLayout *pLayout = new QHBoxLayout;
    pLayout->addWidget(m_pLabel);
    pLayout->addWidget(m_pLineEdit);
    this->setLayout(pLayout);
}
