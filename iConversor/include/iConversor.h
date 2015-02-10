

namespace iconversor_distances {
  /* Distances related conversions*/
  const float kKm_to_miles_ = 1.609f;
  const float kKm_to_meters_ = 1000;

  float inline MilesToMeters(float miles){return miles * kKm_to_miles_ * kKm_to_meters_;}
  float inline MetersToMiles(float meters){ return meters / kKm_to_miles_;}
}

namespace iconversor_time{
  /* Time related conversions */
  const int kDays_to_years_ = 365;
  const int kDays_to_weeks_ = 7;
  const int kHours_to_days_ = 24;
  const int kMinutes_to_hours_ = 60;
  const int kSeconds_to_minutes = 60;

  float inline DaysToWeeks(int days){return days / kDays_to_weeks_};
  float inline WeeksToDays(int weeks){return weeks * kDays_to_weeks_};
  float inline HoursToDays(int hours){return hours / kHours_to_days_}
  float inline DaysToHours(int days){return days * kHours_to_days_}

  float inline HoursToMinutes(int hours){return hours / kMinutes_to_hours_}
  float inline MinutesToHours(int minutes){return minutes * kMinutes_to_hours_}
  float inline SecondsToHours(int seconds){return seconds / kSeconds_to_minutes / kMinutes_to_hours_}
  float inline HoursToSeconds(int hours){return hours * kMinutes_to_hours_ * kSeconds_to_minutes}
}

namespace iconversor_screen{
  /* Screen related conversions */
}

namespace iconversor_speed {
  /* Speed related conversions*/

}

namespace iconversor_computing {
  /* Computing related conversions */
  void BinaryToDecimal(unsigned char *number, unsigned int nbits);

  /* Misc conversions */

}