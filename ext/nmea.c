#line 1 "nmea.rl"
#include "nmea.h"

#line 66 "nmea.rl"




#line 10 "../ext/nmea.c"
static const char _NMEA_actions[] = {
	0, 1, 0, 1, 1, 1, 2, 1, 
	3, 1, 4, 1, 5, 1, 16, 1, 
	17, 1, 18, 1, 22, 1, 23, 1, 
	25, 1, 26, 1, 27, 1, 28, 1, 
	29, 1, 30, 2, 0, 24, 2, 0, 
	33, 2, 3, 19, 2, 3, 20, 2, 
	3, 21, 2, 5, 7, 2, 5, 8, 
	2, 5, 9, 2, 5, 11, 2, 5, 
	12, 2, 5, 13, 2, 5, 14, 2, 
	6, 10, 2, 6, 14, 2, 15, 16, 
	2, 17, 18, 2, 31, 32
};

static const short _NMEA_key_offsets[] = {
	0, 0, 13, 28, 44, 45, 61, 78, 
	94, 110, 126, 142, 159, 175, 192, 208, 
	225, 241, 258, 274, 291, 307, 324, 341, 
	357, 372, 373, 390, 406, 423, 439, 456, 
	473, 489, 505, 521, 537, 553, 569, 585, 
	601, 617, 633, 649, 665, 681, 697, 713, 
	730, 746, 763, 779, 796, 812, 829, 846, 
	862, 878, 894, 910, 926, 942, 959, 974, 
	989, 990, 1007, 1023, 1040, 1057, 1074, 1090, 
	1107, 1124, 1140, 1157, 1173, 1189, 1205, 1222, 
	1238, 1255, 1272, 1288, 1304, 1321, 1337, 1354, 
	1371
};

