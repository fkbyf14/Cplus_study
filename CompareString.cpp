int compare(String &str) {
size_t temp = size_ < str.size_ ? size_ : str.size_;
for (int i = 0; i < temp; i++) {
int j = str_[i] - str.str_[i];
if (j != 0) {
return j;
}
}
return size_ - str.size_;
}