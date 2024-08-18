#include <QtGui>
#include <QApplication>
#include <QLabel>
#include <QtWidgets>
#include <QBoxLayout>
#include <QTextEdit>
#include <QSplitter>
#include <QTextBlock>
#include <QTextDocument>
#include <QFontMetrics>
#include <iostream>
#include <QFontDialog>

#include "showcase.hpp"

class CalculatorWindow: public QMainWindow {
    QBoxLayout * layout;

public:

    CalculatorWindow(){
        QWidget * centralWidget = new QWidget(this);

        layout = new QBoxLayout(QBoxLayout::Direction::TopToBottom,centralWidget);

        layout->addWidget(new Block(QPalette::Window,"QPalette::Window"));
        layout->addWidget(new Block(QPalette::WindowText,"QPalette::WindowText"));
        layout->addWidget(new Block(QPalette::Base,"QPalette::Base"));
        layout->addWidget(new Block(QPalette::AlternateBase,"QPalette::AlternateBase"));
        layout->addWidget(new Block(QPalette::ToolTipBase,"QPalette::ToolTipBase"));
        layout->addWidget(new Block(QPalette::ToolTipText,"QPalette::ToolTipText"));
        layout->addWidget(new Block(QPalette::PlaceholderText,"QPalette::PlaceholderText"));
        layout->addWidget(new Block(QPalette::Text,"QPalette::Text"));
        layout->addWidget(new Block(QPalette::Button,"QPalette::Button"));
        layout->addWidget(new Block(QPalette::ButtonText,"QPalette::ButtonText"));
        layout->addWidget(new Block(QPalette::BrightText,"QPalette::BrightText"));

        layout->addWidget(new Block(QPalette::Light,"QPalette::Light"));
        layout->addWidget(new Block(QPalette::Midlight,"QPalette::Midlight"));
        layout->addWidget(new Block(QPalette::Dark,"QPalette::Dark"));
        layout->addWidget(new Block(QPalette::Mid,"QPalette::Mid"));
        layout->addWidget(new Block(QPalette::Shadow,"QPalette::Shadow"));

        layout->addWidget(new Block(QPalette::Highlight,"QPalette::Highlight"));
        layout->addWidget(new Block(QPalette::Accent,"QPalette::Accent"));
        layout->addWidget(new Block(QPalette::HighlightedText,"QPalette::HighlightedText"));

        layout->addWidget(new Block(QPalette::Link,"QPalette::Link"));
        layout->addWidget(new Block(QPalette::LinkVisited,"QPalette::LinkVisited"));

        layout->addWidget(new Block(QPalette::NoRole,"QPalette::NoRole"));


        this->setCentralWidget(centralWidget);
        this->show();

    };
};


int main(int argc, char **argv) {
    //dbgInfo("App Starting");
    std::cout << "app start" << std::endl;
    QApplication app(argc, argv);

    CalculatorWindow * main_win = new CalculatorWindow();

    std::cout << "app ende" << std::endl;

    return app.exec();
}
