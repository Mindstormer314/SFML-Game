#include <SFML/Graphics.hpp>
#include <chrono>
#include <thread>
#include <iostream>
#include <string>
#include <cmath>
#include "screens.h"

using namespace std;
using namespace sf;
using namespace screens;

void screens::menuscreen(RenderWindow &window, int highlighted, bool clicking){
    Font font;

    if (!font.loadFromFile("Bradley Hand Bold.ttf"))
    {
        window.close();
    }
    Font arial;

    if(!arial.loadFromFile("Arial.ttf")){
        window.close();
    }

    Text text;
    text.setFont(font);
    text.setString("Welcome to Game");
    text.setCharacterSize(220.f);
    text.setFillColor(Color(0, 0, 0));
    text.setPosition(100.f, 100.f);

    CircleShape StartButton(100.f);
    StartButton.setPosition(500.f, 700.f);
    StartButton.setFillColor(Color(255, 0, 0));
    StartButton.setOutlineThickness(1.f);
    StartButton.setOutlineColor(Color(0, 0, 0));

    Text StartText;
    StartText.setFont(arial);
    StartText.setString("Start");
    StartText.setCharacterSize(50.f);
    StartText.setFillColor(Color::Black);
    StartText.setPosition(540.f, 760.f);


    CircleShape InfoButton(100.f);
    InfoButton.setFillColor(Color(0, 255, 0));
    InfoButton.setPosition(900.f, 700.f);
    InfoButton.setOutlineColor(Color(0, 0, 0));
    InfoButton.setOutlineThickness(1.f);

    Text InfoText;
    InfoText.setFont(arial);
    InfoText.setString("Info");
    InfoText.setCharacterSize(50.f);
    InfoText.setFillColor(Color::Black);
    InfoText.setPosition(960.f, 760.f);

    
    CircleShape CreditButton(100.f);
    CreditButton.setFillColor(Color(100, 100, 255));
    CreditButton.setPosition(1300.f, 700.f);
    CreditButton.setOutlineColor(Color(0, 0, 0));
    CreditButton.setOutlineThickness(1.f);

    Text CreditText;
    CreditText.setFont(arial);
    CreditText.setString("Credits");
    CreditText.setCharacterSize(50.f);
    CreditText.setFillColor(Color::Black);
    CreditText.setPosition(1320.f, 760.f);

    switch(highlighted){
        case 1:
            StartButton.setOutlineThickness(4.f);
            StartButton.setFillColor(Color(255, 100, 100));
            if(clicking){
                StartButton.setOutlineThickness(1.f);
                StartButton.setFillColor(Color(200, 0, 0));
            }
            break;
        case 2:
            InfoButton.setOutlineThickness(4.f);
            InfoButton.setFillColor(Color(100, 255, 100));
            if(clicking){
                InfoButton.setOutlineThickness(1.f);
                InfoButton.setFillColor(Color(0, 200, 0));
            }
            break;
        case 3:
            CreditButton.setOutlineThickness(4.f);
            CreditButton.setFillColor(Color(200, 200, 255));
            if(clicking){
                CreditButton.setOutlineThickness(1.f);
                CreditButton.setFillColor(Color(0, 0, 255));
            }
            break;
    }


    window.draw(StartButton);
    window.draw(InfoButton);
    window.draw(CreditButton);
    window.draw(text);
    window.draw(StartText);
    window.draw(InfoText);
    window.draw(CreditText);
}
int screens::menubuttoncheck(int mousex, int mousey){
    if (pow((mousex-600), 2)+pow((mousey-800), 2) <= 10000){
        return 1;
    }
    else if (pow((mousex - 1000), 2) + pow((mousey - 800), 2) <= 10000){
        return 2;
    }
    else if (pow((mousex - 1400), 2) + pow((mousey - 800), 2) <= 10000){
        return 3;
    }
    
    return 0;
}
void screens::startscreen(RenderWindow &window){
    CircleShape StartButton(100.f);
    StartButton.setPosition(500.f, 700.f);
    StartButton.setFillColor(Color(255, 255, 255));
    StartButton.setOutlineThickness(1.f);
    StartButton.setOutlineColor(Color(0, 0, 0));
    window.draw(StartButton);
}
void screens::creditscreen(RenderWindow &window){
    CircleShape StartButton(100.f);
    StartButton.setPosition(500.f, 700.f);
    StartButton.setFillColor(Color(0, 255, 0));
    StartButton.setOutlineThickness(1.f);
    StartButton.setOutlineColor(Color(0, 0, 0));
    window.draw(StartButton);
}
void screens::infoscreen(RenderWindow &window){
    CircleShape StartButton(100.f);
    StartButton.setPosition(500.f, 700.f);
    StartButton.setFillColor(Color(0, 0, 255));
    StartButton.setOutlineThickness(1.f);
    StartButton.setOutlineColor(Color(0, 0, 0));
    window.draw(StartButton);
}
