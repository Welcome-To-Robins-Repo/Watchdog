class LOG_FILE_DATA
{
public:
	LOG_FILE_DATA ();
	LOG_FILE_DATA (GtkTextBuffer *_);
	~LOG_FILE_DATA ();
	void add_text_file (GtkTextBuffer *_);
	GtkTextBuffer *get_text_file ();

	//'y' is for year
	//'M' is for month
	//'d' is for day
	//'h' is for hour
	//'m' is for minute
	//'s' is for second
	//'D' is for device
	//'e' is for event
	//'S' is for state
	GtkEntryBuffer *add_regex (char type);
	void remove_ex (char type, GtkEntryBuffer *expression);
	GtkEntryBuffer *get_regex (char type, int pos);
	int get_regex_list_size (char type);

private:
	struct DATA
	{
		std::string 	year,
				month,
				day,
				hour,
				minute,
				second;
		long int start, end;
		struct event
		{
			std::string 	device_name,
					event_name,
					state;
		};
		std::vector <event> events;
	};
	GtkTextBuffer *Text_File = gtk_text_buffer_new (NULL);
	long int current_data = -1;
	std::vector <DATA> data;
	std::vector <GtkEntryBuffer *>	Year_Regex,
					Month_Regex,
					Day_Regex,
					Hour_Regex,
					Minute_Regex,
					Second_Regex,
					Device_Regex,
					Event_Regex,
					State_Regex;
};
