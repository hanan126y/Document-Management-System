// ========================= PDFDocument.cpp =========================

#include "PDFDocument.h"

PDFDocument::PDFDocument(int i, string t, string c)
    : Document(i, t, c)
{
}

void PDFDocument::display()
{
    cout << "\n----- PDF DOCUMENT -----\n";
    cout << "ID: " << id << endl;
    cout << "Title: " << title << endl;
    cout << "Content: " << content << endl;
}

string PDFDocument::getType()
{
    return "PDF";
}