static const char _NMEA_trans_keys[] = {
	9, 32, 36, 42, 95, 44, 46, 48, 
	58, 65, 90, 97, 122, 9, 10, 13, 
	32, 36, 42, 95, 44, 46, 48, 58, 
	65, 90, 97, 122, 9, 10, 13, 32, 
	36, 42, 71, 95, 44, 46, 48, 58, 
	65, 90, 97, 122, 10, 9, 10, 13, 
	32, 36, 42, 80, 95, 44, 46, 48, 
	58, 65, 90, 97, 122, 9, 10, 13, 
	32, 36, 42, 71, 82, 95, 44, 46, 
	48, 58, 65, 90, 97, 122, 9, 10, 
	13, 32, 36, 42, 83, 95, 44, 46, 
	48, 58, 65, 90, 97, 122, 9, 10, 
	13, 32, 36, 42, 86, 95, 44, 46, 
	48, 58, 65, 90, 97, 122, 9, 10, 
	13, 32, 36, 42, 44, 95, 45, 46, 
	48, 58, 65, 90, 97, 122, 9, 10, 
	13, 32, 36, 42, 58, 95, 44, 46, 
	48, 57, 65, 90, 97, 122, 9, 10, 
	13, 32, 36, 42, 44, 58, 95, 45, 
	46, 48, 57, 65, 90, 97, 122, 9, 
	10, 13, 32, 36, 42, 58, 95, 44, 
	46, 48, 57, 65, 90, 97, 122, 9, 
	10, 13, 32, 36, 42, 44, 58, 95, 
	45, 46, 48, 57, 65, 90, 97, 122, 
	9, 10, 13, 32, 36, 42, 58, 95, 
	44, 46, 48, 57, 65, 90, 97, 122, 
	9, 10, 13, 32, 36, 42, 44, 58, 
	95, 45, 46, 48, 57, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 58, 
	95, 44, 46, 48, 57, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 44, 
	58, 95, 45, 46, 48, 57, 65, 90, 
	97, 122, 9, 10, 13, 32, 36, 42, 
	58, 95, 44, 46, 48, 57, 65, 90, 
	97, 122, 9, 10, 13, 32, 36, 42, 
	44, 58, 95, 45, 46, 48, 57, 65, 
	90, 97, 122, 9, 10, 13, 32, 36, 
	42, 58, 95, 44, 46, 48, 57, 65, 
	90, 97, 122, 9, 10, 13, 32, 36, 
	42, 44, 58, 95, 45, 46, 48, 57, 
	65, 90, 97, 122, 9, 10, 13, 32, 
	36, 42, 44, 58, 95, 45, 46, 48, 
	57, 65, 90, 97, 122, 9, 10, 13, 
	32, 36, 42, 58, 95, 44, 46, 48, 
	57, 65, 90, 97, 122, 9, 10, 13, 
	32, 36, 42, 95, 44, 46, 48, 58, 
	65, 90, 97, 122, 10, 9, 10, 13, 
	32, 36, 42, 44, 58, 95, 45, 46, 
	48, 57, 65, 90, 97, 122, 9, 10, 
	13, 32, 36, 42, 58, 95, 44, 46, 
	48, 57, 65, 90, 97, 122, 9, 10, 
	13, 32, 36, 42, 44, 58, 95, 45, 
	46, 48, 57, 65, 90, 97, 122, 9, 
	10, 13, 32, 36, 42, 58, 95, 44, 
	46, 48, 57, 65, 90, 97, 122, 9, 
	10, 13, 32, 36, 42, 44, 58, 95, 
	45, 46, 48, 57, 65, 90, 97, 122, 
	9, 10, 13, 32, 36, 42, 44, 58, 
	95, 45, 46, 48, 57, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 58, 
	95, 44, 46, 48, 57, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 77, 
	95, 44, 46, 48, 58, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 67, 
	95, 44, 46, 48, 58, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 44, 
	95, 45, 46, 48, 58, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 58, 
	95, 44, 46, 48, 57, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 58, 
	95, 44, 46, 48, 57, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 58, 
	95, 44, 46, 48, 57, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 58, 
	95, 44, 46, 48, 57, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 58, 
	95, 44, 46, 48, 57, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 58, 
	95, 44, 46, 48, 57, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 46, 
	95, 44, 45, 48, 58, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 58, 
	95, 44, 46, 48, 57, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 58, 
	95, 44, 46, 48, 57, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 58, 
	95, 44, 46, 48, 57, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 44, 
	95, 45, 46, 48, 58, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 65, 
	86, 95, 44, 46, 48, 58, 66, 90, 
	97, 122, 9, 10, 13, 32, 36, 42, 
	44, 95, 45, 46, 48, 58, 65, 90, 
	97, 122, 9, 10, 13, 32, 36, 42, 
	44, 58, 95, 45, 46, 48, 57, 65, 
	90, 97, 122, 9, 10, 13, 32, 36, 
	42, 44, 95, 45, 46, 48, 58, 65, 
	90, 97, 122, 9, 10, 13, 32, 36, 
	42, 44, 58, 95, 45, 46, 48, 57, 
	65, 90, 97, 122, 9, 10, 13, 32, 
	36, 42, 44, 95, 45, 46, 48, 58, 
	65, 90, 97, 122, 9, 10, 13, 32, 
	36, 42, 44, 58, 95, 45, 46, 48, 
	57, 65, 90, 97, 122, 9, 10, 13, 
	32, 36, 42, 44, 58, 95, 45, 46, 
	48, 57, 65, 90, 97, 122, 9, 10, 
	13, 32, 36, 42, 58, 95, 44, 46, 
	48, 57, 65, 90, 97, 122, 9, 10, 
	13, 32, 36, 42, 58, 95, 44, 46, 
	48, 57, 65, 90, 97, 122, 9, 10, 
	13, 32, 36, 42, 58, 95, 44, 46, 
	48, 57, 65, 90, 97, 122, 9, 10, 
	13, 32, 36, 42, 58, 95, 44, 46, 
	48, 57, 65, 90, 97, 122, 9, 10, 
	13, 32, 36, 42, 58, 95, 44, 46, 
	48, 57, 65, 90, 97, 122, 9, 10, 
	13, 32, 36, 42, 58, 95, 44, 46, 
	48, 57, 65, 90, 97, 122, 9, 10, 
	13, 32, 36, 42, 44, 58, 95, 45, 
	46, 48, 57, 65, 90, 97, 122, 9, 
	10, 13, 32, 36, 42, 95, 44, 46, 
	48, 58, 65, 90, 97, 122, 9, 10, 
	13, 32, 36, 42, 95, 44, 46, 48, 
	58, 65, 90, 97, 122, 10, 9, 10, 
	13, 32, 36, 42, 46, 58, 95, 44, 
	45, 48, 57, 65, 90, 97, 122, 9, 
	10, 13, 32, 36, 42, 58, 95, 44, 
	46, 48, 57, 65, 90, 97, 122, 9, 
	10, 13, 32, 36, 42, 44, 58, 95, 
	45, 46, 48, 57, 65, 90, 97, 122, 
	9, 10, 13, 32, 36, 42, 69, 87, 
	95, 44, 46, 48, 58, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 46, 
	58, 95, 44, 45, 48, 57, 65, 90, 
	97, 122, 9, 10, 13, 32, 36, 42, 
	58, 95, 44, 46, 48, 57, 65, 90, 
	97, 122, 9, 10, 13, 32, 36, 42, 
	44, 58, 95, 45, 46, 48, 57, 65, 
	90, 97, 122, 9, 10, 13, 32, 36, 
	42, 46, 58, 95, 44, 45, 48, 57, 
	65, 90, 97, 122, 9, 10, 13, 32, 
	36, 42, 58, 95, 44, 46, 48, 57, 
	65, 90, 97, 122, 9, 10, 13, 32, 
	36, 42, 44, 58, 95, 45, 46, 48, 
	57, 65, 90, 97, 122, 9, 10, 13, 
	32, 36, 42, 58, 95, 44, 46, 48, 
	57, 65, 90, 97, 122, 9, 10, 13, 
	32, 36, 42, 58, 95, 44, 46, 48, 
	57, 65, 90, 97, 122, 9, 10, 13, 
	32, 36, 42, 58, 95, 44, 46, 48, 
	57, 65, 90, 97, 122, 9, 10, 13, 
	32, 36, 42, 46, 58, 95, 44, 45, 
	48, 57, 65, 90, 97, 122, 9, 10, 
	13, 32, 36, 42, 58, 95, 44, 46, 
	48, 57, 65, 90, 97, 122, 9, 10, 
	13, 32, 36, 42, 44, 58, 95, 45, 
	46, 48, 57, 65, 90, 97, 122, 9, 
	10, 13, 32, 36, 42, 69, 87, 95, 
	44, 46, 48, 58, 65, 90, 97, 122, 
	9, 10, 13, 32, 36, 42, 58, 95, 
	44, 46, 48, 57, 65, 90, 97, 122, 
	9, 10, 13, 32, 36, 42, 58, 95, 
	44, 46, 48, 57, 65, 90, 97, 122, 
	9, 10, 13, 32, 36, 42, 46, 58, 
	95, 44, 45, 48, 57, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 58, 
	95, 44, 46, 48, 57, 65, 90, 97, 
	122, 9, 10, 13, 32, 36, 42, 44, 
	58, 95, 45, 46, 48, 57, 65, 90, 
	97, 122, 9, 10, 13, 32, 36, 42, 
	78, 83, 95, 44, 46, 48, 58, 65, 
	90, 97, 122, 9, 32, 36, 42, 95, 
	44, 46, 48, 58, 65, 90, 97, 122, 
	0
};

