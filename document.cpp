// ========================= Document.cpp =========================

#include "Document.h"

Document::Document()
{
    id = 0;
    title = "";
    content = "";
}

Document::Document(int i, string t, string c)
{
    id = i;
    title = t;
    content = c;
}

int Document::getId()
{
    return id;
}

string Document::getTitle()
{
    return title;
}

string Document::getContent()
{
    return content;
}

void Document::setTitle(string t)
{
    title = t;
}

void Document::setContent(string c)
{
    content = c;
}