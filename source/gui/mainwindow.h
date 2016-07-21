#pragma once

namespace Ui {
	class MainWindow;
}

namespace avplayer
{
	//-------------------------------------------------------------------------------------------------
	/// MainWindow
	//-------------------------------------------------------------------------------------------------
	class MainWindow : public QMainWindow
	{
		Q_OBJECT

	private:
		Ui::MainWindow*				m_ui;

	public:
		explicit MainWindow(QWidget* parent = 0);
		~MainWindow();

	public slots:
		void onScanDirectory();
	};
}