static const char _NMEA_single_lengths[] = {
	0, 5, 7, 8, 1, 8, 9, 8, 
	8, 8, 8, 9, 8, 9, 8, 9, 
	8, 9, 8, 9, 8, 9, 9, 8, 
	7, 1, 9, 8, 9, 8, 9, 9, 
	8, 8, 8, 8, 8, 8, 8, 8, 
	8, 8, 8, 8, 8, 8, 8, 9, 
	8, 9, 8, 9, 8, 9, 9, 8, 
	8, 8, 8, 8, 8, 9, 7, 7, 
	1, 9, 8, 9, 9, 9, 8, 9, 
	9, 8, 9, 8, 8, 8, 9, 8, 
	9, 9, 8, 8, 9, 8, 9, 9, 
	5
};

static const char _NMEA_range_lengths[] = {
	0, 4, 4, 4, 0, 4, 4, 4, 
	4, 4, 4, 4, 4, 4, 4, 4, 
	4, 4, 4, 4, 4, 4, 4, 4, 
	4, 0, 4, 4, 4, 4, 4, 4, 
	4, 4, 4, 4, 4, 4, 4, 4, 
	4, 4, 4, 4, 4, 4, 4, 4, 
	4, 4, 4, 4, 4, 4, 4, 4, 
	4, 4, 4, 4, 4, 4, 4, 4, 
	0, 4, 4, 4, 4, 4, 4, 4, 
	4, 4, 4, 4, 4, 4, 4, 4, 
	4, 4, 4, 4, 4, 4, 4, 4, 
	4
};

