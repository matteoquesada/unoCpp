#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
using namespace sf;

#include "deck.h"
#include "card.h"

// SPRITE & TEXTURE OBJECTS EXTERN DECLARATION IN ORDER TO BE USED IN OTHER FILES
// EXTERN MEANS THAT THE OBJECT IS DECLARED IN ANOTHER FILE AND IS DEFINED IN THIS FILE
// EXTERN IS USED TO AVOID MULTIPLE DEFINITION ERRORS
extern Deck deck;
extern Texture wallpaperTexture;
extern Sprite wallpaperSprite;
extern Texture wallpapergGameModeTexture;
extern Sprite wallpaperGameModeSprite;
extern Texture wallpaperInGameTexture;
extern Sprite wallpaperInGameSprite;
extern Texture logoTexture;
extern Sprite logoSprite;
extern Sprite shadowSprite;
extern Texture buttonPVPTexture;
extern Sprite buttonPVPSprite;
extern Texture buttonPVETexture;
extern Sprite buttonPVESprite;
extern SoundBuffer clickSoundBuffer;
extern Sound clickSound;
extern SoundBuffer clickLogoSoundBuffer;
extern Sound clickLogoSound;

class Game {
public:
    Game();
    void run(sf::RenderWindow& window);
    Card& operator=(const Card& other);

private:
    // PRIVATE VARIABLES
    Deck deck; // DECK OBJECT TO BE USED IN THE GAME INSIDE THE GAME CLASS
    int currentDisplay; // INTEGER TO KEEP TRACK OF THE CURRENT DISPLAY
    void initializeResources();
    void initializeTextureAndSprite(sf::Texture& texture, sf::Sprite& sprite, const std::string& textureFile, float x, float y, float scaleX = 1.0f, float scaleY = 1.0f);
    void initializeSound(sf::Sound& sound, sf::SoundBuffer& soundBuffer, const std::string& soundFile);
    void handleMainMenu(sf::RenderWindow& window);
    void handleGameModeMenu(sf::RenderWindow& window);
    void handleInGamePVE(sf::RenderWindow& window);
};

