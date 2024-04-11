#ifndef CONVERT_KNOTTS_H
#define CONVERT_KNOTSS_H

double knots_to_miles_per_minute(int knots)
{
   return knots * 6076.0 / 5280 / 60;
}
#endif
