#pragma once
#include <iostream>

#include <cmath>

class Vector3 {
public:
    float X, Y, Z;
    void Diagnose() {
        std::cout << X << "," << Y << "," << Z << " | " << Magnitude() << "\n";
    }

    double Magnitude() {
        float Equation = X * X + Y * Y + Z * Z;
        return sqrt(Equation);
    }

    Vector3();
    Vector3(float t_X, float t_Y, float t_Z);
    
    Vector3 operator+(const Vector3& other) {
        return Vector3(X + other.X, Y + other.Y, Z + other.Z);
    };

    Vector3 operator-(const Vector3& other) {
        return Vector3(X - other.X, Y - other.Y, Z - other.Z);
    };

    Vector3 operator*(const Vector3& other) const
    {
        return Vector3(X * other.X, Y * other.Y, Z * other.Z);
    }

    Vector3 operator=(const Vector3& other) {
        return other;
    };


private:

};