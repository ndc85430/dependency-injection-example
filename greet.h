#ifndef GREET_H
#define GREET_H

void greet(int hour_of_day, std::ostream& output_stream) {
  if (hour_of_day < 12) {
    output_stream << "Good morning";
  } else if (hour_of_day < 18) {
    output_stream << "Good afternoon";
  } else {
    output_stream << "Good evening";
  }
}

#endif