static const short _NMEA_index_offsets[] = {
	0, 0, 10, 22, 35, 37, 50, 64, 
	77, 90, 103, 116, 130, 143, 157, 170, 
	184, 197, 211, 224, 238, 251, 265, 279, 
	292, 304, 306, 320, 333, 347, 360, 374, 
	388, 401, 414, 427, 440, 453, 466, 479, 
	492, 505, 518, 531, 544, 557, 570, 583, 
	597, 610, 624, 637, 651, 664, 678, 692, 
	705, 718, 731, 744, 757, 770, 784, 796, 
	808, 810, 824, 837, 851, 865, 879, 892, 
	906, 920, 933, 947, 960, 973, 986, 1000, 
	1013, 1027, 1041, 1054, 1067, 1081, 1094, 1108, 
	1122
};

static const char _NMEA_indicies[] = {
	0, 0, 2, 0, 0, 0, 0, 0, 
	0, 1, 0, 3, 4, 0, 0, 0, 
	0, 0, 0, 0, 0, 1, 0, 3, 
	4, 0, 0, 0, 5, 0, 0, 0, 
	0, 0, 1, 3, 1, 0, 3, 4, 
	0, 0, 0, 6, 0, 0, 0, 0, 
	0, 1, 0, 3, 4, 0, 0, 0, 
	7, 8, 0, 0, 0, 0, 0, 1, 
	0, 3, 4, 0, 0, 0, 9, 0, 
	0, 0, 0, 0, 1, 0, 3, 4, 
	0, 0, 0, 10, 0, 0, 0, 0, 
	0, 1, 0, 3, 4, 0, 0, 0, 
	11, 0, 0, 0, 0, 0, 1, 0, 
	3, 4, 0, 0, 0, 0, 0, 0, 
	12, 0, 0, 1, 0, 3, 4, 0, 
	0, 0, 13, 0, 0, 0, 12, 0, 
	0, 1, 0, 3, 4, 0, 0, 0, 
	0, 0, 0, 14, 0, 0, 1, 0, 
	3, 4, 0, 0, 0, 15, 0, 0, 
	0, 14, 0, 0, 1, 0, 3, 4, 
	0, 0, 0, 0, 0, 0, 16, 0, 
	0, 1, 0, 3, 4, 0, 0, 0, 
	17, 0, 0, 0, 16, 0, 0, 1, 
	0, 3, 4, 0, 0, 0, 0, 0, 
	0, 18, 0, 0, 1, 0, 3, 4, 
	0, 0, 0, 19, 0, 0, 0, 18, 
	0, 0, 1, 0, 3, 4, 0, 0, 
	0, 0, 0, 0, 20, 0, 0, 1, 
	0, 3, 4, 0, 0, 0, 21, 0, 
	0, 0, 20, 0, 0, 1, 0, 3, 
	4, 0, 0, 0, 0, 0, 0, 22, 
	0, 0, 1, 0, 3, 4, 0, 0, 
	0, 23, 0, 0, 0, 22, 0, 0, 
	1, 0, 3, 4, 0, 0, 0, 24, 
	0, 0, 0, 25, 0, 0, 1, 26, 
	3, 4, 26, 26, 26, 26, 26, 26, 
	27, 26, 26, 1, 26, 28, 29, 26, 
	26, 26, 26, 26, 26, 26, 26, 1, 
	28, 1, 26, 28, 29, 26, 26, 26, 
	30, 26, 26, 26, 27, 26, 26, 1, 
	26, 28, 29, 26, 26, 26, 26, 26, 
	26, 31, 26, 26, 1, 26, 28, 29, 
	26, 26, 26, 32, 26, 26, 26, 31, 
	26, 26, 1, 26, 28, 29, 26, 26, 
	26, 26, 26, 26, 33, 26, 26, 1, 
	26, 28, 29, 26, 26, 26, 34, 26, 
	26, 26, 33, 26, 26, 1, 26, 28, 
	29, 26, 26, 26, 35, 26, 26, 26, 
	36, 26, 26, 1, 26, 28, 29, 26, 
	26, 26, 26, 26, 26, 27, 26, 26, 
	1, 0, 3, 4, 0, 0, 0, 37, 
	0, 0, 0, 0, 0, 1, 0, 3, 
	4, 0, 0, 0, 38, 0, 0, 0, 
	0, 0, 1, 0, 3, 4, 0, 0, 
	0, 39, 0, 0, 0, 0, 0, 1, 
	0, 3, 4, 0, 0, 0, 0, 0, 
	0, 40, 0, 0, 1, 0, 3, 4, 
	0, 0, 0, 0, 0, 0, 41, 0, 
	0, 1, 0, 3, 4, 0, 0, 0, 
	0, 0, 0, 42, 0, 0, 1, 0, 
	3, 4, 0, 0, 0, 0, 0, 0, 
	43, 0, 0, 1, 0, 3, 4, 0, 
	0, 0, 0, 0, 0, 44, 0, 0, 
	1, 0, 3, 4, 0, 0, 0, 0, 
	0, 0, 45, 0, 0, 1, 0, 3, 
	4, 0, 0, 0, 46, 0, 0, 0, 
	0, 0, 1, 0, 3, 4, 0, 0, 
	0, 0, 0, 0, 47, 0, 0, 1, 
	0, 3, 4, 0, 0, 0, 0, 0, 
	0, 48, 0, 0, 1, 0, 3, 4, 
	0, 0, 0, 0, 0, 0, 49, 0, 
	0, 1, 0, 3, 4, 0, 0, 0, 
	50, 0, 0, 0, 0, 0, 1, 0, 
	3, 4, 0, 0, 0, 51, 52, 0, 
	0, 0, 0, 0, 1, 0, 3, 4, 
	0, 0, 0, 53, 0, 0, 0, 0, 
	0, 1, 0, 3, 4, 0, 0, 0, 
	54, 0, 0, 0, 55, 0, 0, 1, 
	0, 3, 4, 0, 0, 0, 56, 0, 
	0, 0, 0, 0, 1, 0, 3, 4, 
	0, 0, 0, 57, 0, 0, 0, 58, 
	0, 0, 1, 0, 3, 4, 0, 0, 
	0, 59, 0, 0, 0, 0, 0, 1, 
	0, 3, 4, 0, 0, 0, 60, 0, 
	0, 0, 61, 0, 0, 1, 0, 3, 
	4, 0, 0, 0, 62, 0, 0, 0, 
	63, 0, 0, 1, 0, 3, 4, 0, 
	0, 0, 0, 0, 0, 64, 0, 0, 
	1, 0, 3, 4, 0, 0, 0, 0, 
	0, 0, 65, 0, 0, 1, 0, 3, 
	4, 0, 0, 0, 0, 0, 0, 66, 
	0, 0, 1, 0, 3, 4, 0, 0, 
	0, 0, 0, 0, 67, 0, 0, 1, 
	0, 3, 4, 0, 0, 0, 0, 0, 
	0, 68, 0, 0, 1, 0, 3, 4, 
	0, 0, 0, 0, 0, 0, 69, 0, 
	0, 1, 0, 3, 4, 0, 0, 0, 
	70, 0, 0, 0, 71, 0, 0, 1, 
	72, 3, 4, 72, 72, 72, 72, 72, 
	72, 72, 72, 1, 72, 73, 74, 72, 
	72, 72, 72, 72, 72, 72, 72, 1, 
	73, 1, 0, 3, 4, 0, 0, 0, 
	75, 0, 0, 0, 71, 0, 0, 1, 
	0, 3, 4, 0, 0, 0, 0, 0, 
	0, 76, 0, 0, 1, 0, 3, 4, 
	0, 0, 0, 77, 0, 0, 0, 76, 
	0, 0, 1, 0, 3, 4, 0, 0, 
	0, 70, 78, 0, 0, 0, 0, 0, 
	1, 0, 3, 4, 0, 0, 0, 79, 
	0, 0, 0, 63, 0, 0, 1, 0, 
	3, 4, 0, 0, 0, 0, 0, 0, 
	80, 0, 0, 1, 0, 3, 4, 0, 
	0, 0, 62, 0, 0, 0, 80, 0, 
	0, 1, 0, 3, 4, 0, 0, 0, 
	81, 0, 0, 0, 61, 0, 0, 1, 
	0, 3, 4, 0, 0, 0, 0, 0, 
	0, 82, 0, 0, 1, 0, 3, 4, 
	0, 0, 0, 60, 0, 0, 0, 82, 
	0, 0, 1, 0, 3, 4, 0, 0, 
	0, 0, 0, 0, 83, 0, 0, 1, 
	0, 3, 4, 0, 0, 0, 0, 0, 
	0, 84, 0, 0, 1, 0, 3, 4, 
	0, 0, 0, 0, 0, 0, 85, 0, 
	0, 1, 0, 3, 4, 0, 0, 0, 
	86, 0, 0, 0, 85, 0, 0, 1, 
	0, 3, 4, 0, 0, 0, 0, 0, 
	0, 87, 0, 0, 1, 0, 3, 4, 
	0, 0, 0, 88, 0, 0, 0, 87, 
	0, 0, 1, 0, 3, 4, 0, 0, 
	0, 89, 90, 0, 0, 0, 0, 0, 
	1, 0, 3, 4, 0, 0, 0, 0, 
	0, 0, 91, 0, 0, 1, 0, 3, 
	4, 0, 0, 0, 0, 0, 0, 92, 
	0, 0, 1, 0, 3, 4, 0, 0, 
	0, 93, 0, 0, 0, 92, 0, 0, 
	1, 0, 3, 4, 0, 0, 0, 0, 
	0, 0, 94, 0, 0, 1, 0, 3, 
	4, 0, 0, 0, 95, 0, 0, 0, 
	94, 0, 0, 1, 0, 3, 4, 0, 
	0, 0, 96, 97, 0, 0, 0, 0, 
	0, 1, 0, 0, 2, 0, 0, 0, 
	0, 0, 0, 1, 0
};

