#pragma once

#include <QObject>
#include "StereoMatchParamEntity.h"

class StereoMatchController : public QObject
{
	Q_OBJECT

private:
	StereoMatchParamEntity * m_entity;
	QString ImageL, ImageR, insFile, extFile;
public:
	StereoMatchController(QObject *parent=0);
	~StereoMatchController();

	void setDefaultMatchParamCommand();
	void MatchCommand();
	void RefreshStereoMatchCommand();
public slots:
	void onOpenMessageBox(QString title, QString msg);
};
