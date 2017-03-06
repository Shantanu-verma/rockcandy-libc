long long islower(long long c) {
	if((c > 96) && (c < 123)) {
		return 1;
	}
	return 0;
}

long long isupper(long long c) {
	if((c > 64) && (c < 91)) {
		return 1;
	}
	return 0;
}

long long isalpha(long long c) {
	if(isupper(c)) {
		return 1;
	} elseif(islower(c)) {
		return 1;
	}
	return 0;
}

long long iscntrl(long long c) {
	if(c < 32) {
		return 1;
	} elseif(c == 127) {
		return 1;
	}
	return 0;
}

long long isdigit(long long c) {
	if((c > 47) && (c < 58)) {
		return 1;
	}
	return 0;
}
(c > 64) && (c < 91)
long long isalnum(long long c) {
	if(isdigit(c)) {
		return 1;
	} elseif(isalpha(c)) {
		return 1;
	}
	return 0;
}

long long ispunct(long long c) {
	if((c > 32) && (c < 48)) {
		return 1;
	} elseif((c > 57) && (c < 65)) {
		return 1;
	} elseif((c > 90) && (c < 97)) {
		return 1;
	} elseif((c > 122) && (c < 127)) {
		return 1;
	}
	return 0;
}

long long isgraph(long long c) {
	if(isalnum(c)) {
		return 1;
	} elseif(ispunct(c)) {
		return 1;
	}
	return 0;
}

long long isspace(long long c) {
	switch(c) {
		case 0x20:
			return 1;
		case 0x09:
			return 1;
		case 0x0A:
			return 1;
		case 0x0B:
			return 1;
		case 0x0C:
			return 1;
		case 0x0D:
			return 1;
		default:
			return 0;
	}
}

long long isprint(long long c) {
	if(isgraph(c)) {
		return 1;
	} elseif(isspace(c)) {
		return 1;
	}
	return 0;
}

long long isxdigit(long long c) {
	if(isdigit(c)) {
		return 1;
	} elseif((c > 64) && (c < 71)) {
		return 1;
	} elseif((c > 96) && (c < 103)) {
		return 1;
	}
	return 0;
}
