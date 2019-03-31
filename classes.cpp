#include "shi.h"
LOG_FILE_DATA::LOG_FILE_DATA ()
{

}
LOG_FILE_DATA::~LOG_FILE_DATA ()
{

}
LOG_FILE_DATA::LOG_FILE_DATA (GtkTextBuffer *_)
{
	Text_File = _;
}
void LOG_FILE_DATA::add_text_file (GtkTextBuffer *_)
{
	Text_File = _;
}
GtkTextBuffer *LOG_FILE_DATA::get_text_file ()
{
	return Text_File;
}
GtkEntryBuffer *LOG_FILE_DATA::add_regex (char type)
{
	switch (type)
	{
		case 'y':
		{
			Year_Regex.push_back (gtk_entry_buffer_new (NULL, -1));
			return Year_Regex.back ();
		}
		case 'M':
		{
			Month_Regex.push_back (gtk_entry_buffer_new (NULL, -1));
			return Month_Regex.back ();
		}
		case 'd':
		{
			Day_Regex.push_back (gtk_entry_buffer_new (NULL, -1));
			return Day_Regex.back ();
		}
		case 'h':
		{
			Hour_Regex.push_back (gtk_entry_buffer_new (NULL, -1));
			return Hour_Regex.back ();
		}
		case 'm':
		{
			Minute_Regex.push_back (gtk_entry_buffer_new (NULL, -1));
			return Minute_Regex.back ();
		}
		case 's':
		{
			Second_Regex.push_back (gtk_entry_buffer_new (NULL, -1));
			return Second_Regex.back ();
		}
		case 'D':
		{
			Device_Regex.push_back (gtk_entry_buffer_new (NULL, -1));
			return Device_Regex.back ();
		}
		case 'e':
		{
			Event_Regex.push_back (gtk_entry_buffer_new (NULL, -1));
			return Event_Regex.back ();
		}
		case 'S':
		{
			State_Regex.push_back (gtk_entry_buffer_new (NULL, -1));
			return State_Regex.back ();
		}
	};
}
void LOG_FILE_DATA::remove_ex (char type, GtkEntryBuffer *expression)
{
	switch (type)
	{
		case 'y':
		{
			for (int i = 0; i < Year_Regex.size (); i++)
			{
				if (Year_Regex.at (i) == expression)
				{
					Year_Regex.erase (Year_Regex.begin () + i);
					return;
				}
			}
		}
		case 'M':
		{
			for (int i = 0; i < Month_Regex.size (); i ++)
			{
				if (Month_Regex.at (i) == expression)
				{
					Month_Regex.erase (Month_Regex.begin () + i);
					return;
				}
			}
		}
		case 'd':
		{
			for (int i = 0; i < Day_Regex.size (); i ++)
			{
				if (Day_Regex.at (i) == expression)
				{
					Day_Regex.erase (Day_Regex.begin () + i);
					return;
				}
			}
		}
		case 'h':
		{
			for (int i = 0; i < Hour_Regex.size (); i ++)
			{
				if (Hour_Regex.at (i) == expression)
				{
					Hour_Regex.erase (Hour_Regex.begin () + i);
					return;
				}
			}
		}
		case 'm':
		{
			for (int i = 0; i < Minute_Regex.size (); i ++)
			{
				if (Minute_Regex.at (i) == expression)
				{
					Minute_Regex.erase (Minute_Regex.begin () + i);
					return;
				}
			}
		}
		case 's':
		{
			for (int i = 0; i < Second_Regex.size (); i ++)
			{
				if (Second_Regex.at (i) == expression)
				{
					Second_Regex.erase (Second_Regex.begin () + i);
					return;
				}
			}
		}
		case 'D':
		{
			for (int i = 0; i < Device_Regex.size (); i ++)
			{
				if (Device_Regex.at (i) == expression)
				{
					Device_Regex.erase (Device_Regex.begin () + i);
					return;
				}
			}
		}
		case 'e':
		{
			for (int i = 0; i < Event_Regex.size (); i ++)
			{
				if (Event_Regex.at (i) == expression)
				{
					Event_Regex.erase (Event_Regex.begin () + i);
					return;
				}
			}
		}
		case 'S':
		{
			for (int i = 0; i < State_Regex.size (); i ++)
			{
				if (State_Regex.at (i) == expression)
				{
					State_Regex.erase (State_Regex.begin () + i);
					return;
				}
			}
		}
	};
}


GtkEntryBuffer *LOG_FILE_DATA::get_regex (char type, int pos)
{
	switch (type)
	{
		case 'y':
		{
			return Year_Regex.at (pos);
		}
		case 'M':
		{
			return Month_Regex.at (pos);
		}
		case 'd':
		{
			return Day_Regex.at (pos);
		}
		case 'h':
		{
			return Hour_Regex.at (pos);
		}
		case 'm':
		{
			return Minute_Regex.at (pos);
		}
		case 's':
		{
			return Second_Regex.at (pos);
		}
		case 'D':
		{
			return Device_Regex.at (pos);
		}
		case 'e':
		{
			return Event_Regex.at (pos);
		}
		case 'S':
		{
			return State_Regex.at (pos);
		}
	};
}

int LOG_FILE_DATA::get_regex_list_size (char type)
{
	switch (type)
	{
		case 'y':
		{
			return Year_Regex.size ();
		}
		case 'M':
		{
			return Month_Regex.size ();
		}
		case 'd':
		{
			return Day_Regex.size ();
		}
		case 'h':
		{
			return Hour_Regex.size ();
		}
		case 'm':
		{
			return Minute_Regex.size ();
		}
		case 's':
		{
			return Second_Regex.size ();
		}
		case 'D':
		{
			return Device_Regex.size ();
		}
		case 'e':
		{
			return Event_Regex.size ();
		}
		case 'S':
		{
			return State_Regex.size ();
		}
	};
}
