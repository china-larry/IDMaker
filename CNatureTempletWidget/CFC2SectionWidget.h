#ifndef CFC2SECTIONWIDGET_H
#define CFC2SECTIONWIDGET_H
// 飞测2分段设置
#include <QWidget>
#include "CGeneralWidget/CLabelComboxWidget.h"
class CFC2SectionWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CFC2SectionWidget(QWidget *parent = 0);

signals:

public slots:
private:
    void initWidget();
    void initLayout();
private:
    // 对数
    CLabelComboxWidget *m_pLogarithmLCWidget;
    CLabelComboxWidget *m_pHandlMethonLCWidget;// 处理方法
    // 分段
    CLabelComboxWidget *m_pSectionLCWidget;
    CLabelComboxWidget *m_pLimitConditionLCWidget;// 限制条件
};

#endif // CFC2SECTIONWIDGET_H
