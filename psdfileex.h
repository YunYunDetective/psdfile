#ifndef __PSDFILEEX_H__
#define __PSDFILEEX_H__

#include "psdparse/psdfile.h"

// �Œ胁��������ǂݍ��ރo�[�W����
class PSDFileEx : public psd::PSDFile
{
public:
	PSDFileEx() {}
	bool loadMemory(unsigned char *begin, unsigned char *end);
};

#endif

