#pragma once

#include <vector>

#include <QPainter.h>

#include "OverlayElement.h"

class OverlayPainter : public QPainter {
public:
	OverlayPainter();
	virtual ~OverlayPainter();

public:
	void add(OverlayElement& overlayElement);

	void paint();

protected:
	std::vector<OverlayElement*> top;
	std::vector<OverlayElement*> bottom;

	void paint(const std::vector<OverlayElement*>& elements, const QRect& region, OverlayElement::Alignment alignment);

};
