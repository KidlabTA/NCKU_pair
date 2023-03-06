#include "header/Homepage.h"
Homepage::Homepage(/* args */) {
    user_info[0] = "John";
    page_info = "Hello World";
}

string Homepage::getUserInfor(int user_id) {
    return user_info[user_id];
}
string Homepage::getPageInfor(int user_id) {
    return page_info;
}
Homepage::~Homepage() {}