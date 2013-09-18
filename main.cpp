#include <QtCore/QTextCodec>
#include <QDebug>

int main()
{
	// Debug output to console

	// This works ONLY if UTF-8 coding is set up for the project sources !
	// And it works only to Qt Creator output console (when terminal is switched off).
	qDebug() << "отладочная информация" << endl;


	// Output to console or terminal
	QTextStream cout(stdout);
	QTextCodec *codec = QTextCodec::codecForName("CP866"); // Code Page for terminal in Windows
	cout.setCodec(codec);

	// This works without encoding to Qt Creator output console (if output to terminal is switched off).
	cout << QString("вывод в консоль и терминал") << endl;

	return 0;
}
