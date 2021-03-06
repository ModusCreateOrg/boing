#ifndef BOING_GDIMSCREENPROCESS_H
#define BOING_GDIMSCREENPROCESS_H

#include "GGame.h"

class GDimScreenProcess : public BProcess {
  public:
    GDimScreenProcess() : BProcess() {
      ResetTimer();
    }

    ~GDimScreenProcess() {}

    void ResetTimer() {
      mTimer = 900; // 30s
    }

    TBool RunBefore() {
      return ETrue;
    }

    TBool RunAfter() {
#ifdef __XTENSA__
      const TBool keysPressed = gControls.IsPressed(BUTTON_JOY_ANY);

      if (keysPressed) {
        gDisplay.SetBrightness(MAX(MIN_BRIGHTNESS, MAX_BRIGHTNESS * gOptions->brightness));
        ResetTimer();
      } else {
        mTimer--;
        if (mTimer < 0) {
          gDisplay.SetBrightness(MIN_BRIGHTNESS);
          ResetTimer();
        }
      }
#endif
      return ETrue;
    }

    TInt16 mTimer;
};

#endif //BOING_GDIMSCREENPROCESS_H
