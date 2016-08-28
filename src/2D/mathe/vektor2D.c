//-----------------------------------------------------------------------------------------------//
//                             ______________________________________                            //
//                    ________|                                      |_______                    //
//                    \       |       Diese Datei ist ein Teil       |      /                    //
//                     \      |          von Physik-Engine           |     /                     //
//                     /      |______________________________________|     \                     //
//                    /__________)                                (_________\                    //
//                                                                                               //
//                                           MIT-Lizenz                                          //
//                                                                                               //
//                              Copyright (c) 2016 тнσмαѕ ѕтєιинσℓz                              //
//                                                                                               //
//              Hiermit wird unentgeltlich jeder Person, die eine Kopie der Software             //
//              und der zugehörigen Dokumentationen (die "Software") erhält, die                 //
//              Erlaubnis erteilt, sie uneingeschränkt zu nutzen, inklusive und ohne             //
//              Ausnahme mit dem Recht, sie zu verwenden, zu kopieren, zu verändern,             //
//              zusammenzufügen, zu veröffentlichen, zu verbreiten, zu unterlizenzieren          //
//              und/oder zu verkaufen, und Personen, denen diese Software überlassen             //
//              wird, diese Rechte zu verschaffen, unter den folgenden Bedingungen:              //
//                                                                                               //
//              Der obige Urheberrechtsvermerk und dieser Erlaubnisvermerk sind in               //
//              allen Kopien oder Teilkopien der Software beizulegen.                            //
//                                                                                               //
//              DIE SOFTWARE WIRD OHNE JEDE AUSDRÜCKLICHE ODER IMPLIZIERTE GARANTIE              //
//              BEREITGESTELLT, EINSCHLIEẞLICH DER GARANTIE ZUR BENUTZUNG FÜR DEN                //
//              VORGESEHENEN ODER EINEM BESTIMMTEN ZWECK SOWIE JEGLICHER                         //
//              RECHTSVERLETZUNG, JEDOCH NICHT DARAUF BESCHRÄNKT. IN KEINEM FALL                 //
//              SIND DIE AUTOREN ODER COPYRIGHTINHABER FÜR JEGLICHEN SCHADEN ODER                //
//              SONSTIGE ANSPRÜCHE HAFTBAR ZU MACHEN, OB INFOLGE DER ERFÜLLUNG EINES             //
//              VERTRAGES, EINES DELIKTES ODER ANDERS IM ZUSAMMENHANG MIT DER SOFTWARE           //
//              ODER SONSTIGER VERWENDUNG DER SOFTWARE ENTSTANDEN.                               //
//                                                                                               //
//-----------------------------------------------------------------------------------------------//

#include "2D/mathe/vektor2D.h"

const vektor2d_t PHYSIK_EINHEITS_VEKTOR2D = { 1, 1 };

const vektor2d_t PHYSIK_NULL_VEKTOR2D = { 0, 0 };

const vektor2d_t PHYSIK_Y_VEKTOR2D = { 0, 1 };

const vektor2d_t PHYSIK_X_VEKTOR2D = { 1, 0 };

void physik_vektor2d_hinzufugen(const vektor2d_t *a, const vektor2d_t *b, vektor2d_t* ergebnis)
{
    ergebnis->x = a->x + b->x;
    ergebnis->y = a->y + b->y;
}

void physik_vektor2d_subtrahieren(const vektor2d_t *a, const vektor2d_t *b, vektor2d_t* ergebnis)
{
    ergebnis->x = a->x - b->x;
    ergebnis->y = a->y - b->y;
}

double physik_vektor2d_entfernung(vektor2d_t *a, vektor2d_t *b)
{
    return (b->x - a->x)^2 + (b->y - a->x)^2;
}

void physik_skala_vektor2d(vektor2d_t *v, double skala)
{
    v->x *= skala;
    v->y *= skala;
}

void physik_vektor2d_lerp(vektor2d_t *v, vektor2d_t * ziel, double alpha, vektor2d_t* ergebnis)
{
    // TODO
}

void physik_vektor2d_klemme(vektor2d_t *v, double min, double max)
{
    // TODO
}
