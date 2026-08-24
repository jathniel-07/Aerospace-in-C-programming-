#include <stdio.h>
#include <math.h>
#include "orm.h"
const float G = 6.6743e-11;
const float pi = 3.1415926535;
const float standard_gravitational_parameter = 3.986004418e14;
const float earth_mean_radius = 6371000.0;
const float earth_surface_gravity = 9.80665;


float semi_major_axis(float periapsis, float apoapsis) {
    return (periapsis + apoapsis) / 2.0f;
}

float eccentricity(float apoapsis, float periapsis) {
    return (apoapsis - periapsis) / (apoapsis + periapsis);
}

float gravitational_parameter(float mass_of_central_body) {
    return G * mass_of_central_body;
}

float newton_third_law(float mass_of_the_planet, float mass_of_the_spacecraft, float orbital_radius) {
    return (G * mass_of_the_planet * mass_of_the_spacecraft) / (orbital_radius * orbital_radius);
}

float orbital_radius(float radius_of_the_planet_from_center, float height_of_the_spaceflight_from_ground) {
    return radius_of_the_planet_from_center + height_of_the_spaceflight_from_ground;
}

float circular_orbital_velocity(float gravitational_parameter, float orbital_radius) {
    return sqrtf(gravitational_parameter / orbital_radius);
}

float escape_velocity(float gravitational_parameter, float orbital_radius) {
    return sqrtf(2.0f * gravitational_parameter / orbital_radius);
}

float vis_viva_equation(float gravitational_parameter, float orbital_radius, float semi_major_axis) {
    return sqrtf(gravitational_parameter * (2.0f / orbital_radius - 1.0f / semi_major_axis));
}

float orbital_period(float semi_major_axis, float gravitational_parameter) {
    return 2.0f * pi * sqrtf((semi_major_axis * semi_major_axis * semi_major_axis) / gravitational_parameter);
}

float mean_motion(float gravitational_parameter, float semi_major_axis) {
    return sqrtf(gravitational_parameter / (semi_major_axis * semi_major_axis * semi_major_axis));
}

float specific_orbital_energy_via_velocity(float velocity, float gravitational_parameter, float orbital_radius) {
    return (velocity * velocity) / 2.0f - gravitational_parameter / orbital_radius;
}

float specific_orbital_energy_via_semi_major_axis(float gravitational_parameter, float semi_major_axis) {
    return -gravitational_parameter / (2.0f * semi_major_axis);
}

float specific_angular_momentum_elliptical(float gravitational_parameter, float semi_major_axis, float eccentricity) {
    return sqrtf(gravitational_parameter * semi_major_axis * (1.0f - eccentricity * eccentricity));
}

float specific_angular_momentum_circular(float gravitational_parameter, float orbital_radius) {
    return sqrtf(gravitational_parameter * orbital_radius);
}

float specific_angular_momentum(float orbital_radius, float velocity, float angle) {
    return orbital_radius * velocity * sinf(angle);
}

float orbital_equation_semi_lactus_rectum(float semi_lactus_rectum, float eccentricity, float true_anomaly) {
    return semi_lactus_rectum / (1.0f + eccentricity * cosf(true_anomaly));
}

float orbital_equation_semi_major(float semi_major_axis, float eccentricity, float true_anomaly) {
    return (semi_major_axis * (1.0f - eccentricity * eccentricity)) / (1.0f + eccentricity * cosf(true_anomaly));
}

float periapsis(float semi_major_axis, float eccentricity) {
    return semi_major_axis * (1.0f - eccentricity);
}

float apoapsis(float semi_major_axis, float eccentricity) {
    return semi_major_axis * (1.0f + eccentricity);
}

float periapsis_velocity(float gravitational_parameter, float periapsis, float semi_major_axis) {
    return sqrtf(gravitational_parameter * (2.0f / periapsis - 1.0f / semi_major_axis));
}

float apoapsis_velocity(float gravitational_parameter, float apoapsis, float semi_major_axis) {
    return sqrtf(gravitational_parameter * (2.0f / apoapsis - 1.0f / semi_major_axis));
}

float eccentricity_from_velocity_energy(float specific_orbital_energy, float specific_angular_momentum, float gravitational_parameter) {
    return sqrtf(1.0f + (2.0f * specific_orbital_energy * specific_angular_momentum * specific_angular_momentum) / (gravitational_parameter * gravitational_parameter));
}

float kepler_third_law(float semi_major_axis, float gravitational_parameter) {
    return sqrtf((4.0f * pi * pi * semi_major_axis * semi_major_axis * semi_major_axis) / gravitational_parameter);
}
extern const float G;
extern const float pi;
extern const float standard_gravitational_parameter;
extern const float earth_mean_radius;
extern const float earth_surface_gravity;
