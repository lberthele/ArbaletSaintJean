#ifndef ANIMATION_H
#define ANIMATION_H


/** Classe mère Animation

    Toutes les animations doivent hériter de cette classe mère, s'inspirer de l'exemple vide
    Les mots clés virtual et =0 permettent de forcer les créateurs d'animation à créer une fonction du même nom

    TODO : cette classe devrait être "virtual pure" en C++, mais pas forcément compatible avec les compilateurs AVR
**/

class Animation
{
  public:
    Animation();
    int setup(unsigned int height, unsigned int width, unsigned int loops);
    void loop();
};

#endif