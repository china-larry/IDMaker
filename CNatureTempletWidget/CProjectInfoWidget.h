#ifndef CPRODECTINFOWIDGET_H
#define CPRODECTINFOWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QSpinBox>
#include <QComboBox>
#include <QLineEdit>
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
    QLabel *m_pProCodeLabel;
    QComboBox *m_pProCodeCBox;// 产品代码
    QLabel *m_pProYearLabel;// 年
    QComboBox *m_pProYearCBox;
    QLabel *m_pProMonthLabel;// 月
    QComboBox *m_pProMonthCBox;
    QLabel *m_pProSerialNumLabel;// 流水号
    QComboBox *m_pProSerialNumCBox;
    //
    QLabel *m_pBatchPreNumLabel;// 批号前缀
    QLineEdit *m_pBatchPreNumLineEdit;
    QLabel *m_pProBatchLabel;// 产品批号
    QLineEdit *m_pProBatchLineEdit;
    QLabel *m_pBarcodeNumLabel;// 条码号
    QLineEdit *m_pBarcodeNumLineEdit;

};

#endif // CPRODECTINFOWIDGET_H
