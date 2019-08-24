#pragma once

#include "OverlayElement.h"

class OverlayText : public OverlayElement
{
	Q_OBJECT

public:
	OverlayText(Alignment alignment, QObject* parent);
	OverlayText(const QString& placeHolder, Alignment alignment, QObject* parent);
	~OverlayText();

	const QString placeHolder;

	void setText(const QString& text);

	virtual QSize size(QPainter& painter, const QRect& bounds) override;
	virtual void paint(QPainter& painter, const QRect& bounds) override;

private:
	QString text;
};
