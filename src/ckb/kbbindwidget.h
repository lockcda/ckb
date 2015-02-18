#ifndef KBBINDWIDGET_H
#define KBBINDWIDGET_H

#include <QWidget>
#include "kbbind.h"
#include "kbprofile.h"

namespace Ui {
class KbBindWidget;
}

class KbBindWidget : public QWidget
{
    Q_OBJECT

public:
    explicit KbBindWidget(QWidget *parent = 0);
    ~KbBindWidget();

    void setBind(KbBind* newBind, KbProfile* newProfile);

private slots:
    void updateBind();
    void newSelection(QStringList selection);

    void on_resetButton_clicked();
    void on_unbindButton_clicked();

private:
    Ui::KbBindWidget *ui;

    KbBind* bind;
    KbProfile* profile;
    QStringList currentSelection;
};

#endif // KBBINDWIDGET_H