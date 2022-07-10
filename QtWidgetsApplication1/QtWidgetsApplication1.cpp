#include "QtWidgetsApplication1.h"
#include "ui_QtWidgetsApplication1.h"
#include <QtCore>
#include <QtGui>
#include <fstream>
#include <string>
#include <QDebug>

QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

QtWidgetsApplication1::~QtWidgetsApplication1()
{

}
void QtWidgetsApplication1::on_showAllButton_clicked() {
    ui.textEdit->setText("");
    std::ifstream read("numbers.txt");
    while (read) {
        std::string str;
        getline(read, str);
        if (str.empty()) break;
        std::string user = str.substr(0, str.find(":"));
        str.erase(0, str.find(":")+1);
        std::list<std::string> list{};
        while (str.find(",")!=std::string::npos) {
            list.push_front(str.substr(0, str.find(",")));
            str.erase(0, str.find(",") +1);
        }
        list.push_front(str);
        nums.insert({ user, list });
        std::string l = "";
        size_t i = 1;
        for (std::string it:list) {
            l.append(it);
            if (i != list.size()) l.append(", ");
            i++;
        }
        ui.textEdit->append(QString::fromStdString(user)+": "+ QString::fromStdString(l));
    }
}

void QtWidgetsApplication1::on_deleteButton_clicked() {
    ui.textEdit->setText("");
    std::ifstream read("numbers.txt");
    while (read) {
        std::string str;
        getline(read, str);
        if (str.empty()) break;
        std::string user = str.substr(0, str.find(":"));
        str.erase(0, str.find(":") + 1);
        std::list<std::string> list{};
        while (str.find(",") != std::string::npos) {
            list.push_front(str.substr(0, str.find(",")));
            str.erase(0, str.find(",") + 1);
        }
        list.push_front(str);
        nums.insert({ user, list });
        std::string l = "";
        size_t i = 1;
        for (std::string it : list) {
            l.append(it);
            if (i != list.size()) l.append(", ");
            i++;
        }
    }
    if (ui.personEdit->toPlainText().toStdString().empty() == ui.phoneEdit->toPlainText().toStdString().empty()) ui.textEdit->setText("Wrong input. Please, write data either only into Person field or only into Phone field");
    else if (!ui.personEdit->toPlainText().toStdString().empty()) {
        if (nums.find(ui.personEdit->toPlainText().toStdString()) != nums.end()) {
            nums.erase(ui.personEdit->toPlainText().toStdString());
            ui.textEdit->setText("Success!");
        }
        else  ui.textEdit->setText("There is no abonent in Phone Book with this nickname");
    }
    else if (!ui.phoneEdit->toPlainText().toStdString().empty()) {
        std::map <std::string, std::list<std::string>>::iterator itr;
        bool found = false;
        for (itr = nums.begin(); itr != nums.end(); ++itr) {
            std::string key = itr->first;
            std::list<std::string> val = itr->second;
            for (std::string it : val) {
                if (it == ui.phoneEdit->toPlainText().toStdString()) {
                    found = true;
                }
            }
            if (found == true) {
                itr->second.remove(ui.phoneEdit->toPlainText().toStdString());
                if (itr->second.empty()) nums.erase(key);
                ui.textEdit->setText("Success!");
                break;
            }
        }
        if (found == false) {
            ui.textEdit->setText("There is no abonent in Phone Book with this number");
        }
    }
    read.close();

    std::ofstream write_clear("numbers.txt", std::ofstream::out | std::ofstream::trunc);
    write_clear.close();
    std::ofstream write("numbers.txt");
    std::map <std::string, std::list<std::string>>::iterator itr;
    for (itr = nums.begin(); itr != nums.end(); ++itr) {
        std::string key = itr->first;
        std::list<std::string> val = itr->second;
        std::string l = "";
        size_t i = 1;
        for (std::string it : val) {
            l.append(it);
            if (i != val.size()) l.append(",");
            i++;
        }
        std::string wr = (key + ":" + l);
        write << wr+"\n";
    }
    write.close();
}
void QtWidgetsApplication1::on_addButton_clicked() {
    ui.textEdit->setText("");
    std::ifstream read("numbers.txt");
    while (read) {
        std::string str;
        getline(read, str);
        if (str.empty()) break;
        std::string user = str.substr(0, str.find(":"));
        str.erase(0, str.find(":") + 1);
        std::list<std::string> list{};
        while (str.find(",") != std::string::npos) {
            list.push_front(str.substr(0, str.find(",")));
            str.erase(0, str.find(",") + 1);
        }
        list.push_front(str);
        nums.insert({ user, list });
        std::string l = "";
        size_t i = 1;
        for (std::string it : list) {
            l.append(it);
            if (i != list.size()) l.append(", ");
            i++;
        }
    }
    if (ui.personEdit->toPlainText().toStdString().empty()==true || ui.phoneEdit->toPlainText().toStdString().empty()==true) ui.textEdit->setText("Wrong input. Please, write data both into Person field and Phone field");
    else {
        bool found = false;
        std::map <std::string, std::list<std::string>>::const_iterator pos = nums.find(ui.personEdit->toPlainText().toStdString());
        if (pos != nums.end()) {
            std::list<std::string> val = pos->second;
            for (std::string it : val) {
                if (it == ui.phoneEdit->toPlainText().toStdString()) {
                    found = true;
                }
            }
            if (found == true) {
                ui.textEdit->setText("The number is already added.");
            }
            else { nums.find(ui.personEdit->toPlainText().toStdString())->second.push_front(ui.phoneEdit->toPlainText().toStdString()); ui.textEdit->setText("Success!");
            }
        }
        else {
            std::map <std::string, std::list<std::string>>::iterator itr;
            bool found = false;
            for (itr = nums.begin(); itr != nums.end(); ++itr) {
                std::string key = itr->first;
                std::list<std::string> val = itr->second;
                for (std::string it : val) {
                    if (it == ui.phoneEdit->toPlainText().toStdString()) {
                        found = true;
                    }
                }
                if (found == true) {
                    ui.textEdit->setText("The number is already added.");
                    break;
                }
            }
            if (found == false) {
                std::list<std::string> now{};
                now.push_front(ui.phoneEdit->toPlainText().toStdString());
                nums.insert({ ui.personEdit->toPlainText().toStdString(), now });
                ui.textEdit->setText("Success!");
            }
        }
    }
    read.close();

    std::ofstream write_clear("numbers.txt", std::ofstream::out | std::ofstream::trunc);
    write_clear.close();
    std::ofstream write("numbers.txt");
    std::map <std::string, std::list<std::string>>::iterator itr;
    for (itr = nums.begin(); itr != nums.end(); ++itr) {
        std::string key = itr->first;
        std::list<std::string> val = itr->second;
        std::string l = "";
        size_t i = 1;
        for (std::string it : val) {
            l.append(it);
            if (i != val.size()) l.append(",");
            i++;
        }
        std::string wr = (key + ":" + l);
        write << wr + "\n";
    }
    write.close();
}
void QtWidgetsApplication1::on_findButton_clicked() {
    ui.textEdit->setText("");
    std::ifstream read("numbers.txt");
    while (read) {
        std::string str;
        getline(read, str);
        if (str.empty()) break;
        std::string user = str.substr(0, str.find(":"));
        str.erase(0, str.find(":") + 1);
        std::list<std::string> list{};
        while (str.find(",") != std::string::npos) {
            list.push_front(str.substr(0, str.find(",")));
            str.erase(0, str.find(",") + 1);
        }
        list.push_front(str);
        nums.insert({ user, list });
        std::string l = "";
        size_t i = 1;
        for (std::string it : list) {
            l.append(it);
            if (i != list.size()) l.append(", ");
            i++;
        }
    }
        if (ui.personEdit->toPlainText().toStdString().empty() == ui.phoneEdit->toPlainText().toStdString().empty()) ui.textEdit->setText("Wrong input. Please, write data either only into Person field or only into Phone field");
        else if (!ui.personEdit->toPlainText().toStdString().empty()) {
            if (nums.find(ui.personEdit->toPlainText().toStdString())!=nums.end()){
                std::string l = "";
                size_t i = 1;
                for (std::string it : nums.at(ui.personEdit->toPlainText().toStdString())) {
                    l.append(it);
                    if (i != nums.at(ui.personEdit->toPlainText().toStdString()).size()) l.append(", ");
                    i++;
                }
                ui.textEdit->setText(QString::fromStdString(ui.personEdit->toPlainText().toStdString()) + ": " + QString::fromStdString(l));
            }
            else  ui.textEdit->setText("There is no abonent in Phone Book with this nickname");
        }
        else if (!ui.phoneEdit->toPlainText().toStdString().empty()) {
            std::map <std::string, std::list<std::string>>::iterator itr;
            bool found = false;
            for (itr = nums.begin(); itr != nums.end(); ++itr) {
                std::string key = itr->first;
                std::list<std::string> val = itr->second;
                std::string l = "";
                size_t i = 1;
                for (std::string it : val) {
                    l.append(it);
                    if (it == ui.phoneEdit->toPlainText().toStdString()) {
                        found = true;
                    }
                    if (i != val.size()) l.append(", ");
                    i++;
                }
                if (found == true) {
                    ui.textEdit->setText(QString::fromStdString(key) + ": " + QString::fromStdString(l));
                    break;
                }
            }
            if (found == false) {
                ui.textEdit->setText("There is no abonent in Phone Book with this number");
            }
    }
}

