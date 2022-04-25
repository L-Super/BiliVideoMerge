#ifndef BILIWIDGET_H
#define BILIWIDGET_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class BiliWidget; }
QT_END_NAMESPACE

class QHeaderView;
class QStandardItemModel;
class BiliWidget : public QMainWindow
{
    Q_OBJECT

public:
    BiliWidget(QWidget *parent = nullptr);
    ~BiliWidget();

private:
    Ui::BiliWidget *ui;
    QHeaderView* headerView;
    QStandardItemModel *modelData;
    QStringList headerText;
};
#endif // BILIWIDGET_H
