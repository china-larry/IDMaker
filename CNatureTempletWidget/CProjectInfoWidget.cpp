#include "CProjectInfoWidget.h"
#include <QBoxLayout>
CProjectInfoWidget::CProjectInfoWidget(QWidget *parent) : QWidget(parent)
{
    this->resize(1000, 80);
    //
    initWidget();
    //
    initLayout();
}

void CProjectInfoWidget::initWidget()
{
    // 产品代码
    m_pProCodeLabel = new QLabel("产品代码：", this);
    m_pProCodeCBox = new QComboBox(this);
    for(int i = 0; i < 256; i++)
    {
        m_pProCodeCBox->insertItem(i, QString::number(i));
    }
    // 年
    m_pProYearLabel = new QLabel("年：", this);
    m_pProYearCBox = new QComboBox(this);
    for(int i = 0; i < 30; i++)
    {
        m_pProYearCBox->insertItem(i, QString::number(i+2012));
    }
    // 月
    m_pProMonthLabel = new QLabel("月：", this);
    m_pProMonthCBox = new QComboBox(this);
    for(int i = 1; i < 13; i++)
    {
        m_pProMonthCBox->insertItem(i, QString::number(i));
    }
    // 流水号
    m_pProSerialNumLabel = new QLabel("流水号：", this);
    m_pProSerialNumCBox = new QComboBox(this);
    for(int i = 1; i < 17; i++)
    {
        m_pProSerialNumCBox->insertItem(i, QString::number(i));
    }
    // 批号前缀
    m_pBatchPreNumLabel = new QLabel("批号前缀：", this);
    m_pBatchPreNumLineEdit = new QLineEdit(this);
    //m_pBatchPreNumLineEdit->setMaximumWidth(30);
    // 产品批号
    m_pProBatchLabel = new QLabel("产品批号：", this);
    m_pProBatchLineEdit = new QLineEdit(this);
    //m_pProBatchLineEdit->setMaximumWidth(30);
    // 条码号
    m_pBarcodeNumLabel = new QLabel("条码号：", this);
    m_pBarcodeNumLineEdit = new QLineEdit(this);
    //m_pBarcodeNumLineEdit->setMaximumWidth(30);
}

void CProjectInfoWidget::initLayout()
{
    QHBoxLayout *pLayout = new QHBoxLayout;
    // 产品代码
    pLayout->addWidget(m_pProCodeLabel);
    pLayout->addWidget(m_pProCodeCBox);
    // 年
    pLayout->addWidget(m_pProYearLabel);
    pLayout->addWidget(m_pProYearCBox);
    // 月
    pLayout->addWidget(m_pProMonthLabel);
    pLayout->addWidget(m_pProMonthCBox);
    // 流水号
    pLayout->addWidget(m_pProSerialNumLabel);
    pLayout->addWidget(m_pProSerialNumCBox);
    //
    pLayout->addStretch(100);
    // 批号前缀
    pLayout->addWidget(m_pBatchPreNumLabel);
    pLayout->addWidget(m_pBatchPreNumLineEdit);
    // 产品批号
    pLayout->addWidget(m_pProBatchLabel);
    pLayout->addWidget(m_pProBatchLineEdit);
    // 条码号
    pLayout->addWidget(m_pBarcodeNumLabel);
    pLayout->addWidget(m_pBarcodeNumLineEdit);


    this->setLayout(pLayout);
}
