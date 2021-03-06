﻿//
//  player.cpp
//  cgassn1
//
//  Created by WonJong Jang on 2018. 10. 2..
//  Copyright © 2018년 Dahun Lee. All rights reserved.
//

#include "weapon.h"


Weapon::Weapon(Position pos_, Direction dir_, Size size_, float speed_, float range_) {
	pos = pos_;
	dir = dir_;
	size = size_;
	speed = speed_;
	range = range_;
}

void Weapon::move(void) {
	if (range >= 0)
	{
		switch (dir)
		{
		case LEFT:
			pos.set(pos.x() - speed, pos.y());
			break;

		case DOWN:
			pos.set(pos.x(), pos.y() - speed);
			break;

		case RIGHT:
			pos.set(pos.x() + speed, pos.y());
			break;

		case UP:
			pos.set(pos.x(), pos.y() + speed);
			break;
		}
		range -= speed;
	}
	else {
	}
	glutPostRedisplay();

}

void Weapon::display(void) {

}

Position Weapon::getPos() {
	return pos;
}
Direction Weapon::getDir() {
	return dir;
}
Size Weapon::getSize() {
	return size;
}
float Weapon::getSpeed() {
	return speed;
}
float Weapon::getRange() {
	return range;
}

void Weapon::setPos(Position pos_) {
	pos = pos_;
}

void Weapon::setDir(Direction dir_) {
	dir = dir_;
}

void Weapon::setSize(Size size_) {
	size = size_;
}

void Weapon::setSpeed(float speed_) {
	speed = speed_;
}

void Weapon::setRange(float range_) {
	range = range_;
}

Weapon::~Weapon() {

}