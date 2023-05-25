enum { NORTH, SOUTH, EAST, WEST } direction;

int x = 0, y = 0;

switch(direction) {
    case NORTH: y--;
                break;
    case SOUTH: y++;
                break;
    case EAST:  x++;
                break;
    case WEST:  x--;
                break;
    default:    break;
}
