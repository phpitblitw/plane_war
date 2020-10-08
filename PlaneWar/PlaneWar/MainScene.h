#pragma once

#include <QtWidgets/QWidget>
#include "ui_MainScene.h"
#include "config.h"

class MainScene : public QWidget
{
    Q_OBJECT

public:
    MainScene(QWidget *parent = Q_NULLPTR);

    //≥°æ∞≥ı ºªØ
    void InitScene();

private:
    Ui::MainSceneClass ui;
};
