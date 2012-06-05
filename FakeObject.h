#ifndef FAKEOBJECT_H
#define FAKEOBJECT_H

#include <QObject>

class FakeObject : public QObject
{
	Q_OBJECT
public:
	explicit FakeObject();
public slots:
	void fakeSlot(QByteArray data,QString string,bool boolean);
signals:
	void fakeSignal(QByteArray data,QString string,bool boolean);
};

#endif // FAKEOBJECT_H
