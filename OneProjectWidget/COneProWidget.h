#ifndef COneProWidget_H
#define COneProWidget_H

#include <QWidget>
#include "CNatureTempletWidget//CProjectInfoWidget.h"
#include "CNatureTempletWidget/CNaturePeakWidget.h"
#include "CNatureTempletWidget/CBasisDataWidget.h"
class COneProWidget : public QWidget
{
    Q_OBJECT
public:
    explicit COneProWidget(QWidget *parent = 0);

signals:

public slots:

private:
    CProjectInfoWidget *m_pProjectInfoWidget;// 产品信息
    CNaturePeakWidget *m_pNaturePeakWidget;// 峰值数据
    CBasisDataWidget *m_pBasisDataWidget;// 基础数据
};

#endif // COneProWidget_H
