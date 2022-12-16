nclude <stdio.h>

/**
 *
 * * convert_day - converts day of month to day of year, without accounting
 *
 * * for leap year
 *
 * * @month: month in number format
 *
 * * @day: day of month
 *
 * * Return: day of year
 *
 * */

void print_remaining_days(int month, int day, int year)

{

	    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))

		        {

				        if (month >= 2 && day >= 60)

						        {

								            day++;

									            }



					        printf("Day of the year: %d\n", day);

						        printf("Remaining days: %d\n", 366 - day);

							    }

	        else

			    {

				            if (month == 2 && day == 60)

						            {

								                printf("Remaining days: %d\n",366 -day, year);

										        }

					            else

							            {

									                printf("Day of the year: %d\n", day);

											            printf("Remaining days: %d\n", 365 - day);

												            }

						        }

}
