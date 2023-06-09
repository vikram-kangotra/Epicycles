// Copyright (C) 2023 by Vikram Kangotra
// This file is part of Epicycloid.

#include "color.h"

const Color Color::WHITE = Color(255, 255, 255, 255);
const Color Color::BLACK = Color(0, 0, 0, 255);
const Color Color::SLATE_50 = Color(248, 250, 252, 255);
const Color Color::SLATE_100 = Color(241, 245, 249, 255);
const Color Color::SLATE_200 = Color(226, 232, 240, 255);
const Color Color::SLATE_300 = Color(203, 213, 225, 255);
const Color Color::SLATE_400 = Color(148, 163, 184, 255);
const Color Color::SLATE_500 = Color(100, 116, 139, 255);
const Color Color::SLATE_600 = Color(71, 85, 105, 255);
const Color Color::SLATE_700 = Color(51, 65, 85, 255);
const Color Color::SLATE_800 = Color(30, 41, 59, 255);
const Color Color::SLATE_900 = Color(15, 23, 42, 255);
const Color Color::SLATE_950 = Color(2, 6, 23, 255);
const Color Color::GRAY_50 = Color(249, 250, 251, 255);
const Color Color::GRAY_100 = Color(243, 244, 246, 255);
const Color Color::GRAY_200 = Color(229, 231, 235, 255);
const Color Color::GRAY_300 = Color(209, 213, 219, 255);
const Color Color::GRAY_400 = Color(156, 163, 175, 255);
const Color Color::GRAY_500 = Color(107, 114, 128, 255);
const Color Color::GRAY_600 = Color(75, 85, 99, 255);
const Color Color::GRAY_700 = Color(55, 65, 81, 255);
const Color Color::GRAY_800 = Color(31, 41, 55, 255);
const Color Color::GRAY_900 = Color(17, 24, 39, 255);
const Color Color::GRAY_950 = Color(3, 7, 18, 255);
const Color Color::ZINC_50 = Color(250, 250, 250, 255);
const Color Color::ZINC_100 = Color(244, 244, 245, 255);
const Color Color::ZINC_200 = Color(228, 228, 231, 255);
const Color Color::ZINC_300 = Color(212, 212, 216, 255);
const Color Color::ZINC_400 = Color(161, 161, 170, 255);
const Color Color::ZINC_500 = Color(113, 113, 122, 255);
const Color Color::ZINC_600 = Color(82, 82, 91, 255);
const Color Color::ZINC_700 = Color(63, 63, 70, 255);
const Color Color::ZINC_800 = Color(39, 39, 42, 255);
const Color Color::ZINC_900 = Color(24, 24, 27, 255);
const Color Color::ZINC_950 = Color(9, 9, 11, 255);
const Color Color::NEUTRAL_50 = Color(250, 250, 250, 255);
const Color Color::NEUTRAL_100 = Color(245, 245, 245, 255);
const Color Color::NEUTRAL_200 = Color(229, 229, 229, 255);
const Color Color::NEUTRAL_300 = Color(212, 212, 212, 255);
const Color Color::NEUTRAL_400 = Color(163, 163, 163, 255);
const Color Color::NEUTRAL_500 = Color(115, 115, 115, 255);
const Color Color::NEUTRAL_600 = Color(82, 82, 82, 255);
const Color Color::NEUTRAL_700 = Color(64, 64, 64, 255);
const Color Color::NEUTRAL_800 = Color(38, 38, 38, 255);
const Color Color::NEUTRAL_900 = Color(23, 23, 23, 255);
const Color Color::NEUTRAL_950 = Color(10, 10, 10, 255);
const Color Color::STONE_50 = Color(250, 250, 249, 255);
const Color Color::STONE_100 = Color(245, 245, 244, 255);
const Color Color::STONE_200 = Color(231, 229, 228, 255);
const Color Color::STONE_300 = Color(214, 211, 209, 255);
const Color Color::STONE_400 = Color(168, 162, 158, 255);
const Color Color::STONE_500 = Color(120, 113, 108, 255);
const Color Color::STONE_600 = Color(87, 83, 78, 255);
const Color Color::STONE_700 = Color(68, 64, 60, 255);
const Color Color::STONE_800 = Color(41, 37, 36, 255);
const Color Color::STONE_900 = Color(28, 25, 23, 255);
const Color Color::STONE_950 = Color(12, 10, 9, 255);
const Color Color::RED_50 = Color(254, 242, 242, 255);
const Color Color::RED_100 = Color(254, 226, 226, 255);
const Color Color::RED_200 = Color(254, 202, 202, 255);
const Color Color::RED_300 = Color(252, 165, 165, 255);
const Color Color::RED_400 = Color(248, 113, 113, 255);
const Color Color::RED_500 = Color(239, 68, 68, 255);
const Color Color::RED_600 = Color(220, 38, 38, 255);
const Color Color::RED_700 = Color(185, 28, 28, 255);
const Color Color::RED_800 = Color(153, 27, 27, 255);
const Color Color::RED_900 = Color(127, 29, 29, 255);
const Color Color::RED_950 = Color(69, 10, 10, 255);
const Color Color::ORANGE_50 = Color(255, 247, 237, 255);
const Color Color::ORANGE_100 = Color(255, 237, 213, 255);
const Color Color::ORANGE_200 = Color(254, 215, 170, 255);
const Color Color::ORANGE_300 = Color(253, 186, 116, 255);
const Color Color::ORANGE_400 = Color(251, 146, 60, 255);
const Color Color::ORANGE_500 = Color(249, 115, 22, 255);
const Color Color::ORANGE_600 = Color(234, 88, 12, 255);
const Color Color::ORANGE_700 = Color(194, 65, 12, 255);
const Color Color::ORANGE_800 = Color(154, 52, 18, 255);
const Color Color::ORANGE_900 = Color(124, 45, 18, 255);
const Color Color::ORANGE_950 = Color(67, 20, 7, 255);
const Color Color::AMBER_50 = Color(255, 251, 235, 255);
const Color Color::AMBER_100 = Color(254, 243, 199, 255);
const Color Color::AMBER_200 = Color(253, 230, 138, 255);
const Color Color::AMBER_300 = Color(252, 211, 77, 255);
const Color Color::AMBER_400 = Color(251, 191, 36, 255);
const Color Color::AMBER_500 = Color(245, 158, 11, 255);
const Color Color::AMBER_600 = Color(217, 119, 6, 255);
const Color Color::AMBER_700 = Color(180, 83, 9, 255);
const Color Color::AMBER_800 = Color(146, 64, 14, 255);
const Color Color::AMBER_900 = Color(120, 53, 15, 255);
const Color Color::AMBER_950 = Color(69, 26, 3, 255);
const Color Color::YELLOW_50 = Color(254, 252, 232, 255);
const Color Color::YELLOW_100 = Color(254, 249, 195, 255);
const Color Color::YELLOW_200 = Color(254, 240, 138, 255);
const Color Color::YELLOW_300 = Color(253, 224, 71, 255);
const Color Color::YELLOW_400 = Color(250, 204, 21, 255);
const Color Color::YELLOW_500 = Color(234, 179, 8, 255);
const Color Color::YELLOW_600 = Color(202, 138, 4, 255);
const Color Color::YELLOW_700 = Color(161, 98, 7, 255);
const Color Color::YELLOW_800 = Color(133, 77, 14, 255);
const Color Color::YELLOW_900 = Color(113, 63, 18, 255);
const Color Color::YELLOW_950 = Color(66, 32, 6, 255);
const Color Color::LIME_50 = Color(247, 254, 231, 255);
const Color Color::LIME_100 = Color(236, 252, 203, 255);
const Color Color::LIME_200 = Color(217, 249, 157, 255);
const Color Color::LIME_300 = Color(190, 242, 100, 255);
const Color Color::LIME_400 = Color(163, 230, 53, 255);
const Color Color::LIME_500 = Color(132, 204, 22, 255);
const Color Color::LIME_600 = Color(101, 163, 13, 255);
const Color Color::LIME_700 = Color(77, 124, 15, 255);
const Color Color::LIME_800 = Color(63, 98, 18, 255);
const Color Color::LIME_900 = Color(54, 83, 20, 255);
const Color Color::LIME_950 = Color(26, 46, 5, 255);
const Color Color::GREEN_50 = Color(240, 253, 244, 255);
const Color Color::GREEN_100 = Color(220, 252, 231, 255);
const Color Color::GREEN_200 = Color(187, 247, 208, 255);
const Color Color::GREEN_300 = Color(134, 239, 172, 255);
const Color Color::GREEN_400 = Color(74, 222, 128, 255);
const Color Color::GREEN_500 = Color(34, 197, 94, 255);
const Color Color::GREEN_600 = Color(22, 163, 74, 255);
const Color Color::GREEN_700 = Color(21, 128, 61, 255);
const Color Color::GREEN_800 = Color(22, 101, 52, 255);
const Color Color::GREEN_900 = Color(20, 83, 45, 255);
const Color Color::GREEN_950 = Color(5, 46, 22, 255);
const Color Color::EMERALD_50 = Color(236, 253, 245, 255);
const Color Color::EMERALD_100 = Color(209, 250, 229, 255);
const Color Color::EMERALD_200 = Color(167, 243, 208, 255);
const Color Color::EMERALD_300 = Color(110, 231, 183, 255);
const Color Color::EMERALD_400 = Color(52, 211, 153, 255);
const Color Color::EMERALD_500 = Color(16, 185, 129, 255);
const Color Color::EMERALD_600 = Color(5, 150, 105, 255);
const Color Color::EMERALD_700 = Color(4, 120, 87, 255);
const Color Color::EMERALD_800 = Color(6, 95, 70, 255);
const Color Color::EMERALD_900 = Color(6, 78, 59, 255);
const Color Color::EMERALD_950 = Color(2, 44, 34, 255);
const Color Color::TEAL_50 = Color(240, 253, 250, 255);
const Color Color::TEAL_100 = Color(204, 251, 241, 255);
const Color Color::TEAL_200 = Color(153, 246, 228, 255);
const Color Color::TEAL_300 = Color(94, 234, 212, 255);
const Color Color::TEAL_400 = Color(45, 212, 191, 255);
const Color Color::TEAL_500 = Color(20, 184, 166, 255);
const Color Color::TEAL_600 = Color(13, 148, 136, 255);
const Color Color::TEAL_700 = Color(15, 118, 110, 255);
const Color Color::TEAL_800 = Color(17, 94, 89, 255);
const Color Color::TEAL_900 = Color(19, 78, 74, 255);
const Color Color::TEAL_950 = Color(4, 47, 46, 255);
const Color Color::CYAN_50 = Color(236, 254, 255, 255);
const Color Color::CYAN_100 = Color(207, 250, 254, 255);
const Color Color::CYAN_200 = Color(165, 243, 252, 255);
const Color Color::CYAN_300 = Color(103, 232, 249, 255);
const Color Color::CYAN_400 = Color(34, 211, 238, 255);
const Color Color::CYAN_500 = Color(6, 182, 212, 255);
const Color Color::CYAN_600 = Color(8, 145, 178, 255);
const Color Color::CYAN_700 = Color(14, 116, 144, 255);
const Color Color::CYAN_800 = Color(21, 94, 117, 255);
const Color Color::CYAN_900 = Color(22, 78, 99, 255);
const Color Color::CYAN_950 = Color(8, 51, 68, 255);
const Color Color::SKY_50 = Color(240, 249, 255, 255);
const Color Color::SKY_100 = Color(224, 242, 254, 255);
const Color Color::SKY_200 = Color(186, 230, 253, 255);
const Color Color::SKY_300 = Color(125, 211, 252, 255);
const Color Color::SKY_400 = Color(56, 189, 248, 255);
const Color Color::SKY_500 = Color(14, 165, 233, 255);
const Color Color::SKY_600 = Color(2, 132, 199, 255);
const Color Color::SKY_700 = Color(3, 105, 161, 255);
const Color Color::SKY_800 = Color(7, 89, 133, 255);
const Color Color::SKY_900 = Color(12, 74, 110, 255);
const Color Color::SKY_950 = Color(8, 47, 73, 255);
const Color Color::BLUE_50 = Color(239, 246, 255, 255);
const Color Color::BLUE_100 = Color(219, 234, 254, 255);
const Color Color::BLUE_200 = Color(191, 219, 254, 255);
const Color Color::BLUE_300 = Color(147, 197, 253, 255);
const Color Color::BLUE_400 = Color(96, 165, 250, 255);
const Color Color::BLUE_500 = Color(59, 130, 246, 255);
const Color Color::BLUE_600 = Color(37, 99, 235, 255);
const Color Color::BLUE_700 = Color(29, 78, 216, 255);
const Color Color::BLUE_800 = Color(30, 64, 175, 255);
const Color Color::BLUE_900 = Color(30, 58, 138, 255);
const Color Color::BLUE_950 = Color(23, 37, 84, 255);
const Color Color::INDIGO_50 = Color(238, 242, 255, 255);
const Color Color::INDIGO_100 = Color(224, 231, 255, 255);
const Color Color::INDIGO_200 = Color(199, 210, 254, 255);
const Color Color::INDIGO_300 = Color(165, 180, 252, 255);
const Color Color::INDIGO_400 = Color(129, 140, 248, 255);
const Color Color::INDIGO_500 = Color(99, 102, 241, 255);
const Color Color::INDIGO_600 = Color(79, 70, 229, 255);
const Color Color::INDIGO_700 = Color(67, 56, 202, 255);
const Color Color::INDIGO_800 = Color(55, 48, 163, 255);
const Color Color::INDIGO_900 = Color(49, 46, 129, 255);
const Color Color::INDIGO_950 = Color(30, 27, 75, 255);
const Color Color::VIOLET_50 = Color(245, 243, 255, 255);
const Color Color::VIOLET_100 = Color(237, 233, 254, 255);
const Color Color::VIOLET_200 = Color(221, 214, 254, 255);
const Color Color::VIOLET_300 = Color(196, 181, 253, 255);
const Color Color::VIOLET_400 = Color(167, 139, 250, 255);
const Color Color::VIOLET_500 = Color(139, 92, 246, 255);
const Color Color::VIOLET_600 = Color(124, 58, 237, 255);
const Color Color::VIOLET_700 = Color(109, 40, 217, 255);
const Color Color::VIOLET_800 = Color(91, 33, 182, 255);
const Color Color::VIOLET_900 = Color(76, 29, 149, 255);
const Color Color::VIOLET_950 = Color(46, 16, 101, 255);
const Color Color::PURPLE_50 = Color(250, 245, 255, 255);
const Color Color::PURPLE_100 = Color(243, 232, 255, 255);
const Color Color::PURPLE_200 = Color(233, 213, 255, 255);
const Color Color::PURPLE_300 = Color(216, 180, 254, 255);
const Color Color::PURPLE_400 = Color(192, 132, 252, 255);
const Color Color::PURPLE_500 = Color(168, 85, 247, 255);
const Color Color::PURPLE_600 = Color(147, 51, 234, 255);
const Color Color::PURPLE_700 = Color(126, 34, 206, 255);
const Color Color::PURPLE_800 = Color(107, 33, 168, 255);
const Color Color::PURPLE_900 = Color(88, 28, 135, 255);
const Color Color::PURPLE_950 = Color(59, 7, 100, 255);
const Color Color::FUCHSIA_50 = Color(253, 244, 255, 255);
const Color Color::FUCHSIA_100 = Color(250, 232, 255, 255);
const Color Color::FUCHSIA_200 = Color(245, 208, 254, 255);
const Color Color::FUCHSIA_300 = Color(240, 171, 252, 255);
const Color Color::FUCHSIA_400 = Color(232, 121, 249, 255);
const Color Color::FUCHSIA_500 = Color(217, 70, 239, 255);
const Color Color::FUCHSIA_600 = Color(192, 38, 211, 255);
const Color Color::FUCHSIA_700 = Color(162, 28, 175, 255);
const Color Color::FUCHSIA_800 = Color(134, 25, 143, 255);
const Color Color::FUCHSIA_900 = Color(112, 26, 117, 255);
const Color Color::FUCHSIA_950 = Color(74, 4, 78, 255);
const Color Color::PINK_50 = Color(253, 242, 248, 255);
const Color Color::PINK_100 = Color(252, 231, 243, 255);
const Color Color::PINK_200 = Color(251, 207, 232, 255);
const Color Color::PINK_300 = Color(249, 168, 212, 255);
const Color Color::PINK_400 = Color(244, 114, 182, 255);
const Color Color::PINK_500 = Color(236, 72, 153, 255);
const Color Color::PINK_600 = Color(219, 39, 119, 255);
const Color Color::PINK_700 = Color(190, 24, 93, 255);
const Color Color::PINK_800 = Color(157, 23, 77, 255);
const Color Color::PINK_900 = Color(131, 24, 67, 255);
const Color Color::PINK_950 = Color(80, 7, 36, 255);
const Color Color::ROSE_50 = Color(255, 241, 242, 255);
const Color Color::ROSE_100 = Color(255, 228, 230, 255);
const Color Color::ROSE_200 = Color(254, 205, 211, 255);
const Color Color::ROSE_300 = Color(253, 164, 175, 255);
const Color Color::ROSE_400 = Color(251, 113, 133, 255);
const Color Color::ROSE_500 = Color(244, 63, 94, 255);
const Color Color::ROSE_600 = Color(225, 29, 72, 255);
const Color Color::ROSE_700 = Color(190, 18, 60, 255);
const Color Color::ROSE_800 = Color(159, 18, 57, 255);
const Color Color::ROSE_900 = Color(136, 19, 55, 255);
const Color Color::ROSE_950 = Color(76, 5, 25, 255);

