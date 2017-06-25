#ifndef CPROJECTKINDWIDGET_H
#define CPROJECTKINDWIDGET_H
// 项目总数
#include <QWidget>
#include <QRadioButton>
#include <QLayout>
#include <QPushButton>

class CProjectKindWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CProjectKindWidget(QWidget *parent = 0);

signals:
    void SigSelectPro(int number);
private slots:
    void SlotsSingleRadioSelect();
    void SlotDoubleRadioSelect();
    void SlotThreeRadioSelect();
    void SlotQualitativeRadioSelect();
public slots:

private:
    QRadioButton *m_pSingleProRadio;
    QRadioButton *m_pDoubleProRadio;
    QRadioButton *m_pThreeProRadio;
    QRadioButton *m_pQualitativeProRadio;
    //
    QPushButton *m_pReadHexButton;
    QPushButton *m_pSaveHexButton;
    QPushButton *m_pExitButton;
};

#endif // CPROJECTKINDWIDGET_H
