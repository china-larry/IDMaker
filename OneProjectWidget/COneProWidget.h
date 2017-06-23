#ifndef COneProWidget_H
#define COneProWidget_H

#include <QWidget>
#include <QMoreWidget/CProjectInfoWidget.h>
class COneProWidget : public QWidget
{
    Q_OBJECT
public:
    explicit COneProWidget(QWidget *parent = 0);

signals:

public slots:

private:
    CProjectInfoWidget *m_pProjectInfoWidget;
};

#endif // COneProWidget_H
