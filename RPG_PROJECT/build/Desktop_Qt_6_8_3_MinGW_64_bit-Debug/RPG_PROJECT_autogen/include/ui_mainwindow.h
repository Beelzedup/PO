/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QLabel *labelClass;
    QComboBox *comboBoxClass;
    QLabel *labelLevel;
    QSpinBox *spinBoxLevel;
    QLabel *labelAge;
    QSpinBox *spinBoxAge;
    QLabel *labelGender;
    QComboBox *comboBoxGender;
    QLabel *labelRace;
    QComboBox *comboBoxRace;
    QLabel *labelAlignment;
    QComboBox *comboBoxAlignment;
    QLabel *labelBackground;
    QTextEdit *textEditBackground;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayoutEquipment;
    QLabel *labelEquipment;
    QListWidget *listWidgetEquipment;
    QHBoxLayout *horizontalLayoutAddEquipment;
    QLineEdit *lineEditAddEquipment;
    QPushButton *pushButtonAddEquipment;
    QPushButton *pushButtonRemoveEquipment;
    QVBoxLayout *verticalLayoutSkills;
    QLabel *labelSkills;
    QListWidget *listWidgetSkills;
    QHBoxLayout *horizontalLayoutAddSkill;
    QLineEdit *lineEditAddSkill;
    QPushButton *pushButtonAddSkill;
    QPushButton *pushButtonRemoveSkill;
    QHBoxLayout *horizontalLayoutButtons;
    QPushButton *pushButtonNew;
    QPushButton *pushButtonOpen;
    QPushButton *pushButtonSave;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(700, 500);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        labelName = new QLabel(centralwidget);
        labelName->setObjectName("labelName");

        gridLayout->addWidget(labelName, 0, 0, 1, 1);

        lineEditName = new QLineEdit(centralwidget);
        lineEditName->setObjectName("lineEditName");

        gridLayout->addWidget(lineEditName, 0, 1, 1, 1);

        labelClass = new QLabel(centralwidget);
        labelClass->setObjectName("labelClass");

        gridLayout->addWidget(labelClass, 0, 2, 1, 1);

        comboBoxClass = new QComboBox(centralwidget);
        comboBoxClass->addItem(QString());
        comboBoxClass->addItem(QString());
        comboBoxClass->addItem(QString());
        comboBoxClass->addItem(QString());
        comboBoxClass->addItem(QString());
        comboBoxClass->addItem(QString());
        comboBoxClass->addItem(QString());
        comboBoxClass->addItem(QString());
        comboBoxClass->addItem(QString());
        comboBoxClass->addItem(QString());
        comboBoxClass->addItem(QString());
        comboBoxClass->addItem(QString());
        comboBoxClass->setObjectName("comboBoxClass");

        gridLayout->addWidget(comboBoxClass, 0, 3, 1, 1);

        labelLevel = new QLabel(centralwidget);
        labelLevel->setObjectName("labelLevel");

        gridLayout->addWidget(labelLevel, 1, 0, 1, 1);

        spinBoxLevel = new QSpinBox(centralwidget);
        spinBoxLevel->setObjectName("spinBoxLevel");
        spinBoxLevel->setMinimum(1);
        spinBoxLevel->setMaximum(100);

        gridLayout->addWidget(spinBoxLevel, 1, 1, 1, 1);

        labelAge = new QLabel(centralwidget);
        labelAge->setObjectName("labelAge");

        gridLayout->addWidget(labelAge, 1, 2, 1, 1);

        spinBoxAge = new QSpinBox(centralwidget);
        spinBoxAge->setObjectName("spinBoxAge");
        spinBoxAge->setMinimum(0);
        spinBoxAge->setMaximum(999);

        gridLayout->addWidget(spinBoxAge, 1, 3, 1, 1);

        labelGender = new QLabel(centralwidget);
        labelGender->setObjectName("labelGender");

        gridLayout->addWidget(labelGender, 2, 0, 1, 1);

        comboBoxGender = new QComboBox(centralwidget);
        comboBoxGender->addItem(QString());
        comboBoxGender->addItem(QString());
        comboBoxGender->setObjectName("comboBoxGender");

        gridLayout->addWidget(comboBoxGender, 2, 1, 1, 1);

        labelRace = new QLabel(centralwidget);
        labelRace->setObjectName("labelRace");

        gridLayout->addWidget(labelRace, 2, 2, 1, 1);

        comboBoxRace = new QComboBox(centralwidget);
        comboBoxRace->addItem(QString());
        comboBoxRace->addItem(QString());
        comboBoxRace->addItem(QString());
        comboBoxRace->addItem(QString());
        comboBoxRace->addItem(QString());
        comboBoxRace->addItem(QString());
        comboBoxRace->addItem(QString());
        comboBoxRace->addItem(QString());
        comboBoxRace->addItem(QString());
        comboBoxRace->addItem(QString());
        comboBoxRace->setObjectName("comboBoxRace");

        gridLayout->addWidget(comboBoxRace, 2, 3, 1, 1);

        labelAlignment = new QLabel(centralwidget);
        labelAlignment->setObjectName("labelAlignment");

        gridLayout->addWidget(labelAlignment, 3, 0, 1, 1);

        comboBoxAlignment = new QComboBox(centralwidget);
        comboBoxAlignment->addItem(QString());
        comboBoxAlignment->addItem(QString());
        comboBoxAlignment->addItem(QString());
        comboBoxAlignment->addItem(QString());
        comboBoxAlignment->addItem(QString());
        comboBoxAlignment->addItem(QString());
        comboBoxAlignment->addItem(QString());
        comboBoxAlignment->addItem(QString());
        comboBoxAlignment->addItem(QString());
        comboBoxAlignment->setObjectName("comboBoxAlignment");

        gridLayout->addWidget(comboBoxAlignment, 3, 1, 1, 1);

        labelBackground = new QLabel(centralwidget);
        labelBackground->setObjectName("labelBackground");

        gridLayout->addWidget(labelBackground, 3, 2, 1, 1);

        textEditBackground = new QTextEdit(centralwidget);
        textEditBackground->setObjectName("textEditBackground");

        gridLayout->addWidget(textEditBackground, 3, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayoutEquipment = new QVBoxLayout();
        verticalLayoutEquipment->setObjectName("verticalLayoutEquipment");
        labelEquipment = new QLabel(centralwidget);
        labelEquipment->setObjectName("labelEquipment");

        verticalLayoutEquipment->addWidget(labelEquipment);

        listWidgetEquipment = new QListWidget(centralwidget);
        listWidgetEquipment->setObjectName("listWidgetEquipment");

        verticalLayoutEquipment->addWidget(listWidgetEquipment);

        horizontalLayoutAddEquipment = new QHBoxLayout();
        horizontalLayoutAddEquipment->setObjectName("horizontalLayoutAddEquipment");
        lineEditAddEquipment = new QLineEdit(centralwidget);
        lineEditAddEquipment->setObjectName("lineEditAddEquipment");

        horizontalLayoutAddEquipment->addWidget(lineEditAddEquipment);

        pushButtonAddEquipment = new QPushButton(centralwidget);
        pushButtonAddEquipment->setObjectName("pushButtonAddEquipment");

        horizontalLayoutAddEquipment->addWidget(pushButtonAddEquipment);

        pushButtonRemoveEquipment = new QPushButton(centralwidget);
        pushButtonRemoveEquipment->setObjectName("pushButtonRemoveEquipment");

        horizontalLayoutAddEquipment->addWidget(pushButtonRemoveEquipment);


        verticalLayoutEquipment->addLayout(horizontalLayoutAddEquipment);


        horizontalLayout->addLayout(verticalLayoutEquipment);

        verticalLayoutSkills = new QVBoxLayout();
        verticalLayoutSkills->setObjectName("verticalLayoutSkills");
        labelSkills = new QLabel(centralwidget);
        labelSkills->setObjectName("labelSkills");

        verticalLayoutSkills->addWidget(labelSkills);

        listWidgetSkills = new QListWidget(centralwidget);
        listWidgetSkills->setObjectName("listWidgetSkills");

        verticalLayoutSkills->addWidget(listWidgetSkills);

        horizontalLayoutAddSkill = new QHBoxLayout();
        horizontalLayoutAddSkill->setObjectName("horizontalLayoutAddSkill");
        lineEditAddSkill = new QLineEdit(centralwidget);
        lineEditAddSkill->setObjectName("lineEditAddSkill");

        horizontalLayoutAddSkill->addWidget(lineEditAddSkill);

        pushButtonAddSkill = new QPushButton(centralwidget);
        pushButtonAddSkill->setObjectName("pushButtonAddSkill");

        horizontalLayoutAddSkill->addWidget(pushButtonAddSkill);

        pushButtonRemoveSkill = new QPushButton(centralwidget);
        pushButtonRemoveSkill->setObjectName("pushButtonRemoveSkill");

        horizontalLayoutAddSkill->addWidget(pushButtonRemoveSkill);


        verticalLayoutSkills->addLayout(horizontalLayoutAddSkill);


        horizontalLayout->addLayout(verticalLayoutSkills);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayoutButtons = new QHBoxLayout();
        horizontalLayoutButtons->setObjectName("horizontalLayoutButtons");
        pushButtonNew = new QPushButton(centralwidget);
        pushButtonNew->setObjectName("pushButtonNew");

        horizontalLayoutButtons->addWidget(pushButtonNew);

        pushButtonOpen = new QPushButton(centralwidget);
        pushButtonOpen->setObjectName("pushButtonOpen");

        horizontalLayoutButtons->addWidget(pushButtonOpen);

        pushButtonSave = new QPushButton(centralwidget);
        pushButtonSave->setObjectName("pushButtonSave");

        horizontalLayoutButtons->addWidget(pushButtonSave);


        verticalLayout->addLayout(horizontalLayoutButtons);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        labelName->setText(QCoreApplication::translate("MainWindow", "Imi\304\231:", nullptr));
        labelClass->setText(QCoreApplication::translate("MainWindow", "Klasa:", nullptr));
        comboBoxClass->setItemText(0, QCoreApplication::translate("MainWindow", "Wojownik", nullptr));
        comboBoxClass->setItemText(1, QCoreApplication::translate("MainWindow", "Barbarzy\305\204ca", nullptr));
        comboBoxClass->setItemText(2, QCoreApplication::translate("MainWindow", "Bard", nullptr));
        comboBoxClass->setItemText(3, QCoreApplication::translate("MainWindow", "Druid", nullptr));
        comboBoxClass->setItemText(4, QCoreApplication::translate("MainWindow", "Mag", nullptr));
        comboBoxClass->setItemText(5, QCoreApplication::translate("MainWindow", "Czarnoksi\304\231\305\274nik", nullptr));
        comboBoxClass->setItemText(6, QCoreApplication::translate("MainWindow", "Zaklinacz", nullptr));
        comboBoxClass->setItemText(7, QCoreApplication::translate("MainWindow", "\305\201owca", nullptr));
        comboBoxClass->setItemText(8, QCoreApplication::translate("MainWindow", "\305\201otr", nullptr));
        comboBoxClass->setItemText(9, QCoreApplication::translate("MainWindow", "Mnich", nullptr));
        comboBoxClass->setItemText(10, QCoreApplication::translate("MainWindow", "Kleryk", nullptr));
        comboBoxClass->setItemText(11, QCoreApplication::translate("MainWindow", "Paladyn", nullptr));

        labelLevel->setText(QCoreApplication::translate("MainWindow", "Poziom:", nullptr));
        labelAge->setText(QCoreApplication::translate("MainWindow", "Wiek:", nullptr));
        labelGender->setText(QCoreApplication::translate("MainWindow", "P\305\202e\304\207:", nullptr));
        comboBoxGender->setItemText(0, QCoreApplication::translate("MainWindow", "M\304\231\305\274czyzna (M)", nullptr));
        comboBoxGender->setItemText(1, QCoreApplication::translate("MainWindow", "Kobieta (K)", nullptr));

        labelRace->setText(QCoreApplication::translate("MainWindow", "Rasa:", nullptr));
        comboBoxRace->setItemText(0, QCoreApplication::translate("MainWindow", "Cz\305\202owiek", nullptr));
        comboBoxRace->setItemText(1, QCoreApplication::translate("MainWindow", "Elf", nullptr));
        comboBoxRace->setItemText(2, QCoreApplication::translate("MainWindow", "P\303\263\305\202ork", nullptr));
        comboBoxRace->setItemText(3, QCoreApplication::translate("MainWindow", "P\303\263\305\202elf", nullptr));
        comboBoxRace->setItemText(4, QCoreApplication::translate("MainWindow", "Gnom", nullptr));
        comboBoxRace->setItemText(5, QCoreApplication::translate("MainWindow", "Nizio\305\202ek", nullptr));
        comboBoxRace->setItemText(6, QCoreApplication::translate("MainWindow", "Krasnolud", nullptr));
        comboBoxRace->setItemText(7, QCoreApplication::translate("MainWindow", "Diabelstwo", nullptr));
        comboBoxRace->setItemText(8, QCoreApplication::translate("MainWindow", "Drakon", nullptr));
        comboBoxRace->setItemText(9, QCoreApplication::translate("MainWindow", "Mroczny elf", nullptr));

        labelAlignment->setText(QCoreApplication::translate("MainWindow", "\305\232wiatopogl\304\205d:", nullptr));
        comboBoxAlignment->setItemText(0, QCoreApplication::translate("MainWindow", "Praworz\304\205dny Dobry", nullptr));
        comboBoxAlignment->setItemText(1, QCoreApplication::translate("MainWindow", "Neutralny Dobry", nullptr));
        comboBoxAlignment->setItemText(2, QCoreApplication::translate("MainWindow", "Chaotyczny Dobry", nullptr));
        comboBoxAlignment->setItemText(3, QCoreApplication::translate("MainWindow", "Praworz\304\205dny Neutralny", nullptr));
        comboBoxAlignment->setItemText(4, QCoreApplication::translate("MainWindow", "Neutralny", nullptr));
        comboBoxAlignment->setItemText(5, QCoreApplication::translate("MainWindow", "Chaotyczny Neutralny", nullptr));
        comboBoxAlignment->setItemText(6, QCoreApplication::translate("MainWindow", "Praworz\304\205dny Z\305\202y", nullptr));
        comboBoxAlignment->setItemText(7, QCoreApplication::translate("MainWindow", "Neutralny Z\305\202y", nullptr));
        comboBoxAlignment->setItemText(8, QCoreApplication::translate("MainWindow", "Chaotyczny Z\305\202y", nullptr));

        labelBackground->setText(QCoreApplication::translate("MainWindow", "T\305\202o fabularne:", nullptr));
        labelEquipment->setText(QCoreApplication::translate("MainWindow", "Ekwipunek", nullptr));
        pushButtonAddEquipment->setText(QCoreApplication::translate("MainWindow", "Dodaj", nullptr));
        pushButtonRemoveEquipment->setText(QCoreApplication::translate("MainWindow", "Usu\305\204", nullptr));
        labelSkills->setText(QCoreApplication::translate("MainWindow", "Umiej\304\231tno\305\233ci", nullptr));
        pushButtonAddSkill->setText(QCoreApplication::translate("MainWindow", "Dodaj", nullptr));
        pushButtonRemoveSkill->setText(QCoreApplication::translate("MainWindow", "Usu\305\204", nullptr));
        pushButtonNew->setText(QCoreApplication::translate("MainWindow", "Nowa posta\304\207", nullptr));
        pushButtonOpen->setText(QCoreApplication::translate("MainWindow", "Otw\303\263rz", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("MainWindow", "Zapisz", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