static const char _NMEA_trans_targs_wi[] = {
	2, 0, 3, 88, 4, 5, 6, 7, 
	33, 8, 9, 10, 11, 12, 13, 14, 
	15, 16, 17, 18, 19, 20, 21, 22, 
	23, 22, 24, 26, 88, 25, 27, 28, 
	29, 30, 31, 32, 31, 34, 35, 36, 
	37, 38, 39, 40, 41, 42, 43, 44, 
	45, 46, 47, 48, 48, 49, 50, 82, 
	51, 52, 75, 53, 54, 72, 55, 69, 
	56, 57, 58, 59, 60, 61, 62, 65, 
	63, 88, 64, 66, 67, 68, 62, 70, 
	71, 73, 74, 76, 77, 78, 79, 80, 
	81, 52, 52, 83, 84, 85, 86, 87, 
	50, 50
};

static const char _NMEA_trans_actions_wi[] = {
	0, 0, 0, 1, 0, 0, 0, 0, 
	0, 0, 0, 0, 3, 25, 3, 23, 
	3, 27, 3, 29, 3, 31, 3, 33, 
	83, 3, 0, 3, 38, 0, 29, 3, 
	31, 3, 33, 83, 3, 0, 0, 0, 
	9, 50, 9, 53, 9, 56, 0, 9, 
	11, 71, 0, 19, 21, 0, 0, 9, 
	0, 0, 9, 0, 0, 3, 0, 3, 
	9, 59, 9, 62, 9, 65, 0, 3, 
	0, 35, 0, 5, 47, 0, 15, 5, 
	44, 5, 41, 11, 74, 3, 5, 7, 
	0, 17, 80, 68, 3, 5, 7, 0, 
	13, 77
};

