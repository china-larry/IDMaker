#ifndef COneProWidget_H
#define COneProWidget_H

#include <QWidget>
#include <CNatureTempletWidget//CProjectInfoWidget.h>
#include <CNatureTempletWidget/CNaturePeakWidget.h>
class COneProWidget : public QWidget
{
    Q_OBJECT
public:
    explicit COneProWidget(QWidget *parent = 0);

signals:

public slots:

private:
    CProjectInfoWidget *m_pProjectInfoWidget;
    CNaturePeakWidget *m_pNaturePeakWidget;
};

#endif // COneProWidget_H
