#include "MainScene.h"

MainScene::MainScene(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    //场景初始化
    InitScene();
}

//场景初始化
void MainScene::InitScene()
{
    //初始化窗口大小
    setFixedSize(GAME_WIDTH, GAME_HEIGHT);

    //设置窗口标题
    setWindowTitle(GAME_TITLE);
}