static const int NMEA_start = 1;

static const int NMEA_error = 0;

#line 70 "nmea.rl"


void nmea_scanner(char *p, VALUE handler) {
	char *pe;
	int cs;
	
	int line_counter = 0, curline = 0;
	int current_digit = 0, current_frac = 0;
	double current_float = 0;
	int current_degrees = 0;
	double current_minutes = 0.0;
	int bcd = 0;
	int utc_hours, utc_minutes;
	int utc_day, utc_month, utc_year, utc_seconds, utc_useconds;
	
	int rmc_valid = 0;
	
	
	static VALUE satellites = Qnil;
	int total_gsv_number, current_gsv_number, total_satellites, satellite_number, elevation, azimuth, snr_db;
	
	
#line 466 "../ext/nmea.c"
	{
	cs = NMEA_start;
	}
#line 92 "nmea.rl"
	angle_value latitude, longitude;
	
	pe = p + strlen(p);
	
#line 475 "../ext/nmea.c"
	{
	int _klen;
	unsigned int _trans;
	const char *_acts;
	unsigned int _nacts;
	const char *_keys;

	if ( p == pe )
		goto _out;
_resume:
	if ( cs == 0 )
		goto _out;
	_keys = _NMEA_trans_keys + _NMEA_key_offsets[cs];
	_trans = _NMEA_index_offsets[cs];

	_klen = _NMEA_single_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + _klen - 1;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + ((_upper-_lower) >> 1);
			if ( (*p) < *_mid )
				_upper = _mid - 1;
			else if ( (*p) > *_mid )
				_lower = _mid + 1;
			else {
				_trans += (_mid - _keys);
				goto _match;
			}
		}
		_keys += _klen;
		_trans += _klen;
	}

	_klen = _NMEA_range_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + (_klen<<1) - 2;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + (((_upper-_lower) >> 1) & ~1);
			if ( (*p) < _mid[0] )
				_upper = _mid - 2;
			else if ( (*p) > _mid[1] )
				_lower = _mid + 2;
			else {
				_trans += ((_mid - _keys)>>1);
				goto _match;
			}
		}
		_trans += _klen;
	}

