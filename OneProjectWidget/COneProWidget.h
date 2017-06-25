#ifndef COneProWidget_H
#define COneProWidget_H

#include <QWidget>
#include "CNatureTempletWidget//CProjectInfoWidget.h"
#include "CNatureTempletWidget/CNaturePeakWidget.h"
#include "CNatureTempletWidget/CBasisDataWidget.h"
#include "CNatureTempletWidget/CFC2PeakWidget.h"
#include "CNatureTempletWidget/CFC2SectionWidget.h"
#include "CNatureTempletWidget/CFCPlusPeakWidget.h"
#include "CNatureTempletWidget/CFC2TableWidget.h"
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
    CFC2PeakWidget *m_pFC2PeakWidget;// 飞测2临界值
    CFC2SectionWidget *m_pFC2SectionWidget;// 飞测2分段设置
    CFCPlusPeakWidget *m_pFCPlusPeakWidget;// 飞测plus定标
    CFC2TableWidget *m_pFC2TableWidget;// 飞测2表格
};

#endif // COneProWidget_H
