#ifndef MDI_QUARTER_WIDGET_H
#define MDI_QUARTER_WIDGET_H

/**************************************************************************\
 *
 *  This file is part of the SIM Quarter extension library for Coin.
 *  Copyright (C) 1998-2007 by Systems in Motion.  All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License ("GPL") version 2
 *  as published by the Free Software Foundation.  See the file COPYING
 *  at the root directory of this source distribution for additional
 *  information about the GNU GPL.
 *
 *  For using SIM Quarter with software that can not be combined with
 *  the GNU GPL, and for taking advantage of the additional benefits of
 *  our support services, please contact Systems in Motion about acquiring
 *  a Coin Professional Edition License.
 *
 *  See <URL:http://www.coin3d.org/> for more information.
 *
 *  Systems in Motion AS, Bygd�y all� 5, N-0257 Oslo, NORWAY. (www.sim.no)
 *
\**************************************************************************/

#include <Quarter/QuarterWidget.h>
using namespace SIM::Coin3D::Quarter;

#include <QSize>

class QString;

class MdiQuarterWidget : public QuarterWidget {
  typedef QuarterWidget inherited;
public:
  MdiQuarterWidget(QWidget * parent = 0, const QGLWidget * sharewidget = 0);
  ~MdiQuarterWidget();

  bool loadFile(const QString & filename);
  const QString & currentFile(void) const;

  virtual QSize minimumSizeHint(void) const;

private:
  QString currentfile;
};

#endif // MDI_QUARTER_WIDGET_H