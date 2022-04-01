int lookup_speeding_fine(int over) {
	if (over <= 0) {
		return 0;
	}
	else if (over < 10) {
		return 180;
	}
	else if (over < 20) {
		return 406;
	}
	else if (over < 30) {
		return 825;
	}
	else if (over < 45) {
		return 1500;
	}
	else {
		return 1690;
	}
}