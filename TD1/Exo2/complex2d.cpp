#include <iostream>
#include "complex2d.h"

Complex2D::Complex2D(double reel, double imaginaire) : t_reel(reel), t_imaginaire(imaginaire)
{
    t_reel = reel;
    t_imaginaire = imaginaire;
}

Complex2D::Complex2D(double valeur) : t_reel(valeur), t_imaginaire(valeur)
{
    t_reel = valeur;
    t_imaginaire = valeur;
}

Complex2D::Complex2D(const Complex2D& complex_copy_obj) {
    t_reel = complex_copy_obj.t_reel;
    t_imaginaire = complex_copy_obj.t_imaginaire;
}

Complex2D Complex2D::operator+(const Complex2D& complex_copy_obj) const {
    return Complex2D(t_reel + complex_copy_obj.t_reel, t_imaginaire + complex_copy_obj.t_imaginaire);
}

Complex2D Complex2D::operator-(const Complex2D& complex_copy_obj) const {
    return Complex2D(t_reel - complex_copy_obj.t_reel, t_imaginaire - complex_copy_obj.t_imaginaire);
}

Complex2D Complex2D::operator*(const Complex2D& complex_copy_obj) const {
    return Complex2D(t_reel * complex_copy_obj.t_reel, t_imaginaire * complex_copy_obj.t_imaginaire);
}

Complex2D Complex2D::operator/(const Complex2D& complex_copy_obj) const {
    return Complex2D(t_reel / complex_copy_obj.t_reel, t_imaginaire / complex_copy_obj.t_imaginaire);
}

Complex2D Complex2D::operator<(const Complex2D& complex_copy_obj) const {
    return Complex2D(t_reel < complex_copy_obj.t_reel, t_imaginaire < complex_copy_obj.t_imaginaire);
}

Complex2D Complex2D::operator>(const Complex2D& complex_copy_obj) const {
    return Complex2D(t_reel > complex_copy_obj.t_reel, t_imaginaire > complex_copy_obj.t_imaginaire);
}

void Complex2D::setReel(double reel)
{
    t_reel = reel;
}

void Complex2D::setImaginaire(double imaginaire)
{
    t_imaginaire = imaginaire;
}

double Complex2D::getReel() const
{
    return t_reel;
}

double Complex2D::getImaginaire() const
{
    return t_imaginaire;
}