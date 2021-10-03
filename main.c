#include <stdio.h>
#include <stdlib.h>
#define YEARS 5
#define MONTHS 12
#define MONTHS_NAME [12] = {jan, feb, mar, apr, may, jun, jul, aug, sep, nov, dec}
int main()
{
    float rainfalls[YEARS][MONTHS] =
    {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6}, //2011
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3}, //2012
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4}, //2013
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2}, //2014
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}  //2015
    };
    float avg_yearly_rainfall = 0;
    float avg_monthly_rainfall = 0;
    float yearly_rainfall = 0;
    float monthly_rainfall = 0;
    int year, month;
    printf(" YEAR \t\t RAINFALL (inches)\n");
    for(year = 0; year < YEARS; year++)
    {
        yearly_rainfall = 0;
        for(month = 0; month < MONTHS; month++)
        {
            yearly_rainfall += rainfalls[year][month];
        }
        printf(" %d \t\t %.2f\n", 2011+year, yearly_rainfall);
        avg_yearly_rainfall += yearly_rainfall;
    }
    avg_yearly_rainfall = avg_yearly_rainfall / YEARS;
    printf("\n Average Yearly Rainfall = %.1f\n", avg_yearly_rainfall);
    printf("MONTHLY AVERAGES:\n");
    printf(" jan \t feb \t mar \t apr \t may \t jun \t jul \t aug \t sep \t oct \t nov \t dec\n");
    for(month = 0; month < MONTHS; month++)
    {
        monthly_rainfall = 0;
        for(year = 0; year < YEARS; year++)
        {
            monthly_rainfall += rainfalls[year][month];
        }
        avg_monthly_rainfall = monthly_rainfall / YEARS;
        printf(" %.1f \t ", avg_monthly_rainfall);
    }
    return 0;
}
