#ifndef CPRODECTINFOWIDGET_H
#define CPRODECTINFOWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QSpinBox>
#include <QComboBox>
#include <QLineEdit>
#include "CGeneralWidget/CLabelComboxWidget.h"
#include "CGeneralWidget/CLabelLineEditWidget.h"
class CProjectInfoWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CProjectInfoWidget(QWidget *parent = 0);

signals:

public slots:

private:
    void initWidget();
    void initLayout();
private:
    CLabelComboxWidget *m_pProCodeLCWidget;// 产品代码
    CLabelComboxWidget *m_pProYearLCWidget;// 年
    CLabelComboxWidget *m_pProMonthLCWidget;// 月
    CLabelComboxWidget *m_pProSerialNumLCWidget;// 流水号
    //
    CLabelLineEditWidget *m_pBatchPreNumLLWidget;// 批号前缀
    CLabelLineEditWidget *m_pProBatchLLWidget;// 产品批号
    CLabelLineEditWidget *m_pBarcodeNumLLWidget;// 条码号
};

#endif // CPRODECTINFOWIDGET_H
