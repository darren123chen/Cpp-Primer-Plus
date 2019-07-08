#include <iostream>

using namespace std;

struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void pass_by_value(box);
void pass_by_address(box *);

int main () {
    box new_box = {"Someone", 452.45, 500.1, 345.1, 0};

    pass_by_value(new_box);
    pass_by_address(&new_box);
    pass_by_value(new_box);
    cout << endl;
    return 0;
}

void pass_by_value(box new_box) {
    cout << "new_box.maker: " << new_box.maker << "\nnew_box.height: " << new_box.height << "\nnew_box.width: " << new_box.width << "\nnew_box.length: " << new_box.length << "\nnew_box.volume: " << new_box.volume <<endl;
}

void pass_by_address(box * new_box) {
     new_box->volume = new_box->height * new_box->length * new_box->width;
}
