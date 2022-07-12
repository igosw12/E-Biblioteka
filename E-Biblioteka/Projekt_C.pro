#-------------------------------------------------
#
# Project created by QtCreator 2021-12-05T10:49:06
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Projekt_C
TEMPLATE = app


SOURCES += main.cpp\
    logowanie.cpp \
        menu.cpp \
    rejestracja.cpp \
    wypozyczenia.cpp \
    baza_ksiazek.cpp \
    baza_czytlenikow.cpp \
    terminy.cpp \
    dodaj_wypozyczenie.cpp \
    dodaj_ksiazke.cpp \
    usun_ksiazke.cpp \
    edytuj_ksiazke.cpp \
    wyswietl_ksiazki.cpp

HEADERS  += menu.h \
    logowanie.h \
    rejestracja.h \
    wypozyczenia.h \
    baza_ksiazek.h \
    baza_czytlenikow.h \
    terminy.h \
    dodaj_wypozyczenie.h \
    dodaj_ksiazke.h \
    usun_ksiazke.h \
    edytuj_ksiazke.h \
    wyswietl_ksiazki.h

FORMS    += menu.ui \
    logowanie.ui \
    rejestracja.ui \
    wypozyczenia.ui \
    baza_ksiazek.ui \
    baza_czytlenikow.ui \
    terminy.ui \
    dodaj_wypozyczenie.ui \
    dodaj_ksiazke.ui \
    usun_ksiazke.ui \
    edytuj_ksiazke.ui \
    wyswietl_ksiazki.ui
