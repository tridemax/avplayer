#include "platform.h"
#include "source/gui/mainwindow.h"


//-------------------------------------------------------------------------------------------------
/// main
//-------------------------------------------------------------------------------------------------
int main(int argc, char** argv)
{
	QApplication a(argc, argv);

	avplayer::MainWindow w;
	w.show();

	return a.exec();
}
