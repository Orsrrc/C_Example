#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QFile>
#include <QDir>
#include <QFileDialog>
#include <QDesktopServices>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_pbtn_quit_clicked( );

    void on_pbtn_download_clicked();

    void onFinished();

    void onReadyRead();

    void onDownloadProgress(qint64 bytesRead, qint64 totalBytes);


    void on_selectDownloadDir_clicked();

private:
    Ui::MainWindow *ui;


    QNetworkAccessManager networkManager;//http访问管理器
    QNetworkReply* reply; //网络响应
    QFile* downloadedFile; //下载保存的临时文件


};
#endif // MAINWINDOW_H
