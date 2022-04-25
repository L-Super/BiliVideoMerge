#include "BiliWidget.h"
#include "./ui_BiliWidget.h"
#include <QHeaderView>
#include <QStandardItemModel>
//#include <EditTrigger>

BiliWidget::BiliWidget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BiliWidget)
{
    ui->setupUi(this);
    setWindowTitle("Bilibili视频合并工具");

    headerView = new QHeaderView(Qt::Horizontal);
    //自适应表格宽度
    headerView->setSectionResizeMode(QHeaderView::Stretch);

    modelData = new QStandardItemModel(ui->tableView);
    headerText<<"名称"<<"路径";
    modelData->setHorizontalHeaderLabels(headerText);
    modelData->setColumnCount(2);//列
    //    model->setRowCount(3);//行


    ui->tableView->setHorizontalHeader(headerView);
    ui->tableView->setModel(modelData);
    //只读
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    QList<QStandardItem*> add_items;
    for (int index = 0; index < 20; ++index) {
        add_items << new QStandardItem(QString::number(index));
    }
    modelData->appendColumn(add_items);

}

BiliWidget::~BiliWidget()
{
    delete ui;
}

