#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow )
{
    ui->setupUi(this);

    //设定编辑框清除文本按钮
    ui->edit_url->setClearButtonEnabled(true);

    ui->edit_dir->setClearButtonEnabled(true);

    ui->edit_file->setClearButtonEnabled(true);


    ui->progressBar->setValue(0);
}



//网络响应结束
void MainWindow::onFinished()
{
    QFileInfo fileinfo;
    fileinfo.setFile(downloadedFile->fileName());


    downloadedFile->close();
    delete downloadedFile; //删除缓冲区
    downloadedFile = Q_NULLPTR; // 重置指针


    reply->deleteLater();
    reply = Q_NULLPTR; //重置指针

    ui->progressBar->setValue(100);

    if(ui->checkBox->isChecked()) //勾选打开文件
    {
        QDesktopServices::openUrl(QUrl::fromLocalFile(fileinfo.absoluteFilePath()));//根据下载文件的绝对地址打开文件
    }


    QMessageBox::information(this, "下载完成", "下载完成");


    ui->pbtn_download->setEnabled(true);
    ui->progressBar->setValue(0);
}

//读取下载数据
void MainWindow::onReadyRead()
{
    downloadedFile->open(QIODevice::WriteOnly);
    downloadedFile->write( reply->readAll());
}

//下载进度条
void MainWindow::onDownloadProgress(qint64 bytesRead, qint64 totalBytes)
{
    ui->progressBar->setMaximum(totalBytes);
    ui->progressBar->setValue(bytesRead);
}


//选择文件夹按钮
void MainWindow::on_selectDownloadDir_clicked()
{
    QString folderPath = QFileDialog::getExistingDirectory(nullptr, "选择文件夹", QDir::currentPath()) + "/";
    ui->edit_dir->setText(QString(folderPath));
    ui->edit_dir->setCursorPosition(0);
}



//下载按钮
void MainWindow::on_pbtn_download_clicked()
{
    //点击下载按钮 获取编辑框中的文本
    qDebug() <<  ui->edit_url->text();
    qDebug() <<  ui->edit_dir->text();
    qDebug() <<  ui->edit_file->text();

    ui->pbtn_download->setEnabled(false); //按钮不可点击



    QString urlSpec = ui->edit_url->text().trimmed() + ui->edit_file->text().trimmed(); //将得到的字符进行格式转换
    QUrl newUrl = QUrl::fromUserInput(urlSpec); //完整的url



    QString tempDir = ui->edit_dir->text().trimmed();

    QString fullFileName = tempDir + newUrl.fileName(); //保存的文件名 进行拼接
    downloadedFile = new QFile(fullFileName);

    reply = networkManager.get(QNetworkRequest(newUrl));


    connect(reply, &QNetworkReply::finished, this, &MainWindow::onFinished );
    connect(reply, &QNetworkReply::readyRead, this, &MainWindow::onReadyRead );
    connect(reply, SIGNAL(downloadProgress(qint64,qint64)), this, SLOT(onDownloadProgress(qint64,qint64)) );
}





//退出按钮
void MainWindow::on_pbtn_quit_clicked( )
{
    close();
}


MainWindow::~MainWindow()
{
    delete ui;
}


