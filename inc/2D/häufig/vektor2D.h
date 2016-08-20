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

#ifndef PHYSIK_ENGINE_2D_VEKTOR_H
#define PHYSIK_ENGINE_2D_VEKTOR_H

///////////////////////////////////////////////////////////////////////////////////////////////////
/// Eine Struktur 2D Vektor, der einen Koordinatenpunkt darstellt
///////////////////////////////////////////////////////////////////////////////////////////////////
typedef struct
{
    double x; ///< Die X Koordinatenpunkt
    double y; ///< Die Y Koordinatenpunkt
} vektor2d_t;

const extern vektor2d_t PHYSIK_EINHEITS_VEKTOR2D; ///< Die X und Y sind ein.
const extern vektor2d_t PHYSIK_NULL_VEKTOR2D;     ///< Die X und Y sind null.
const extern vektor2d_t PHYSIK_Y_VEKTOR2D;        ///< Die X sind null und die Y sind ein.
const extern vektor2d_t PHYSIK_X_VEKTOR2D;        ///< Die X sind ein und die X sind null.

///////////////////////////////////////////////////////////////////////////////////////////////////
/// Fügen Sie zusammen zwei Vektoren.
/// \f$(x_1 + x_2, y_1 + y_2)\f$
///
/// @param[im] a - Ein Vektor.
/// @param[im] b - Ein Vektor.
///
/// @return Die neu Summe Vektor.
///////////////////////////////////////////////////////////////////////////////////////////////////
vektor2d_t* physik_vektor2d_hinzufugen(vektor2d_t *a, vektor2d_t *b);

///////////////////////////////////////////////////////////////////////////////////////////////////
/// Subtrahieren zwei Vektoren.
/// \f$(x_2 - x_1, y_2 - y_1)\f$
///
/// @param[im] a - Ein Vektor.
/// @param[im] b - Ein Vektor.
///
/// @return Die Differenz der beiden Vektoren.
///////////////////////////////////////////////////////////////////////////////////////////////////
vektor2d_t* physik_vektor2d_subtrahieren(vektor2d_t *a, vektor2d_t *b);

///////////////////////////////////////////////////////////////////////////////////////////////////
/// Findet sich der Abstand zwischen zwei Vektoren.
/// \f$\sqrt{(x_2-x_1)^2+(y_2-y_1)^2}\f$
///
/// @param[im] a - Ein Vektor.
/// @param[im] b - Ein Vektor.
///
/// @return Der Abstand zwischen den beiden Vektoren.
///////////////////////////////////////////////////////////////////////////////////////////////////
double physik_vektor2d_entfernung(vektor2d_t *a, vektor2d_t *b);

///////////////////////////////////////////////////////////////////////////////////////////////////
/// Waagen der Vektor der Komponenten.
/// \f$(x * skala, y * skala)\f$
///
/// @param[im/aus] v - Der Vektor skaliert bekommen.
/// @param[im] skala - Was die Komponenten skaliert durch.
///////////////////////////////////////////////////////////////////////////////////////////////////
void physik_skala_vektor2d(vektor2d_t *v, double skala);

///////////////////////////////////////////////////////////////////////////////////////////////////
/// Linear interpoliert zwischen zwei Vektoren.
/// \f$y=y_0 + (y_1 - y_0)\tfrac{x-x_0}{x_1-x_0}\f$
///
/// @param[im/aus] v - Der Vektor interpoliert zu werden.
/// @param[im] ziel - Der Vektor zur Interpolation mit.
/// @param[im] alpha - Die Interpolant. [0-1]
///
/// @return Die interpoliert Vektor.
///////////////////////////////////////////////////////////////////////////////////////////////////
vektor2d_t* physik_vektor2d_lerp(vecktor2d_t *v, vektor2d_t * ziel, double alpha);

///////////////////////////////////////////////////////////////////////////////////////////////////
/// Beschränken Sie einen Vektor zu einem Bereich.
/// \f$(min <= x <= max, min <= y <= max)\f$
///
/// @param[im/aus] v - Ein Vektor.
/// @param[im] min - Der Mindestwert.
/// @param[im] max - Der Maximalwert.
///////////////////////////////////////////////////////////////////////////////////////////////////
void physik_vektor2d_klemme(vektor2d_t *v, double min, double max);

#endif // PHYSIK_ENGINE_2D_VEKTOR_H
