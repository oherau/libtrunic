#include "runedetector.h"

// #include "opencv2/imgproc.hpp"
// #include "opencv2/imgcodecs.hpp"
// #include "opencv2/highgui.hpp"

void detect_rune(const fs::path& rune, const fs::path& image) {

// auto img = cv.imread(image, cv.IMREAD_GRAYSCALE)
// if(img == nullptr) {
//     std::cerr << "file could not be read, check with os.path.exists()" << std::endl;
// }
// auto img2 = img.copy()
// auto template = cv.imread(rune, cv.IMREAD_GRAYSCALE)
// if(template == nullptr) {
//     std::cerr << "file could not be read, check with os.path.exists()" << std::endl;
// }
// w, h = template.shape[::-1]

// # All the 6 methods for comparison in a list
// const auto methods = ["TM_CCOEFF", "TM_CCOEFF_NORMED", "TM_CCORR",
//             "TM_CCORR_NORMED", "TM_SQDIFF", "TM_SQDIFF_NORMED"];

// for(const auto& meth : methods) {
//     auto img = img2.copy()
//     auto method = getattr(cv, meth)

//     # Apply template Matching
//     auto res = cv.matchTemplate(img,template,method)
//     // min_val, max_val, min_loc, max_loc = cv.minMaxLoc(res)

//     // # If the method is TM_SQDIFF or TM_SQDIFF_NORMED, take minimum
//     // if method in [cv.TM_SQDIFF, cv.TM_SQDIFF_NORMED]:
//     //     top_left = min_loc
//     // else:
//     //     top_left = max_loc
//     // bottom_right = (top_left[0] + w, top_left[1] + h)

//     // cv.rectangle(img,top_left, bottom_right, 255, 2)

//     // plt.subplot(121),plt.imshow(res,cmap = "gray")
//     // plt.title("Matching Result"), plt.xticks([]), plt.yticks([])
//     // plt.subplot(122),plt.imshow(img,cmap = "gray")
//     // plt.title("Detected Point"), plt.xticks([]), plt.yticks([])
//     // plt.suptitle(meth)

//     // plt.show()
//     }

}
// import cv2 as cv
// import numpy as np
// from matplotlib import pyplot as plt

// img = cv.imread("messi5.jpg", cv.IMREAD_GRAYSCALE)
// assert img is not None, "file could not be read, check with os.path.exists()"
// img2 = img.copy()
// template = cv.imread("template.jpg", cv.IMREAD_GRAYSCALE)
// assert template is not None, "file could not be read, check with os.path.exists()"
// w, h = template.shape[::-1]

// # All the 6 methods for comparison in a list
// methods = ["TM_CCOEFF", "TM_CCOEFF_NORMED", "TM_CCORR",
//             "TM_CCORR_NORMED", "TM_SQDIFF", "TM_SQDIFF_NORMED"]

// for meth in methods:
//     img = img2.copy()
//     method = getattr(cv, meth)

//     # Apply template Matching
//     res = cv.matchTemplate(img,template,method)
//     min_val, max_val, min_loc, max_loc = cv.minMaxLoc(res)

//     # If the method is TM_SQDIFF or TM_SQDIFF_NORMED, take minimum
//     if method in [cv.TM_SQDIFF, cv.TM_SQDIFF_NORMED]:
//         top_left = min_loc
//     else:
//         top_left = max_loc
//     bottom_right = (top_left[0] + w, top_left[1] + h)

//     cv.rectangle(img,top_left, bottom_right, 255, 2)

//     plt.subplot(121),plt.imshow(res,cmap = "gray")
//     plt.title("Matching Result"), plt.xticks([]), plt.yticks([])
//     plt.subplot(122),plt.imshow(img,cmap = "gray")
//     plt.title("Detected Point"), plt.xticks([]), plt.yticks([])
//     plt.suptitle(meth)

//     plt.show()