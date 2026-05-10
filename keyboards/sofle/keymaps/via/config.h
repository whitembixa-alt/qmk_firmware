// Copyright 2024 Santosh Kumar (@santosh)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define TRI_LAYER_LOWER_LAYER 1
#define TRI_LAYER_UPPER_LAYER 2
#define TRI_LAYER_ADJUST_LAYER 3

#define DYNAMIC_KEYMAP_LAYER_COUNT 4

#define RGB_MATRIX_DEFAULT_ON true
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR
#define RGB_MATRIX_DEFAULT_HUE 170
#define RGB_MATRIX_DEFAULT_SAT 255
#define RGB_MATRIX_DEFAULT_VAL 80
#define RGB_MATRIX_DEFAULT_SPD 127

#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120
#define RGB_MATRIX_SLEEP

#define RGB_MATRIX_HUE_STEP 8
#define RGB_MATRIX_SAT_STEP 16
#define RGB_MATRIX_VAL_STEP 16
#define RGB_MATRIX_SPD_STEP 16

#define RGB_MATRIX_LED_FLUSH_LIMIT 16
#define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 5

// =====================================================
// RGB MATRIX EFFECTS — статичные / базовые
// =====================================================

#define ENABLE_RGB_MATRIX_SOLID_COLOR
// *Статичный один цвет на всей клавиатуре.
// Самый полезный режим для повседневного использования.
// Speed не влияет.

// #define ENABLE_RGB_MATRIX_BREATHING
// Один цвет плавно "дышит": яркость увеличивается и уменьшается.

// =====================================================
// RGB MATRIX EFFECTS — rainbow / cycle
// =====================================================

// #define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
// Радужный градиент движется слева направо.
// Классический RGB rainbow wave.

// #define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
// Радужный градиент движется сверху вниз.

// #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
// Две радужные волны движутся симметрично относительно центра.

// #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
// Движущийся радужный V-образный рисунок, "шеврон".

// #define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
// Радужная спираль вращается вокруг центра клавиатуры.

// #define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
// Две радужные вертушки.
// На split-клавиатурах часто выглядит как отдельная вертушка на каждой половине.

#define ENABLE_RGB_MATRIX_FLOWER_BLOOMING
// *Радужный эффект "раскрывающегося цветка":
// одна часть рисунка движется в одну сторону, другая — в другую.

// =====================================================
// RGB MATRIX EFFECTS — random / hue / pixel
// =====================================================

// #define ENABLE_RGB_MATRIX_RAINDROPS
// Случайные клавиши периодически меняют оттенок.
// Похоже на редкие цветные капли.

// #define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
// Как RAINDROPS, но меняется и оттенок, и насыщенность.
// Выглядит более пёстро, "конфетно".

//#define ENABLE_RGB_MATRIX_HUE_BREATHING
// *Не яркость, а сам оттенок слегка уходит в сторону и возвращается.
// Цвет "дышит" по hue.

// #define ENABLE_RGB_MATRIX_HUE_PENDULUM
// Оттенок качается вправо-влево как маятник.*

// #define ENABLE_RGB_MATRIX_HUE_WAVE
// Волна изменения оттенка проходит по клавиатуре.*

#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
// *Одноцветный пиксельный/фрактальный рисунок,
// пульсирующий горизонтально к краям.

// #define ENABLE_RGB_MATRIX_PIXEL_FLOW
// Цветной поток идёт по физическому порядку LED-цепочки.
// Если светодиоды разведены змейкой, движение будет идти по этой змейке.

#define ENABLE_RGB_MATRIX_PIXEL_RAIN
// *Случайные светодиоды загораются случайными цветами.
// Похоже на цветной цифровой дождь.

// =====================================================
// RGB MATRIX EFFECTS — reactive, реакция на нажатия
// =====================================================

// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
// Нажатая клавиша вспыхивает текущим цветом и затухает.
// Самый простой и полезный reactive-эффект.

// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
// То же, что WIDE, но одновременно учитывает несколько последних нажатий.

#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
// *Несколько таких импульсов от нескольких последних нажатий.

// #define ENABLE_RGB_MATRIX_MULTISPLASH
// *Несколько цветных волн от нескольких нажатий.

// #define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
// Несколько одноцветных волн от нескольких последних нажатий.

// =====================================================
// RGB MATRIX EFFECTS — starlight / river
// =====================================================

// #define ENABLE_RGB_MATRIX_STARLIGHT
// Случайные LED загораются и гаснут с разной яркостью,
// сохраняя выбранный пользователем цвет.
// Похоже на мерцание звёзд.

// #define ENABLE_RGB_MATRIX_STARLIGHT_SMOOTH
// Более плавное звёздное мерцание:
// LED медленно набирают и сбрасывают яркость.

#define ENABLE_RGB_MATRIX_STARLIGHT_DUAL_HUE
// *Звёздное мерцание, но оттенок немного гуляет
// вокруг выбранного цвета.

// #define ENABLE_RGB_MATRIX_STARLIGHT_DUAL_SAT
// Звёздное мерцание, но немного меняется насыщенность.

#define ENABLE_RGB_MATRIX_RIVERFLOW
// * Модификация breathing-эффекта.
// Яркость смещается по положению клавиш,
// создавая ощущение текущей реки.