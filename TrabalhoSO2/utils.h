#include <windows.h>
#include <tchar.h>
#include <strsafe.h>
#include <fcntl.h>
#include <io.h>
#include <math.h>
#include <stdio.h>
#include "../Memory.h"
#include <time.h>


LARGE_INTEGER intToLargeInt(int i);
Board* setupBoard(MemDados* data, DWORD actualSize);
void printBoard(MemDados* dados);