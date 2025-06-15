/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_url;
    QLabel *label_Download;
    QLabel *label_defaultFile;
    QVBoxLayout *verticalLayout;
    QLineEdit *edit_url;
    QLineEdit *edit_dir;
    QLineEdit *edit_file;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *selectDownloadDir;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QProgressBar *progressBar;
    QPushButton *pbtn_download;
    QPushButton *pbtn_quit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(550, 330);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 501, 301));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_url = new QLabel(layoutWidget);
        label_url->setObjectName("label_url");

        verticalLayout_2->addWidget(label_url);

        label_Download = new QLabel(layoutWidget);
        label_Download->setObjectName("label_Download");

        verticalLayout_2->addWidget(label_Download);

        label_defaultFile = new QLabel(layoutWidget);
        label_defaultFile->setObjectName("label_defaultFile");

        verticalLayout_2->addWidget(label_defaultFile);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        edit_url = new QLineEdit(layoutWidget);
        edit_url->setObjectName("edit_url");

        verticalLayout->addWidget(edit_url);

        edit_dir = new QLineEdit(layoutWidget);
        edit_dir->setObjectName("edit_dir");

        verticalLayout->addWidget(edit_dir);

        edit_file = new QLineEdit(layoutWidget);
        edit_file->setObjectName("edit_file");

        verticalLayout->addWidget(edit_file);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName("checkBox");

        horizontalLayout_3->addWidget(checkBox);

        horizontalSpacer_4 = new QSpacerItem(80, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        selectDownloadDir = new QPushButton(layoutWidget);
        selectDownloadDir->setObjectName("selectDownloadDir");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(selectDownloadDir->sizePolicy().hasHeightForWidth());
        selectDownloadDir->setSizePolicy(sizePolicy);
        selectDownloadDir->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_3->addWidget(selectDownloadDir);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_3);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout_3->addWidget(label);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(24);

        horizontalLayout_2->addWidget(progressBar);

        pbtn_download = new QPushButton(layoutWidget);
        pbtn_download->setObjectName("pbtn_download");

        horizontalLayout_2->addWidget(pbtn_download);

        pbtn_quit = new QPushButton(layoutWidget);
        pbtn_quit->setObjectName("pbtn_quit");

        horizontalLayout_2->addWidget(pbtn_quit);


        verticalLayout_4->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_url->setText(QCoreApplication::translate("MainWindow", "URL:", nullptr));
        label_Download->setText(QCoreApplication::translate("MainWindow", "Download directory:", nullptr));
        label_defaultFile->setText(QCoreApplication::translate("MainWindow", "Default file:", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Launch file", nullptr));
        selectDownloadDir->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Please enter the URL of a file you want to download.", nullptr));
        pbtn_download->setText(QCoreApplication::translate("MainWindow", "Download", nullptr));
        pbtn_quit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
