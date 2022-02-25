#include <string>
#include <list>

using std::string;
using std::list;

class SATResultsManager
{
    public:
        /**
         * @brief Adds data to the manager.
         *  
         * @param data Data to be inserted.
         * 
         * @return True if we could add all data.
         */
        bool addData(list<string> data);

        /**
         * @brief Finds SAT results by school name.
         * 
         * @param name Name to search.
         * 
         * @return Results with each line being a SAT result. In case no result
         *         is found, a single line with "No Results" will be returned.
         */
        list<string> findByName(string name);

        /**
         * @brief Finds a SAT result by DBN.
         * 
         * @param code DNB code.
         * 
         * @return SAT result for said code, or "Not found" if a result could 
         *         not be fetched.
         */
        string findByDBN(string code);
};