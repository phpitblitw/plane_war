#include "MainScene.h"

MainScene::MainScene(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    //������ʼ��
    InitScene();
}

//������ʼ��
void MainScene::InitScene()
{
    //��ʼ�����ڴ�С
    setFixedSize(GAME_WIDTH, GAME_HEIGHT);

    //���ô��ڱ���
    setWindowTitle(GAME_TITLE);
}
