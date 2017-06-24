#include "CLabelComboxWidget.h"
#include <QBoxLayout>


CLabelComboxWidget::CLabelComboxWidget(QWidget *parent)
{
    m_pLabel = new QLabel(this);
    m_pComboBox = new QComboBox(this);
}

CLabelComboxWidget::CLabelComboxWidget(QString qstrLabel, QStringList qstrlistComboBox, QWidget *parent)
{
    m_pLabel = new QLabel(qstrLabel, parent);
    m_pComboBox = new QComboBox(parent);
    m_pComboBox->addItems(qstrlistComboBox);
    //
    QHBoxLayout *pLayout = new QHBoxLayout;
    pLayout->addWidget(m_pLabel);
    pLayout->addWidget(m_pComboBox);
    this->setLayout(pLayout);
}
