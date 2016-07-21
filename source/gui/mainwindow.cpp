#include "platform.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"


namespace avplayer
{
	//-------------------------------------------------------------------------------------------------
	MainWindow::MainWindow(QWidget* parent) :
		QMainWindow(parent),
		m_ui(new Ui::MainWindow)
	{
		m_ui->setupUi(this);
	}

	//-------------------------------------------------------------------------------------------------
	MainWindow::~MainWindow()
	{
		delete m_ui;
	}

	//-------------------------------------------------------------------------------------------------
	void MainWindow::onScanDirectory()
	{
	}
}