_match:
	_trans = _NMEA_indicies[_trans];
	cs = _NMEA_trans_targs_wi[_trans];

	if ( _NMEA_trans_actions_wi[_trans] == 0 )
		goto _again;

	_acts = _NMEA_actions + _NMEA_trans_actions_wi[_trans];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 )
	{
		switch ( *_acts++ )
		{
	case 0:
#line 6 "nmea.rl"
	{ curline++; }
	break;
	case 1:
#line 10 "nmea.rl"
	{
		current_float = 0;
		current_digit = current_digit*10 + ((*p) - '0');
	}
	break;
	case 2:
#line 14 "nmea.rl"
	{
		current_frac = 10;
		current_float = current_digit;
		current_digit = 0;
	}
	break;
	case 3:
#line 19 "nmea.rl"
	{
		current_float += ((*p) - '0')*1.0 / current_frac;
		current_frac *= 10;
	}
	break;
	case 4:
#line 23 "nmea.rl"
	{bcd = 10*((*p) - '0');}
	break;
	case 5:
#line 23 "nmea.rl"
	{bcd += (*p) - '0';}
	break;
	case 6:
#line 24 "nmea.rl"
	{bcd = bcd*10 + ((*p) - '0');}
	break;
	case 7:
#line 30 "nmea.rl"
	{ utc_hours = bcd; }
	break;
	case 8:
#line 30 "nmea.rl"
	{ utc_minutes = bcd;}
	break;
	case 9:
#line 30 "nmea.rl"
	{ utc_seconds = bcd; }
	break;
	case 10:
#line 30 "nmea.rl"
	{ utc_useconds = bcd;}
	break;
	case 11:
#line 31 "nmea.rl"
	{ utc_day = bcd; }
	break;
	case 12:
#line 31 "nmea.rl"
	{ utc_month = bcd-1;}
	break;
	case 13:
#line 31 "nmea.rl"
	{ utc_year = 100+bcd;}
	break;
	case 14:
#line 33 "nmea.rl"
	{
		current_degrees = bcd;
		bcd = 0;
	}
	break;
	case 15:
#line 38 "nmea.rl"
	{current_degrees *= -1;}
	break;
	case 16:
#line 39 "nmea.rl"
	{
		latitude.degrees = current_degrees;
		latitude.minutes = current_float;
		current_float = 0;
		current_degrees = 0;
	}
	break;
	case 17:
#line 47 "nmea.rl"
	{current_degrees *= -1;}
	break;
	case 18:
#line 48 "nmea.rl"
	{
		longitude.degrees = current_degrees;
		longitude.minutes = current_float;
		current_degrees = 0;
		current_float = 0;
	}
	break;
	case 19:
#line 56 "nmea.rl"
	{current_float = 0;}
	break;
	case 20:
#line 57 "nmea.rl"
	{current_float = 0;}
	break;
	case 21:
#line 58 "nmea.rl"
	{current_float = 0;}
	break;
	case 22:
#line 5 "nmea.rl"
	{rmc_valid = 1;}
	break;
	case 23:
#line 5 "nmea.rl"
	{rmc_valid = 0;}
	break;
	case 24:
#line 6 "nmea.rl"
	{
		struct tm t;
		t.tm_sec = utc_seconds;
		t.tm_min = utc_minutes;
		t.tm_hour = utc_hours;
		t.tm_mday = utc_day;
		t.tm_mon = utc_month;
		t.tm_year = utc_year;
		t.tm_gmtoff = 0;
		VALUE _lat = Qnil, _long = Qnil, _utc;
		if(rmc_valid && load_constants()) {
			_lat = rb_funcall(cLatitude, id_new, 2, INT2FIX(latitude.degrees), rb_float_new(latitude.minutes));
			_long = rb_funcall(cLongitude, id_new, 2, INT2FIX(longitude.degrees), rb_float_new(longitude.minutes));
		} else {
			printf("invalid RMC\n");
		}
		time_t _t = timegm(&t);
		_utc = rb_time_new(_t, utc_useconds);
		rb_funcall(handler, id_rmc, 3, _lat, _long, _utc);
	}
	break;
	case 25:
#line 4 "nmea.rl"
	{
		current_gsv_number  = current_digit;
		current_digit = 0;
		if(current_gsv_number == 1) {
			satellites = rb_ary_new();
			rb_gc_register_address(&satellites);
		}
	}
	break;
	case 26:
#line 12 "nmea.rl"
	{total_gsv_number = current_digit; current_digit = 0;}
	break;
	case 27:
#line 14 "nmea.rl"
	{total_satellites = current_digit; current_digit = 0;}
	break;
	case 28:
#line 15 "nmea.rl"
	{satellite_number = current_digit; current_digit = 0; }
	break;
	case 29:
#line 16 "nmea.rl"
	{elevation = current_digit; current_digit = 0;}
	break;
	case 30:
#line 17 "nmea.rl"
	{azimuth = current_digit; current_digit = 0;}
	break;
	case 31:
#line 18 "nmea.rl"
	{snr_db = current_digit; current_digit = 0;}
	break;
	case 32:
#line 19 "nmea.rl"
	{
		VALUE satellite = rb_funcall(cSatelliteInfo, id_new, 4, INT2FIX(satellite_number), INT2FIX(elevation), INT2FIX(azimuth), INT2FIX(snr_db));
		rb_ary_push(satellites, satellite);
	}
	break;
	case 33:
#line 23 "nmea.rl"
	{
		if(current_gsv_number == total_gsv_number) {
			rb_funcall(handler, id_gsv, 1, satellites);
			rb_gc_unregister_address(&satellites);
			satellites = Qnil;
		}
	}
	break;
#line 743 "../ext/nmea.c"
		}
	}

_again:
	if ( ++p != pe )
		goto _resume;
	_out: {}
	}
#line 96 "nmea.rl"
	if(cs == NMEA_error) {
		rb_raise(eNMEAError, "PARSE ERROR on line %d: '%s'\n", line_counter, p);
	}
}

