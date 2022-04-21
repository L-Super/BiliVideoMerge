//
// Created by Listening on 2022/4/21.
//

#ifndef BILIVIDEOMERGE_BMERGEWIDGET_H
#define BILIVIDEOMERGE_BMERGEWIDGET_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class BMergeWidget; }
QT_END_NAMESPACE


class BMergeWidget : public QMainWindow {
Q_OBJECT

public:
    explicit BMergeWidget(QWidget *parent = nullptr);

    ~BMergeWidget() override;

private:
    Ui::BMergeWidget *ui;

};


#endif //BILIVIDEOMERGE_BMERGEWIDGET_H
