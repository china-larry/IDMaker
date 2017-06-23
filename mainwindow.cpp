#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(1000, 600);
    this->setWindowTitle("万孚荧光仪Hex生成系统V7.0.0");
   // 初始化
    initWidget();
    // 布局
    initLayout();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SlotSelectProject(int number)
{
    switch (number) {
    case 1:// 单个项目
        m_pProTableWidget->clear();
        m_pProTableWidget->addTab(m_pOneProWidget, "第一个项目");
        break;
    case 2:// 两个项目
        m_pProTableWidget->clear();
        m_pProTableWidget->addTab(m_pOneProWidget, "第一个项目");
        m_pProTableWidget->addTab(m_pLabelTest2, "第二个项目");
        break;
    case 3:// 三个项目
        m_pProTableWidget->clear();
        m_pProTableWidget->addTab(m_pOneProWidget, "第一个项目");
        m_pProTableWidget->addTab(m_pLabelTest2, "第二个项目");
        m_pProTableWidget->addTab(m_pLabelTest3, "第三个项目");
        break;
    case 4:// 定性项目
        m_pProTableWidget->clear();
        m_pProTableWidget->addTab(m_pLabelTest4, "第四个项目");
        break;
    default:
        m_pProTableWidget->clear();
        m_pProTableWidget->addTab(m_pOneProWidget, "第一个项目");
        break;
    }
}

void MainWindow::initWidget()
{
    // 菜单栏
    m_pUserMenu = new QMenu("系统");
    this->menuBar()->addMenu(m_pUserMenu);

    m_pVipUserLoad = m_pUserMenu->addAction("高级用户");
    m_pNormalUserLoad = m_pUserMenu->addAction("普通用户");
    // 关于
    m_pAboutAction = this->menuBar()->addAction("关于");
    // 项目类型面板
    m_pProjectKindWidget = new CProjectKindWidget(this);
    connect(m_pProjectKindWidget, SIGNAL(SigSelectPro(int)), this, SLOT(SlotSelectProject(int)));
    // 选项卡
    m_pProTableWidget = new QTabWidget(this);
    m_pOneProWidget = new CSingleProWidget(this);
    m_pLabelTest2 = new QLabel("两个项目");
    m_pLabelTest3 = new QLabel("三个项目");
    m_pLabelTest4 = new QLabel("定性项目");
    m_pProTableWidget->addTab(m_pOneProWidget, "第一个项目");

}

void MainWindow::initLayout()
{
    QVBoxLayout *pLayout = new QVBoxLayout();
    pLayout->addWidget(m_pProjectKindWidget);
    pLayout->addWidget(m_pProTableWidget);

    QWidget *widget = new QWidget();
    setCentralWidget(widget);
    widget->setLayout(pLayout);

}
