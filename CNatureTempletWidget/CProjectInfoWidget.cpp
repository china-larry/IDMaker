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
    QStringList qstrlistProCode;
    for(int i = 0; i < 256; i++)
    {
        qstrlistProCode.append(QString::number(i));
    }
    m_pProCodeLCWidget = new CLabelComboxWidget("产品代码：", qstrlistProCode, this);
    // 年
    QStringList qstrlistYear;
    for(int i = 0; i < 30; i++)
    {
        qstrlistYear.append(QString::number(i+2010));
    }
    m_pProYearLCWidget = new CLabelComboxWidget("年：", qstrlistYear, this);
    // 月
    QStringList qstrlistMonth;
    for(int i = 1; i < 13; i++)
    {
        qstrlistMonth.append(QString::number(i));
    }
    m_pProMonthLCWidget = new CLabelComboxWidget("月：", qstrlistMonth, this);
    // 流水号
    QStringList qstrlistSerialNum;
    for(int i = 1; i < 17; i++)
    {
        qstrlistSerialNum.append(QString::number(i));
    }
    m_pProSerialNumLCWidget = new CLabelComboxWidget("流水号：", qstrlistSerialNum, this);
    // 批号前缀
    m_pBatchPreNumLLWidget = new CLabelLineEditWidget("批号前缀：", "", this);
    // 产品批号
    m_pProBatchLLWidget = new CLabelLineEditWidget("产品批号：", "", this);
    // 条码号
    m_pBarcodeNumLLWidget = new CLabelLineEditWidget("条码号：", "", this);
}

void CProjectInfoWidget::initLayout()
{
    QHBoxLayout *pLayout = new QHBoxLayout;
    // 产品代码
    pLayout->addWidget(m_pProCodeLCWidget);
    // 年
    pLayout->addWidget(m_pProYearLCWidget);
    // 月
    pLayout->addWidget(m_pProMonthLCWidget);
    // 流水号
    pLayout->addWidget(m_pProSerialNumLCWidget);
    //
    pLayout->addStretch(100);
    // 批号前缀
    pLayout->addWidget(m_pBatchPreNumLLWidget);
    // 产品批号
    pLayout->addWidget(m_pProBatchLLWidget);
    // 条码号
    pLayout->addWidget(m_pBarcodeNumLLWidget);

    this->setLayout(pLayout);
}
