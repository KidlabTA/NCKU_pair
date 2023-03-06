#include <iostream>
#include <map>
using namespace std;
class Homepage {
   private:
    /* data */
    map<int, string> user_info;
    string page_info;

   public:
    Homepage(/* args */);
    string getPageInfor(int user_id);
    string getUserInfor(int user_id);

    ~Homepage();
};