#include "DiZhi_Wu.h"

DiZhi_Wu::DiZhi_Wu(void)
{
	this->dzid = DZwu;
}

DiZhi_Wu::~DiZhi_Wu(void)
{
}

string DiZhi_Wu::getName()
{
	return "��";
}

int DiZhi_Wu::getXing()
{
	return this->feature;
}
