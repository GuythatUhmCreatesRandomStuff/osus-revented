#pragma once

#include "raylib.h"
#include <string.h>
#include <filesystem>
#include <memory>
#include "gamemanager.hpp"

class State;

struct Globals {
    float Scale = 1.f;
    Vector2 ZeroPoint = {0.f, 0.f};
    Color Background = { 30, 0, 60, 255 };
    //Color Background = {42,22,33,255};
    int skinNumberOverlap = 18;
    int FPS = 1440;
    int Width = 640;
    int Height = 480;
    float offset = 45.0f;

    struct timespec ts1 = timespec{0,0}, ts2 = timespec{0,0};
    bool paused = false;

    unsigned long long int curTime = 0;
    double curTime2 = 0;
    unsigned long long int startsTime = 0;
    unsigned long long int pausedFor = 0;
    Texture2D cursor;
    Texture2D cursorTrail;
    bool MouseInFocus = false;
    int MouseBlur = 20;
    Vector2 MousePosition;

    Font DefaultFont;

    std::string Path = std::filesystem::current_path().string();
    std::string BeatmapLocation = std::filesystem::current_path().string() + "/beatmaps";
    std::string GamePath = std::filesystem::current_path().string();
    std::string selectedPath = "";
    std::string CurrentLocation = std::filesystem::current_path().string();
    int MouseTrailSize = 150;

    float FrameTimeCounterWheel = 0.f;

    Texture2D OsusLogo;

    bool Key1P = false;
    bool Key1D = false;
    bool Key2P = false;
    bool Key2D = false;
    bool Key1R = false;
    bool Key2R = false;
    bool enableMouse = true;
    int Wheel = 0;

    std::shared_ptr<State> CurrentState;

    GameManager *gameManager = GameManager::getInstance();

    Globals() = default;

    
};

extern Globals Global;
