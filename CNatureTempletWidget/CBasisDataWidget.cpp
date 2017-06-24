#include "CBasisDataWidget.h"
#include <QBoxLayout>
CBasisDataWidget::CBasisDataWidget(QWidget *parent) : QWidget(parent)
{
    initWidget();
    initLayout();
}

void CBasisDataWidget::initWidget()
{
    // 测试值
    QStringList qstrTestValue;
    qstrTestValue << "T2/C" << "T1/C" << "(T1+T2)/C" << "T1" << "T2" << "C" << "T1+T2" << "T2+C";
    m_pTestValueLCWidget = new CLabelComboxWidget("    测试值：", qstrTestValue, this);
    // 使用区域
    QStringList qstrUseArea;
    qstrUseArea << "不启用" << "北京市" << "天津市" << "河北省" << "山西省" << "内蒙古自治区" << "辽宁省" << "吉林省" << "黑龙江省"
                        << "上海市" << "江苏省" << "浙江省" << "安徽省" << "福建省" << "江西省" << "山东省" << "河南省"
                        << "湖北省" << "湖南省" << "广东省" << "广西壮族自治区" << "海南省" << "重庆市" << "四川省" << "贵州省"
                        << "云南省" << "西藏自治区" << "陕西省" << "甘肃省" << "青海省" << "宁夏回族自治区" << "新疆维吾尔自治区" << "台湾"
                        << "香港" << "澳门" << "国外";
    m_pUseAreaLCWidget = new CLabelComboxWidget("使用区域：", qstrUseArea, this);
    // 血清血浆
    m_pSerumLLWidget = new CLabelLineEditWidget("  血清血浆：", "1", this);
    // 全血系数
    m_pWholeBloodLLWidget = new CLabelLineEditWidget("全血系数：", "1", this);
    // a1(未知数据，当前猜测为全血a1)
    m_pBloodA1LLWidget = new CLabelLineEditWidget("a1：", "1", this);
    // 报告单标题
    m_pReportTitleLLWidget = new CLabelLineEditWidget("报告单标题：", "全程CRP", this);
    // 质控液系数
    m_pQualityControlLLWidget = new CLabelLineEditWidget("质控液系数：", "1", this);
    // 粪便系数
    m_pStoolValueLLWidget = new CLabelLineEditWidget("粪便系数：", "1", this);
    // B（未知数据，猜测为粪便数据B）
    m_pStoolBValueLLWidget = new CLabelLineEditWidget("b：", "1", this);
    // 单位
    m_pUnitLLWidget = new CLabelLineEditWidget("单位：", "mg/L", this);
    // 倒计时
    m_pCountdownLLWidget = new CLabelLineEditWidget("倒计时（分）：", "3", this);
    // 尿液系数
    m_pUrineValueLLWidget = new CLabelLineEditWidget("  尿液系数：", "1", this);
    // a(未知数据，猜测为尿液a)
    m_pUrineAValueLLWidget = new CLabelLineEditWidget("a：", "1", this);
    // b1(未知数据，猜测为尿液b1)
    m_pUrineB1ValueLLWidget = new CLabelLineEditWidget("b1：", "1", this);
    // 小数位数
    m_pDecimalPlaceLLWidget = new CLabelLineEditWidget("小数位数：", "1", this);
    // 测试时间
    m_pTestTimeLLWidget = new CLabelLineEditWidget("测试时间（分）：", "2", this);

}

void CBasisDataWidget::initLayout()
{
    QVBoxLayout *pLayout = new QVBoxLayout;
    //
    QHBoxLayout *pLine1HLayout = new QHBoxLayout;
    pLine1HLayout->addWidget(m_pTestValueLCWidget);
    pLine1HLayout->addStretch(200);
    pLine1HLayout->addWidget(m_pUseAreaLCWidget);
    QHBoxLayout *pLine2HLayout = new QHBoxLayout;
    pLine2HLayout->addWidget(m_pSerumLLWidget);
    pLine2HLayout->addWidget(m_pWholeBloodLLWidget);
    pLine2HLayout->addWidget(m_pBloodA1LLWidget);
    pLine2HLayout->addWidget(m_pReportTitleLLWidget);
    QHBoxLayout *pLine3HLayout = new QHBoxLayout;
    pLine3HLayout->addWidget(m_pQualityControlLLWidget);
    pLine3HLayout->addWidget(m_pStoolValueLLWidget);
    pLine3HLayout->addWidget(m_pStoolBValueLLWidget);
    pLine3HLayout->addWidget(m_pUnitLLWidget);
    pLine3HLayout->addWidget(m_pCountdownLLWidget);
    QHBoxLayout *pLine4HLayout = new QHBoxLayout;
    pLine4HLayout->addWidget(m_pUrineValueLLWidget);
    pLine4HLayout->addWidget(m_pUrineAValueLLWidget);
    pLine4HLayout->addWidget(m_pUrineB1ValueLLWidget);
    pLine4HLayout->addWidget(m_pDecimalPlaceLLWidget);
    pLine4HLayout->addWidget(m_pTestTimeLLWidget);
    //
    pLayout->addLayout(pLine1HLayout);
    pLayout->addLayout(pLine2HLayout);
    pLayout->addLayout(pLine3HLayout);
    pLayout->addLayout(pLine4HLayout);
    pLayout->addStretch(100);
    //
    this->setLayout(pLayout);

}
