#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "FileManager.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QStringList>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // UWAGA: NIE powielaj connectów jeśli sygnały są już połączone w Qt Designer!
    // connect(ui->pushButtonOpen, &QPushButton::clicked, this, &MainWindow::on_pushButtonOpen_clicked);

    connect(ui->pushButtonNew, &QPushButton::clicked, this, &MainWindow::on_pushButtonNew_clicked);
    connect(ui->pushButtonSave, &QPushButton::clicked, this, &MainWindow::on_pushButtonSave_clicked);
    connect(ui->pushButtonAddEquipment, &QPushButton::clicked, this, &MainWindow::on_pushButtonAddEquipment_clicked);
    connect(ui->pushButtonRemoveEquipment, &QPushButton::clicked, this, &MainWindow::on_pushButtonRemoveEquipment_clicked);
    connect(ui->pushButtonAddSkill, &QPushButton::clicked, this, &MainWindow::on_pushButtonAddSkill_clicked);
    connect(ui->pushButtonRemoveSkill, &QPushButton::clicked, this, &MainWindow::on_pushButtonRemoveSkill_clicked);

    updateUIFromCharacter();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_pushButtonNew_clicked() {
    currentCharacter = Character();
    updateUIFromCharacter();
}

void MainWindow::on_pushButtonOpen_clicked() {
    QString filename = QFileDialog::getOpenFileName(this, "Otwórz postać", "", "Pliki tekstowe (*.txt)");
    if (!filename.isEmpty()) {
        FileManager fm;
        try {
            currentCharacter = fm.loadCharacter(filename.toStdString());
            updateUIFromCharacter();
        } catch (...) {
            QMessageBox::warning(this, "Błąd", "Nie udało się wczytać postaci.");
        }
    }
}

void MainWindow::on_pushButtonSave_clicked() {
    updateCharacterFromUI();
    QString filename = QFileDialog::getSaveFileName(this, "Zapisz postać", "", "Pliki tekstowe (*.txt)");
    if (!filename.isEmpty()) {
        FileManager fm;
        try {
            fm.saveCharacter(currentCharacter, filename.toStdString());
        } catch (...) {
            QMessageBox::warning(this, "Błąd", "Nie udało się zapisać postaci.");
        }
    }
}

void MainWindow::on_pushButtonAddEquipment_clicked() {
    QString item = ui->lineEditAddEquipment->text();
    if (!item.isEmpty()) {
        ui->listWidgetEquipment->addItem(item);
        ui->lineEditAddEquipment->clear();
    }
}

void MainWindow::on_pushButtonRemoveEquipment_clicked() {
    QListWidgetItem* item = ui->listWidgetEquipment->currentItem();
    if (item) {
        delete item;
    }
}

void MainWindow::on_pushButtonAddSkill_clicked() {
    QString skill = ui->lineEditAddSkill->text();
    if (!skill.isEmpty()) {
        ui->listWidgetSkills->addItem(skill);
        ui->lineEditAddSkill->clear();
    }
}

void MainWindow::on_pushButtonRemoveSkill_clicked() {
    QListWidgetItem* item = ui->listWidgetSkills->currentItem();
    if (item) {
        delete item;
    }
}

void MainWindow::updateUIFromCharacter() {
    ui->lineEditName->setText(QString::fromStdString(currentCharacter.getName()));
    ui->comboBoxClass->setCurrentText(QString::fromStdString(currentCharacter.getClass()));
    ui->spinBoxLevel->setValue(currentCharacter.getLevel());
    ui->spinBoxAge->setValue(currentCharacter.getAge());
    ui->comboBoxGender->setCurrentText(QString::fromStdString(currentCharacter.getGender()));
    ui->comboBoxRace->setCurrentText(QString::fromStdString(currentCharacter.getRace()));
    ui->comboBoxAlignment->setCurrentText(QString::fromStdString(currentCharacter.getAlignment()));
    ui->textEditBackground->setPlainText(QString::fromStdString(currentCharacter.getBackground()));

    // Ekwipunek
    ui->listWidgetEquipment->clear();
    for (const auto& item : currentCharacter.getEquipment()) {
        ui->listWidgetEquipment->addItem(QString::fromStdString(item));
    }

    // Umiejętności
    ui->listWidgetSkills->clear();
    for (const auto& skill : currentCharacter.getSkills()) {
        ui->listWidgetSkills->addItem(QString::fromStdString(skill));
    }
}

void MainWindow::updateCharacterFromUI() {
    currentCharacter.setName(ui->lineEditName->text().toStdString());
    currentCharacter.setClass(ui->comboBoxClass->currentText().toStdString());
    currentCharacter.setLevel(ui->spinBoxLevel->value());
    currentCharacter.setAge(ui->spinBoxAge->value());
    currentCharacter.setGender(ui->comboBoxGender->currentText().toStdString());
    currentCharacter.setRace(ui->comboBoxRace->currentText().toStdString());
    currentCharacter.setAlignment(ui->comboBoxAlignment->currentText().toStdString());
    currentCharacter.setBackground(ui->textEditBackground->toPlainText().toStdString());

    // Ekwipunek
    std::vector<std::string> equipment;
    for (int i = 0; i < ui->listWidgetEquipment->count(); ++i) {
        equipment.push_back(ui->listWidgetEquipment->item(i)->text().toStdString());
    }
    currentCharacter.setEquipment(equipment);

    // Umiejętności
    currentCharacter.clearSkills();
    for (int i = 0; i < ui->listWidgetSkills->count(); ++i) {
        currentCharacter.addSkill(ui->listWidgetSkills->item(i)->text().toStdString());
    }
}
