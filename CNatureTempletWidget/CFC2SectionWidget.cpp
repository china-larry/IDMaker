#include "CFC2SectionWidget.h"
#include <QBoxLayout>
CFC2SectionWidget::CFC2SectionWidget(QWidget *parent) : QWidget(parent)
{
    initWidget();
    initLayout();
}

void CFC2SectionWidget::initWidget()
{
    // 取对数
    QStringList qstrlistLogarithm;
    qstrlistLogarithm << "取" << "否";
    m_pLogarithmLCWidget = new CLabelComboxWidget("取对数：", qstrlistLogarithm, this);
    // 处理方法
    QStringList qstrlistHandMethon;
    qstrlistHandMethon << "多项式";
    m_pHandlMethonLCWidget = new CLabelComboxWidget("处理方法：", qstrlistHandMethon, this);
    // 分段数
    QStringList qstrlistSection;
    qstrlistSection << "不分段" << "2";
    m_pSectionLCWidget = new CLabelComboxWidget("分段数：", qstrlistSection, this);
    // 限制条件
    QStringList qstrlistLimitCondition;
    qstrlistLimitCondition << "自动选择最佳" << "1次方"  << "2次方"  << "3次方"  << "4次方"  << "5次方";
    m_pLimitConditionLCWidget = new CLabelComboxWidget("限制条件：", qstrlistLimitCondition, this);
}

void CFC2SectionWidget::initLayout()
{
    QVBoxLayout *pLayout = new QVBoxLayout;
    //
    QHBoxLayout *pHLayout01 = new QHBoxLayout;
    pHLayout01->addWidget(m_pLogarithmLCWidget);
    pHLayout01->addWidget(m_pHandlMethonLCWidget);
    //
    QHBoxLayout *pHLayout02 = new QHBoxLayout;
    pHLayout02->addWidget(m_pSectionLCWidget);
    pHLayout02->addWidget(m_pLimitConditionLCWidget);
    //
    pLayout->addLayout(pHLayout01);
    pLayout->addLayout(pHLayout02);
    this->setLayout(pLayout);
}
