#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
bool checkGuess(int num);


QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    void checkGuess(int);
    ~Widget();

private slots:
    void on_OkayButton_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
