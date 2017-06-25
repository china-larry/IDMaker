#include "CFC2TableWidget.h"
#include <QHeaderView>
#include <QBoxLayout>
#include <QFont>
#include <QScrollBar>
CFC2TableWidget::CFC2TableWidget(QWidget *parent) : QWidget(parent)
{
    initWidget();
    initLayout();
    initTableData();
}

void CFC2TableWidget::initWidget()
{
    m_pFC2TableWidget = new QTableWidget(this);
    m_pFC2TableWidget->resize(300, 300);
    // 表单样式
    m_pFC2TableWidget->setColumnCount(3);
    QHeaderView *pHeaderView = m_pFC2TableWidget->horizontalHeader();
    pHeaderView->setDefaultSectionSize(120);
    pHeaderView->setDisabled(true);
    // 表头字体
    QFont font = pHeaderView->font();
    font.setBold(true);
    pHeaderView->setFont(font);
    // 充满表格
    pHeaderView->setStretchLastSection(true);
     // 表头背景色
    pHeaderView->setStyleSheet("QHeaderView::section{background:skyblue;}");
    // 多选
    m_pFC2TableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
    // 每次选择一行
    m_pFC2TableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    // 设置表头内容
    QStringList qstrlistHeader;
    qstrlistHeader << "序号" << "浓度（飞测2）" << "TC（飞测2）";
    m_pFC2TableWidget->setHorizontalHeaderLabels(qstrlistHeader);
    // 显示格子线
    m_pFC2TableWidget->setShowGrid(true);
    //设置水平、垂直滚动条样式
    m_pFC2TableWidget->horizontalScrollBar()->setStyleSheet("QScrollBar{background:transparent; height:10px;}"
      "QScrollBar::handle{background:lightgray; border:2px solid transparent; border-radius:5px;}"
      "QScrollBar::handle:hover{background:gray;}"
      "QScrollBar::sub-line{background:transparent;}"
      "QScrollBar::add-line{background:transparent;}");
     m_pFC2TableWidget->verticalScrollBar()->setStyleSheet("QScrollBar{background:transparent; width: 10px;}"
      "QScrollBar::handle{background:lightgray; border:2px solid transparent; border-radius:5px;}"
      "QScrollBar::handle:hover{background:gray;}"
      "QScrollBar::sub-line{background:transparent;}"
      "QScrollBar::add-line{background:transparent;}");


}

void CFC2TableWidget::initLayout()
{
    QHBoxLayout *pLayout = new QHBoxLayout;
    pLayout->addWidget(m_pFC2TableWidget);
    this->setLayout(pLayout);
}

void CFC2TableWidget::initTableData()
{
    //（1）动态插入行
      int row_count = m_pFC2TableWidget->rowCount();  //获取表单行数
      m_pFC2TableWidget->insertRow(row_count); //插入新行
      m_pFC2TableWidget->insertRow(row_count+1); //插入新行
      QTableWidgetItem *item = new QTableWidgetItem();
      QTableWidgetItem *item1 = new QTableWidgetItem();
      QTableWidgetItem *item2 = new QTableWidgetItem();
      QTableWidgetItem *item3 = new QTableWidgetItem();
      //设置对应的图标、文件名称、最后更新时间、对应的类型、文件大小
      //item->setIcon(icon); //icon为调用系统的图标，以后缀来区分
      item->setText("name");
      item1->setText("last_modify_time");
      item2->setText("type"); //type为调用系统的类型，以后缀来区分
      item3->setText("size");
      m_pFC2TableWidget->setItem(row_count, 0, item);
      m_pFC2TableWidget->setItem(row_count, 1, item1);
      m_pFC2TableWidget->setItem(row_count+1, 0, item2);
      m_pFC2TableWidget->setItem(row_count+1, 1, item3);
      //设置样式为灰色
      QColor color("gray");
      item1->setTextColor(color);
      item2->setTextColor(color);
      item3->setTextColor(color);
    //  （2）在指定位置插入行
      //其实跟（1）相似，（1）的前提是获取到表格行数
      //m_pFC2TableWidget->insertRow(row); //插入新行 row为插入的位置
}
