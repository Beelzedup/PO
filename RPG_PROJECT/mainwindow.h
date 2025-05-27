#pragma once

#include <QMainWindow>
#include "Character.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonNew_clicked();
    void on_pushButtonOpen_clicked();
    void on_pushButtonSave_clicked();
    void on_pushButtonAddEquipment_clicked();
    void on_pushButtonRemoveEquipment_clicked();
    void on_pushButtonAddSkill_clicked();
    void on_pushButtonRemoveSkill_clicked();

private:
    void updateUIFromCharacter();
    void updateCharacterFromUI();

    Ui::MainWindow *ui;
    Character currentCharacter;
};
