#pragma once
#include <iostream>

#include <cmath>

class Vector2 {
public:
    float X, Y;
    void Diagnose() {
        std::cout << X << "," << Y << " | " << Magnitude() << "\n";
    }

    double Magnitude() {
        float Equation = X * X + Y * Y;
        return sqrt(Equation);
    }

    double dot(const Vector2& other) const {
        return X * other.X + Y * other.Y;
    }

    Vector2();
    Vector2(float t_X, float t_Y);

    Vector2 operator+(const Vector2& other) {
        return Vector2(X + other.X, Y + other.Y);
    };

    Vector2 operator-(const Vector2& other) {
        return Vector2(X - other.X, Y - other.Y);
    };

    Vector2 operator*(const Vector2& other) const
    {
        return Vector2(X * other.X, Y * other.Y);
    }

    Vector2 operator*(double s) const {
        return { X * s, Y * s };
    }
    Vector2 operator/(double s) const {
        return { X / s, Y / s };
    }

    Vector2 operator=(const Vector2& other) {
        return other;
    };

    double length() const {
        return std::sqrt(dot(*this));
    }

    Vector2 normalized() const {
        return *this * (1.0 / length());
    }

private:

};

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

    Vector3 operator*(double s) const {
        return { X * s, Y * s, Z * s };
    }

    Vector3 operator=(const Vector3& other) {
        return other;
    };

    double dot(const Vector3& other) const {
        return X * other.X + Y * other.Y + Z * other.Z;
    }

    Vector3 cross(const Vector3& other) const {
        return {
          Y * other.Z - Z * other.Y,
          Z * other.X - X * other.Z,
          X * other.Y - Y * other.X
        };
    }


private:

};