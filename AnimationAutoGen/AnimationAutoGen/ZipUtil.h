#pragma once
#include "zip/include/zlib.h"

#define CHUNK 16384

class CZipUtil
{
public:
	CZipUtil(void);
	static int CZipErgodic(TCHAR *sourPath, FILE *destFile, int level);
	static int CZipCompress(TCHAR *sourPath, TCHAR *destFile, int level);
	static int CZipCompress(FILE *source, FILE *dest, int level);
	static int CZipDecompress(FILE *source, FILE *dest);
	~CZipUtil(void);
};
