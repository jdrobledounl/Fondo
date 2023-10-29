#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace sf;

// Variables
Texture texture_fondo;
Sprite sprite_fondo;


int main() {

    // Cargamos la textura de fondo de pantalla para el juego
    texture_fondo.loadFromFile("fondo.jpg");

    // Cargamos el material del sprite 
    sprite_fondo.setTexture(texture_fondo);

    sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Fondo de pantalla para videojuego");

    while (App.isOpen()) {
        sf::Event event;
        while (App.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                App.close();
            }
        }

        App.clear(sf::Color::White); // Limpiar la ventana con color blanco

        // Dibujar el fondo
        sprite_fondo.setPosition(0, 0); // Esquina superior izquierda
        App.draw(sprite_fondo);

        
        App.display(); // Mostrar todo en la ventana
    }

    return 0;
}
