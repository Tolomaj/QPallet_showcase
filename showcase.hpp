#include <QtWidgets>

///GUI_Window : Objekt hlavního okna vytváří hlavní rozložení ovladacích prvků.
class Block: public QWidget {
    QBoxLayout * layout;
    QLabel * label;
    QFrame * color;
public:

    Block(QPalette::ColorRole paletType, QString name) : QWidget(){

        layout = new QBoxLayout(QBoxLayout::Direction::LeftToRight,this);
        this->setLayout(layout);

        QWidget * centralWidget = new QWidget(this);

        color = new QFrame();

        QPalette palet = qApp->palette();
        QString style = "background: " + palet.color(paletType).name();
        color->setStyleSheet(style);

        color->setFixedWidth(50);
        color->setFrameStyle(QFrame::Panel | QFrame::Raised);

        layout->addWidget(color);


        label = new QLabel(name);
        layout->addWidget(label);

    };
};