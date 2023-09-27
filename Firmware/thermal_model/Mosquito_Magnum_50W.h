#pragma once

#define THERMAL_MODEL_Mosquito_Magnum_50W_VER 1      // model parameters version

#define THERMAL_MODEL_Mosquito_Magnum_50W_P 50.      // heater power (W)
#define THERMAL_MODEL_Mosquito_Magnum_50W_U -0.0044  // linear temperature coefficient (W/K/-volts)
#define THERMAL_MODEL_Mosquito_Magnum_50W_V 2.08     // linear temperature intercept (W/volts)

#define THERMAL_MODEL_Mosquito_Magnum_50W_C 9.97     // initial guess for heatblock capacitance (J/g-K * Mass)
#define THERMAL_MODEL_Mosquito_Magnum_50W_R 9.66     // initial guess for heatblock resistance (x/(Ak) * 100 || x = Center of Heat to far side of probe, A = cross-section of x, k = T conductivity (W/(K·m)))

#define THERMAL_MODEL_Mosquito_Magnum_50W_fS 0.065   // sim. 1st order IIR filter factor (f=100/27)
#define THERMAL_MODEL_Mosquito_Magnum_50W_LAG 2100   // sim. response lag (ms, 0-2160)

#define THERMAL_MODEL_Mosquito_Magnum_50W_W 1.2      // Default warning threshold (K/s)
#define THERMAL_MODEL_Mosquito_Magnum_50W_E 1.74     // Default error threshold (K/s)

// fall-back resistance vector (R0-15)
#define THERMAL_MODEL_Mosquito_Magnum_50W_Rv {THERMAL_MODEL_Mosquito_Magnum_50W_R, 18.4, 16.7, 15.2, 14.1, 13.3, 12.7, 12.1, 11.7, 11.3, 11., 10.8, 10.6, 10.4, 10.2, 10.1}
