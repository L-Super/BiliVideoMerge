//
// Created by Listening on 2022/4/21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_BMergeWidget.h" resolved

#include "bmergewidget.h"
#include "ui_BMergeWidget.h"
#include <QLabel>

//TODO:创建菜单栏，加入关于（在线更新，使用说明，关于我）
BMergeWidget::BMergeWidget(QWidget *parent) :
        QMainWindow(parent)
        ,ui(new Ui::BMergeWidget)
{
    ui->setupUi(this);
    QLabel *statusLabel = new QLabel("By Listening");
//    statusLabel->setFrameStyle(QFrame::Sunken | QFrame::Box);
    ui->statusBar->showMessage("hello",2000);
    ui->statusBar->addPermanentWidget(statusLabel);


}

BMergeWidget::~BMergeWidget() {
    delete ui;
}
