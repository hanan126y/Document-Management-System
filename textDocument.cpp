// ========================= TextDocument.cpp =========================

#include "TextDocument.h"

TextDocument::TextDocument(int i, string t, string c)
    : Document(i, t, c)
{
}

void TextDocument::display()
{
    cout << "\n----- TEXT DOCUMENT -----\n";
    cout << "ID: " << id << endl;
    cout << "Title: " << title << endl;
    cout << "Content: " << content << endl;
}

string TextDocument::getType()
{
    return "Text";
}