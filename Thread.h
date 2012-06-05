#ifndef THREAD_H
#define THREAD_H

#include <QThread>

class Thread : public QThread
{
	Q_OBJECT
public:
	explicit Thread();
	~Thread();
private:
	void run();
};

#endif // THREAD_H
