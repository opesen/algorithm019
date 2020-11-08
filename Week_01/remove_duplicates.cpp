#include <vector>
#include <iostream>

int removeDuplicates(std::vector<int> &array)
{
    size_t array_size = array.size();
    if (array_size == 0)
        return 0;

    size_t left = 0, right = 1;
    while (right < array_size)
    {
        if (array[left] == array[right])
            right++;
        else
            array[++left] = array[right];
            right++;
    }

    left++;
    return left;
}

int main(int argc, char *argv[])
{
    std::vector<int> test_array = {1,2,3,3,4,5,5,6,7,7,8,9};
    int ret_size = removeDuplicates(test_array);
    std::cout << "remove duplicates size is " << ret_size << std::endl;

    return 0;
}