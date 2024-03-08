/*                                                                                *\
  Author | Henry Morales
    File | LightOJ-Problems/Submissions/1109.c
  Source | https://github.com/Skeptx/LightOJ-Problems/blob/main/Submissions/1109.c
  Notice | Copyright 2024 Henry Morales
   Notes | Also see LightOJ-Problems/Helpers/1109.lua
\*                                                                                */

#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	int_fast16_t order[1001] = {0, 1, 997, 991, 983, 977, 971, 967, 953, 947, 941, 937, 929, 919, 911, 907, 887, 883, 881, 877, 863, 859, 857, 853, 839, 829, 827, 823, 821, 811, 809, 797, 787, 773, 769, 761, 757, 751, 743, 739, 733, 727, 719, 709, 701, 691, 683, 677, 673, 661, 659, 653, 647, 643, 641, 631, 619, 617, 613, 607, 601, 599, 593, 587, 577, 571, 569, 563, 557, 547, 541, 523, 521, 509, 503, 499, 491, 487, 479, 467, 463, 461, 457, 449, 443, 439, 433, 431, 421, 419, 409, 401, 397, 389, 383, 379, 373, 367, 359, 353, 349, 347, 337, 331, 317, 313, 311, 307, 293, 283, 281, 277, 271, 269, 263, 257, 251, 241, 239, 233, 229, 227, 223, 211, 199, 197, 193, 191, 181, 179, 173, 167, 163, 157, 151, 149, 139, 137, 131, 127, 113, 109, 107, 103, 101, 97, 89, 83, 79, 73, 71, 67, 61, 59, 53, 47, 43, 41, 37, 31, 29, 23, 19, 17, 13, 11, 7, 5, 3, 2, 961, 841, 529, 361, 289, 169, 121, 49, 25, 9, 4, 998, 995, 993, 989, 985, 982, 979, 974, 973, 965, 959, 958, 955, 951, 949, 943, 939, 934, 933, 926, 923, 922, 921, 917, 914, 913, 905, 901, 899, 898, 895, 893, 889, 886, 879, 878, 871, 869, 866, 865, 862, 851, 849, 843, 842, 838, 835, 831, 818, 817, 815, 813, 807, 803, 802, 799, 794, 793, 791, 789, 785, 781, 779, 778, 771, 767, 766, 763, 758, 755, 753, 749, 746, 745, 737, 734, 731, 723, 721, 718, 717, 713, 707, 706, 703, 699, 698, 697, 695, 694, 689, 687, 685, 681, 679, 674, 671, 669, 667, 662, 655, 649, 635, 634, 633, 629, 626, 623, 622, 614, 611, 597, 591, 589, 586, 583, 581, 579, 573, 566, 565, 562, 559, 554, 553, 551, 545, 543, 542, 538, 537, 535, 533, 527, 526, 519, 517, 515, 514, 511, 505, 502, 501, 497, 493, 489, 485, 482, 481, 478, 473, 471, 469, 466, 458, 454, 453, 451, 447, 446, 445, 437, 427, 422, 417, 415, 413, 411, 407, 403, 398, 395, 394, 393, 391, 386, 382, 381, 377, 371, 365, 362, 358, 355, 346, 343, 341, 339, 335, 334, 329, 327, 326, 323, 321, 319, 314, 309, 305, 303, 302, 301, 299, 298, 295, 291, 287, 278, 274, 267, 265, 262, 259, 254, 253, 249, 247, 237, 235, 226, 221, 219, 218, 217, 215, 214, 213, 209, 206, 205, 203, 202, 201, 194, 187, 185, 183, 178, 177, 166, 161, 159, 158, 155, 146, 145, 143, 142, 141, 134, 133, 129, 125, 123, 122, 119, 118, 115, 111, 106, 95, 94, 93, 91, 87, 86, 85, 82, 77, 74, 69, 65, 62, 58, 57, 55, 51, 46, 39, 38, 35, 34, 33, 27, 26, 22, 21, 15, 14, 10, 8, 6, 625, 81, 16, 981, 964, 963, 956, 932, 931, 927, 925, 916, 909, 908, 892, 873, 867, 847, 845, 844, 833, 801, 796, 788, 775, 772, 764, 747, 725, 724, 722, 716, 711, 692, 668, 657, 652, 639, 637, 628, 605, 604, 603, 596, 578, 575, 556, 549, 548, 539, 531, 524, 508, 507, 477, 475, 452, 436, 428, 425, 423, 412, 404, 388, 387, 369, 363, 356, 338, 333, 332, 325, 316, 292, 284, 279, 275, 268, 261, 245, 244, 243, 242, 236, 212, 207, 188, 175, 172, 171, 164, 153, 148, 147, 124, 117, 116, 99, 98, 92, 76, 75, 68, 63, 52, 50, 45, 44, 32, 28, 20, 18, 12, 729, 64, 999, 994, 987, 986, 978, 970, 969, 962, 957, 946, 942, 938, 935, 915, 906, 904, 903, 902, 897, 894, 890, 885, 875, 874, 872, 861, 856, 854, 837, 834, 830, 826, 824, 822, 814, 808, 806, 805, 795, 790, 786, 783, 782, 777, 776, 762, 759, 754, 742, 741, 730, 715, 712, 710, 705, 686, 682, 678, 670, 665, 664, 663, 658, 654, 651, 646, 645, 642, 638, 632, 627, 621, 618, 615, 610, 609, 606, 602, 598, 595, 590, 584, 582, 574, 568, 561, 555, 536, 534, 530, 518, 513, 506, 498, 494, 488, 483, 474, 472, 470, 465, 459, 455, 442, 438, 435, 434, 430, 429, 426, 424, 418, 410, 406, 402, 399, 385, 376, 375, 374, 370, 366, 357, 354, 351, 345, 344, 328, 322, 318, 310, 297, 296, 290, 286, 285, 282, 273, 266, 258, 255, 250, 248, 246, 238, 232, 231, 230, 222, 195, 190, 189, 186, 184, 182, 174, 170, 165, 154, 152, 138, 136, 135, 130, 128, 114, 110, 105, 104, 102, 88, 78, 70, 66, 56, 54, 42, 40, 30, 24, 676, 484, 441, 256, 225, 196, 100, 36, 976, 944, 891, 848, 752, 688, 656, 592, 567, 512, 496, 464, 405, 368, 304, 272, 208, 176, 162, 112, 80, 48, 996, 992, 988, 975, 968, 954, 950, 948, 940, 928, 884, 876, 868, 860, 855, 852, 850, 846, 836, 825, 820, 819, 812, 804, 774, 765, 748, 740, 738, 736, 735, 732, 726, 708, 693, 675, 666, 650, 644, 636, 620, 608, 585, 580, 572, 564, 558, 550, 544, 532, 525, 522, 516, 500, 495, 492, 490, 486, 476, 460, 444, 416, 414, 392, 380, 372, 364, 352, 350, 348, 342, 340, 315, 308, 306, 294, 276, 260, 234, 228, 224, 220, 204, 200, 198, 160, 156, 150, 140, 132, 126, 108, 96, 90, 84, 72, 60, 832, 704, 448, 320, 192, 784, 400, 324, 144, 1000, 984, 966, 952, 945, 930, 920, 918, 910, 896, 888, 870, 858, 798, 770, 760, 750, 744, 728, 714, 702, 696, 690, 680, 640, 616, 594, 570, 552, 546, 520, 510, 462, 456, 440, 408, 390, 384, 378, 330, 312, 280, 270, 264, 216, 210, 168, 120, 980, 972, 882, 828, 800, 768, 700, 684, 612, 588, 468, 450, 396, 300, 288, 252, 180, 912, 880, 816, 810, 648, 624, 560, 528, 432, 336, 240, 576, 990, 936, 924, 864, 792, 780, 756, 672, 660, 630, 600, 540, 504, 480, 420, 360, 900, 960, 720, 840};
	int_fast16_t T;
	scanf("%" SCNiFAST16, &T);
	for (int_fast16_t t = 1; t <= T; ++t) {
		int_fast16_t n;
		scanf("%" SCNiFAST16, &n);
		printf("Case %" SCNiFAST16 ": %" SCNiFAST16 "\n", t, order[n]);
	}
	return EXIT_SUCCESS;
}
