#ifndef CFC2TABLEWIDGET_H
#define CFC2TABLEWIDGET_H
// 飞测2Table
#include <QWidget>
#include <QTableWidget>

class CFC2TableWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CFC2TableWidget(QWidget *parent = 0);

signals:

public slots:

private:
    void initWidget();
    void initLayout();
    void initTableData();

private:
    QTableWidget *m_pFC2TableWidget;
};

#endif // CFC2TABLEWIDGET_H
