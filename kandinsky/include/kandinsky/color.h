#ifndef KANDINSKY_COLOR_H
#define KANDINSKY_COLOR_H

#include <stdint.h>

class KDColor {
public:
  constexpr KDColor() : m_value(0) {}
  // FIXME: This should not be needed, and is probably wasting CPU cycles
  static constexpr KDColor RGB16(uint16_t rgb) {
    return KDColor(rgb);
  }
  static constexpr KDColor RGB24(uint32_t rgb) {
    return KDColor(((rgb&0xF80000)>>8)|((rgb&0x00FC00)>>5)|((rgb&0x0000F8)>>3));
  }
  static constexpr KDColor RGB888(uint8_t r, uint8_t g, uint8_t b) {
    return KDColor((r>>3)<<11 | (g>>2) << 5 | (b>>3));
  }
  uint8_t red() const {
    uint8_t r5 = (m_value>>11)&0x1F;
    return r5 << 3;
  }

  uint8_t green() const {
    uint8_t g6 = (m_value>>5)&0x3F;
    return g6 << 2;
  }

  uint8_t blue() const {
    uint8_t b5 = m_value&0x1F;
    return b5 << 3;
  }

  static KDColor blend(KDColor first, KDColor second, uint8_t alpha);
  KDColor invert() const { return KDColor(~m_value); }
  operator uint16_t() const { return m_value; }
private:
  constexpr KDColor(uint16_t value) : m_value(value) {}
  uint16_t m_value;
};

static constexpr KDColor KDColorBlack = KDColor::RGB24(0x000000);
static constexpr KDColor KDColorWhite = KDColor::RGB24(0xFFFFFF);
static constexpr KDColor KDColorRed = KDColor::RGB24(0xFF0000);
static constexpr KDColor KDColorGreen = KDColor::RGB24(0x00FF00);
static constexpr KDColor KDColorBlue = KDColor::RGB24(0x0000FF);
static constexpr KDColor KDColorYellow = KDColor::RGB24(0xFFFF00);
static constexpr KDColor KDColorOrange = KDColor::RGB24(0xFF9900);
static constexpr KDColor KDColorPurple = KDColor::RGB24(0xFF00DD);

#endif
