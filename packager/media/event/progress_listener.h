// Copyright 2015 Google Inc. All rights reserved.
//
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file or at
// https://developers.google.com/open-source/licenses/bsd
//
// Event handler for progress updates.

#ifndef MEDIA_EVENT_PROGRESS_LISTENER_H_
#define MEDIA_EVENT_PROGRESS_LISTENER_H_

#include <stdint.h>

#include "packager/base/macros.h"

namespace edash_packager {
namespace media {

/// This class listens to progress updates events.
class ProgressListener {
 public:
  virtual ~ProgressListener() {}

  /// Called when there is a progress update.
  /// @param progress is the current progress metric, ranges from 0 to 1.
  virtual void OnProgress(double progress) = 0;

 protected:
  ProgressListener() {}

 private:
  DISALLOW_COPY_AND_ASSIGN(ProgressListener);
};

}  // namespace media
}  // namespace edash_packager

#endif  // MEDIA_EVENT_PROGRESS_LISTENER_H_
