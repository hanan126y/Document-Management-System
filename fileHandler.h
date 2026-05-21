// ========================= FileHandler.h =========================

#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <vector>
#include <fstream>
#include "Document.h"

using namespace std;

class FileHandler
{
public:
    static void saveToFile(vector<Document*> &docs);
};

#endif