#ifndef ORM_H
#define ORM_H

float semi_major_axis(float periapsis,float apoapsis);
float eccentricity(float apoapsis,float periapsis);
float gravitational_parameter(float mass_of_central_body);
float newton_third_law(float mass_of_the_planet,float mass_of_the_spacecraft,float orbital_radius);
float orbital_radius(float radius_of_the_planet_from_center,float height_of_the_spaceflight_from_ground);
float circular_orbital_velocity(float gravitational_parameter,float orbital_radius);
float escape_velocity(float gravitational_parameter,float orbital_radius);
float vis_viva_equation(float gravitational_parameter,float orbital_radius,float semi_major_axis);
float orbital_period(float semi_major_axis,float gravitational_parameter);
float mean_motion(float gravitational_parameter,float semi_major_axis);
float specific_orbital_energy_via_velocity(float velocity,float gravitational_parameter,float orbital_velocity);
float specific_orbital_energy_via_semi_major_axis(float gravitational_parameter,float semi_major_axis);
float specific_angular_momentum_elliptical(float gravitatonal_parameter,float semi_major_axis,float eccentricity);
float specific_angular_momentum(float orbital_radius,float velocity,float angle);
float specific_angular_momentum_circular(float gravitational_parameter,float orbital_radius);
float orbital_equation_semi_lactus_rectum(float semi_lactus_rectum,float eccentricity,float true_anomaly);
float orbital_equation_semi_major(float semi_major_axis,float eccentricity,float true_anomaly);
float periapsis(float semi_major_axis,float eccentricity);
float apoapsis(float semi_major_axis,float eccentricity);
float periapsis_velocity(float gravitational_parameter,float periapsis,float semi_major_axis);
float apoapsis_velocity(float gravitational_parameter,float apoapsis,float semi_major_axis);
float eccentricity_from_velocity_energy(float specific_orbital_energy,float specific_angular_momentum,float gravitaional_parameter);
float kepler_third_law(float semi_major_axis,float gravitational_parameter);

#endif
