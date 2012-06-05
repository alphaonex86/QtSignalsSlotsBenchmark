#include "FakeObject.h"

FakeObject::FakeObject()
{
}

void FakeObject::fakeSlot(QByteArray data,QString string,bool boolean)
{
	Q_UNUSED(data);
	Q_UNUSED(string);
	Q_UNUSED(boolean);
}
