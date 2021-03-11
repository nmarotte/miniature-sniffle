//
// Created by natha on 11/03/2021.
//

#include "Earth.h"

Earth::Earth(double cellVolume, double nbCells) : cellVolume(cellVolume), nbCells(nbCells) {}

void Earth::update() {
    std::list<std::list<std::list<GridCell>>>::iterator listOfListOfCell;
    std::list<std::list<GridCell>>::iterator listOfCell;
    std::list<GridCell>::iterator cell;
    for (listOfListOfCell = cells.begin(); listOfListOfCell != cells.end(); ++listOfListOfCell) {
        for (listOfCell = listOfListOfCell->begin(); listOfCell != listOfListOfCell->end(); ++listOfCell) {
            for (cell = listOfCell->begin(); cell != listOfCell->end(); ++cell) {
                cell->update();
            }
        }
    }
}
