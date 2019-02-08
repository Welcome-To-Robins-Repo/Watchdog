//avoid namespace collisions
namespace shi
{

	//class to manage smart devices and associated events
	class smart_dev
	{
	public:
		smart_dev ();
		~smart_dev ();
		void add_event (std::string name);
		int get_event_types ();
		void remove_event (std::string name);
		void remove_event (int event_type);
		bool is_active (std::string name);
		bool is_active (int event_type);
		float get_event_value (std::string name);
		float get_event_value (int event_type);
	private:
	//event_types holds the number of different events a smart device can have
		int event_types = 0;
	//name of device
		std::string device_name;
	//event structure with an event_type corresponding to the event number in
	//event types, an event_active signal, and a value from the event if it exists
		struct event
		{
			event(std::string name) {event_name = name;}
			std::string event_name = "";
			bool event_active = false;
			float event_value = 0;
		};
	//a vector of the diferent kinds of events.
		std::vector <event> events;
	};

	class smart_network
	{
	public:
		smart_network ();
		~smart_network ();
	private:
		std::vector <smart_dev> devices;
	};

	struct TIME
	{
		int	day = 0,
			month = 0,
			year = 0,
			hour = 0,
			minute = 0,
			second = 0;
	};

	class SYNTAX
	{
	public:
		SYNTAX ();
		~SYNTAX ();

		void time_remove_ex (std::string expression);
		void device_remove_ex (std::string expression);
		void event_remove_ex (std::string expression);
		void state_remove_ex (std::string expression);

		GtkEntryBuffer* get_time_format ();
		GtkEntryBuffer* get_time_bounding ();
		GtkEntryBuffer* get_time_preceding ();
		GtkEntryBuffer* get_time_following ();

		GtkEntryBuffer* get_device_declarative ();
		GtkEntryBuffer* get_device_keywords ();
		GtkEntryBuffer* get_device_bounding ();
		GtkEntryBuffer* get_device_preceding ();
		GtkEntryBuffer* get_device_following ();

		GtkEntryBuffer* get_event_declarative ();
		GtkEntryBuffer* get_event_keywords ();
		GtkEntryBuffer* get_event_bounding ();
		GtkEntryBuffer* get_event_preceding ();
		GtkEntryBuffer* get_event_following ();

		GtkEntryBuffer* get_state_declarative ();
		GtkEntryBuffer* get_state_keywords ();
		GtkEntryBuffer* get_state_bounding ();
		GtkEntryBuffer* get_state_preceding ();
		GtkEntryBuffer* get_state_following ();

	private:
		struct Time_Notation
		{
			vector <GtkEntryBuffer*> 	Time_Fomat,
							Bounding_Ex,
							Preceding_Ex,
							Following_Ex;
		};
		struct Device
		{
			vector <GtkEntryBuffer*>	Declarative_Ex,
							Keywords,
							Bounding_Ex,
							Preceding_Ex,
							Following_Ex;
		};
		struct Event
		{
			vector <GtkEntryBuffer*>	Declarative_Ex,
							Keywords,
							Bounding_Ex,
							Preceding_Ex,
							Following_Ex;
		};
		struct State
		{
			vector <GtkEntryBuffer*>	Declarative_Ex,
							Keywords,
							Bounding_Ex,
							Preceding_Ex,
							Following_Ex;
		};
		Time_Notation T;
		Device D;
		Event E;
		State S;
	};

};
