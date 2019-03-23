
class CStudent {	
	public:
		CStudent(unsigned int id, unsigned int score);	// constructor
		virtual ~CStudent();						// destructor

	private:
		unsigned int m_id;
		unsigned int m_score;

};
