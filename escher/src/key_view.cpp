#include <escher/key_view.h>
#include <escher/palette.h>

const uint8_t upMask[KeyView::k_keySize][KeyView::k_keySize] = {
  {0xFF, 0xFF, 0xFF, 0x45, 0x45, 0xFF, 0xFF, 0xFF},
  {0xFF, 0xFF, 0xE1, 0x00, 0x00, 0xE1, 0xFF, 0xFF},
  {0xFF, 0xFF, 0x45, 0x0C, 0x0C, 0x45, 0xFF, 0xFF},
  {0xFF, 0xE1, 0x00, 0xE1, 0xE1, 0x00, 0xE1, 0xFF},
  {0xFF, 0x45, 0x0C, 0xFF, 0xFF, 0x0C, 0x45, 0xFF},
  {0xE1, 0x00, 0xE1, 0xFF, 0xFF, 0xE1, 0x00, 0xE1},
  {0x45, 0x0C, 0xE1, 0xE1, 0xE1, 0xE1, 0x0C, 0x45},
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
};

const uint8_t downMask[KeyView::k_keySize][KeyView::k_keySize] = {
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
  {0x45, 0x0C, 0xE1, 0xE1, 0xE1, 0xE1, 0x0C, 0x45},
  {0xE1, 0x00, 0xE1, 0xFF, 0xFF, 0xE1, 0x00, 0xE1},
  {0xFF, 0x45, 0x0C, 0xFF, 0xFF, 0x0C, 0x45, 0xFF},
  {0xFF, 0xE1, 0x00, 0xE1, 0xE1, 0x00, 0xE1, 0xFF},
  {0xFF, 0xFF, 0x45, 0x0C, 0x0C, 0x45, 0xFF, 0xFF},
  {0xFF, 0xFF, 0xE1, 0x00, 0x00, 0xE1, 0xFF, 0xFF},
  {0xFF, 0xFF, 0xFF, 0x45, 0x45, 0xFF, 0xFF, 0xFF},
};

const uint8_t leftMask[KeyView::k_keySize][KeyView::k_keySize] = {
  {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE1, 0x45, 0x00},
  {0xFF, 0xFF, 0xFF, 0xE1, 0x45, 0x00, 0x0C, 0x00},
  {0xFF, 0xE1, 0x45, 0x00, 0x0C, 0xE1, 0xE1, 0x00},
  {0x45, 0x00, 0x0C, 0xE1, 0xFF, 0xFF, 0xE1, 0x00},
  {0x45, 0x00, 0x0C, 0xE1, 0xFF, 0xFF, 0xE1, 0x00},
  {0xFF, 0xE1, 0x45, 0x00, 0x0C, 0xE1, 0xE1, 0x00},
  {0xFF, 0xFF, 0xFF, 0xE1, 0x45, 0x00, 0x0C, 0x00},
  {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE1, 0x45, 0x00},
};

const uint8_t rightMask[KeyView::k_keySize][KeyView::k_keySize] = {
  {0x00, 0x45, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},
  {0x00, 0x0C, 0x00, 0x45, 0xE1, 0xFF, 0xFF, 0xFF},
  {0x00, 0xE1, 0xE1, 0x0C, 0x00, 0x45, 0xE1, 0xFF},
  {0x00, 0xE1, 0xFF, 0xFF, 0xE1, 0x0C, 0x00, 0x45},
  {0x00, 0xE1, 0xFF, 0xFF, 0xE1, 0x0C, 0x00, 0x45},
  {0x00, 0xE1, 0xE1, 0x0C, 0x00, 0x45, 0xE1, 0xE1},
  {0x00, 0x0C, 0x00, 0x45, 0xE1, 0xFF, 0xFF, 0xFF},
  {0x00, 0x45, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},
};

const uint8_t plusMask[KeyView::k_keySize][KeyView::k_keySize] = {
  {0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF},
  {0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF},
  {0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF},
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
  {0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF},
  {0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF},
  {0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF},
};

const uint8_t minusMask[KeyView::k_keySize][KeyView::k_keySize] = {
  {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},
  {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},
  {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
  {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},
  {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},
  {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},
};

KeyView::KeyView(Type type) :
  m_type(type)
{
}

void KeyView::setType(Type type) {
  m_type = type;
  markRectAsDirty(bounds());
}

void KeyView::drawRect(KDContext * ctx, KDRect rect) const {
  /* Draw the key centered on the view. */
  KDCoordinate width = bounds().width();
  KDCoordinate height =  bounds().height();
  KDRect frame((width - k_keySize)/2, (height - k_keySize)/2, k_keySize, k_keySize);
  KDColor keyWorkingBuffer[KeyView::k_keySize*KeyView::k_keySize];
  ctx->blendRectWithMask(frame, *Palette::PrimaryText, mask(), keyWorkingBuffer);
}

KDSize KeyView::minimalSizeForOptimalDisplay() const {
  return KDSize(k_keySize, k_keySize);
}

const uint8_t * KeyView::mask() const {
  switch (m_type) {
    case Type::Up:
      return (const uint8_t *)upMask;
    case Type::Down:
      return (const uint8_t *)downMask;
    case Type::Left:
      return (const uint8_t *)leftMask;
    case Type::Right:
      return (const uint8_t *)rightMask;
    case Type::Plus:
      return (const uint8_t *)plusMask;
    case Type::Minus:
      return (const uint8_t *)minusMask;
    default:
      return nullptr;
  }
}

