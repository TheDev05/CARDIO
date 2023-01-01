/* A teacher asks the class to open their books to a page number. A student can either start turning pages from the front of the book or from the back of the book. They always turn pages one at a time. When they open the book, page  is always on the right side:

https://www.hackerrank.com/challenges/drawing-book/problem */

#include <iostream>
int main()
{
    int total_page;

    std::cout << "ENTER TOTAL NUMBER OF PAGES: " << std::endl;
    std::cin >> total_page;

    int page2find;

    std::cout << "ENTER NUMBER OF PAGE YOU WANNA FIND: " << std::endl;
    std::cin >> page2find;

    int pagecount_fromlast = (total_page % 2 == 0) ? (total_page) : (total_page - 1); //*changing last page to even one so that it bacome single page at last...so it get easy as of forward single page

    int count_diff_B = pagecount_fromlast - page2find;

    int paired_pages_B = count_diff_B / 2; 
    int single_pages_B = count_diff_B % 2;

    int totalpage_toflip_B = paired_pages_B + single_pages_B;

    (total_page == page2find) ? totalpage_toflip_B = 0 : totalpage_toflip_B = totalpage_toflip_B; //*we change last odd page number to even but what if last odd page is the finding page number by user .... make it zero..zero flips took to get that page 

    int count_diff_F = page2find - 1;

    int paired_page_F = count_diff_F / 2;
    int single_pages_F = count_diff_F % 2;

    int totalpage_toflip_F = paired_page_F + single_pages_F;

    if (totalpage_toflip_B < totalpage_toflip_F)
    {
        std::cout << totalpage_toflip_B;
    }

    else
    {
        std::cout << totalpage_toflip_F;
    }

    return (0);
}