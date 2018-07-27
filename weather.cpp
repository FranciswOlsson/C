//Francis Olsson
//CISP 360 midterm
//Program purpose: 
/*
Procedure:
1. Create a struct that stores the following weater data for a month:
          a. Total Rainfall
          b. High Temperature
          c. Low Temperature
          d. Average Temperature 
2. Use an array of 12 structures to hold weather data for an entire year
3. Ask user to enter data for each month (&calculate avg temp)
4. Calculate and display:
             a. Average Monthly Rainfall
             b. Total Rainfall for year
             c. Highest and Lowest temperatures for the year (&the months they occurred)
             d. Average of all the monthly average temperatures
*/

#include <iostream>
#include <string>

using namespace std;

// Constant for the number of months
const int months = 12;

// Declaration of the Weather Info structure
struct WeatherInfo
{
   double total_rain;         // Total rainfall
   double high_temp;         // High temperature
   double low_temp;          // Low temperature
   double avg_month_temp; // Average temperature    
};
//4.b Calculate total annual rainfall
double calc_total_annual_rain(WeatherInfo year[], int months){
   double total_annual_rain = 0;
   for (int i = 0; i < months; i++)
   total_annual_rain += year[i].total_rain;
   return total_annual_rain;
}
// 4.a Calculate average monthly rainfall
double calc_avg_month_rainfall(double total_annual_rain, int months){
   double avg_month_rain = total_annual_rain/months;
   return avg_month_rain;
}

// 4.c Find the highest temperature and the month it occurred
int find_high_temps(WeatherInfo year[]){
   double highest = 0;
   int highMonth = 0;
   for (int i = 0; i < months; i++)
   {
      if (year[i].high_temp > highest)
      {
         highest = year[i].high_temp;
         highMonth = i;
      }
   }
   return highMonth;
}
// 4.c Find the lowest temperature and month it occurrred
int find_low_temps(WeatherInfo year[]){
   double lowest = 0;
   int lowMonth = 0;
   for (int i = 0; i < months; i++)
   {
      if (year[i].low_temp < lowest)
      {
         lowest = year[i].low_temp;
         lowMonth = i;
      }
   }
   return lowMonth;
}

// 4.d Calculate the average monthly average temperature
double calc_avg_month_avg_temp(WeatherInfo year[], int months){
   double avg_total_temp = 0, avg_month_avg_temp;
   for (int i = 1; i < months; i++)
   avg_total_temp += year[i].avg_month_temp;
   avg_month_avg_temp = avg_total_temp/months;
   return avg_month_avg_temp;
}
//Main function
int main(){
   // Create an array of WeatherInfo structures
   WeatherInfo year[months];
   int highMonth, lowMonth;
   // Get the weather data for each month.
   cout << "Enter the following information:\n";
   for (int i= 0; i < months; i++){
      // Get the rainfall.
      cout << "Month " << (i + 1) << endl;
      cout << "Total Rainfall: "<<endl;
      cin >> year[i].total_rain;
      // Get the high temperature.
      cout << "High Temperature: "<<endl;
      cin >> year[i].high_temp;
      // Validate the high temperature.
      while (year[i].high_temp < -100 || year[i].high_temp > 140){
         cout << "Temperature must be in the range of -100 through 140."<<endl;
         cout << "High Temperature: "<<endl;
         cin >> year[i].high_temp;
      }
      // Get the low temperature.
      cout << "Low Temperature: "<<endl;
      cin >> year[i].low_temp;
      // Validate the low temperature.
      while (year[i].low_temp < -100 || year[i].low_temp > 140){
         cout << "Temperature must be in the range of -100 through 140."<<endl;;
         cout << "Low Temperature: ";
         cin >> year[i].low_temp;
      }
      year[i].avg_month_temp = (year[i].high_temp + year[i].low_temp)/2;
      }
   //Call functions
double total_annual_rain = calc_total_annual_rain(year, months);
double avg_month_rain = calc_avg_month_rainfall(total_annual_rain, months);
double avg_month_avg_temp = calc_avg_month_avg_temp(year, months);

highMonth = find_high_temps(year);
lowMonth = find_low_temps(year);
double highest = year[highMonth].high_temp;
double lowest = year[lowMonth].low_temp;

   // Display findings.
   cout << "Total Rainfall: " << total_annual_rain << endl;
   cout << "Average Monthly Rain: " << avg_month_rain << endl;
   cout << "Average Monthly Average Temperature: " << avg_month_avg_temp << endl;
   cout << "Highest Temperature: " << highest<<endl;
   cout << " (Month " << (highMonth + 1) << ")\n";
   cout << "Lowest Temperature: " << lowest;
   cout << " (Month " << (lowMonth + 1) << ")\n\n";
   system("pause");
   return 0;
}
