void check_3(int num) {
	int last;
	while (num > 3) {
		last = num & 1;
		num = num >> 1;
		num = num + last + last;
	}

	if (num == 3 || num == 0) {
		printf("����� ������ 3");
	}
	else {
		printf("����� �� ������ 3");
	}
}

void check_5(int num) {
	int last;
	while (num > 5) {
		last = num & 1;
		num = num >> 1;
		num = num + last + (last << 1);
	}

	if (num == 5 || num == 0) {
		printf("����� ������ 5");
	}
	else {
		printf("����� �� ������ 5");
	}
}

void check_7(int num) {
	int last;
	while (num > 7) {
		last = num & 1;
		num = num >> 1;
		num = num + last + last + (last << 1);
	}

	if (num == 7 || num == 0) {
		printf("����� ������ 7");
	}
	else {
		printf("����� �� ������ 7");
	}
}

void check_11(int num) {
	int last;
	while (num > 11) {
		last = num & 1;
		num = num >> 1;
		num = num + last + last + (last << 2);
	}

	if (num == 11 || num == 0) {
		printf("����� ������ 11");
	}
	else {
		printf("����� �� ������ 11");
	}
}

void check_37(int num) {
	int last;
	while (num > 37) {
		last = num & 1;
		num = num >> 1;
		num = num + last + (last << 4) + (last << 1);
	}

	if (num == 37 || num == 0) {
		printf("����� ������ 37");
	}
	else {
		printf("����� �� ������ 37");
	}
}

void check_47(int num) {
	int last;
	while (num > 47) {
		last = num & 1;
		num = num >> 1;
		num = num + last + (last << 4) + (last << 2) + (last << 1) + last;
	}

	if (num == 47 || num == 0) {
		printf("����� ������ 47");
	}
	else {
		printf("����� �� ������ 47");
	}
}

void check_29(int num) {
	int last;
	while (num > 29) {
		last = num & 1;
		num = num >> 1;
		num = num + last + (last << 3) + (last << 2) + (last << 1);
	}

	if (num == 29 || num == 0) {
		printf("����� ������ 29");
	}
	else {
		printf("����� �� ������ 29");
	}
}

void check_61(int num) {
	int last;
	while (num > 61) {
		last = num & 1;
		num = num >> 1;
		num = num + last + (last << 4) + (last << 3) + (last << 2) + (last << 1);
	}

	if (num == 61 || num == 0) {
		printf("����� ������ 61");
	}
	else {
		printf("����� �� ������ 61");
	}
}

void check_73(int num) {
	int last;
	while (num > 73) {
		last = num & 1;
		num = num >> 1;
		num = num + last + (last << 5) + (last << 2);
	}

	if (num == 73 || num == 0) {
		printf("����� ������ 73");
	}
	else {
		printf("����� �� ������ 73");
	}
}

void check_23(int num) {
	int last;
	while (num > 23) {
		last = num & 1;
		num = num >> 1;
		num = num + last + (last << 3) + (last << 1) + last;
	}

	if (num == 23 || num == 0) {
		printf("����� ������ 23");
	}
	else {
		printf("����� �� ������ 23");
	}
}

void check_79(int num) {
	int last;
	while (num > 79) {
		last = num & 1;
		num = num >> 1;
		num = num + last + (last << 5) + (last << 2) + (last << 1) + last;
	}

	if (num == 79 || num == 0) {
		printf("����� ������ 79");
	}
	else {
		printf("����� �� ������ 79");
	}
}

void check_43(int num) {
	int last;
	while (num > 43) {
		last = num & 1;
		num = num >> 1;
		num = num + last + (last << 4) + (last << 2) + last;
	}

	if (num == 43 || num == 0) {
		printf("����� ������ 43");
	}
	else {
		printf("����� �� ������ 43");
	}
}

void check_31(int num) {
	int last;
	while (num > 31) {
		last = num & 1;
		num = num >> 1;
		num = num + last + (last << 3) + (last << 2) + (last << 1) + last;
	}

	if (num == 31 || num == 0) {
		printf("����� ������ 31");
	}
	else {
		printf("����� �� ������ 31");
	}
}

void check_89(int num) {
	int last;
	while (num > 89) {
		last = num & 1;
		num = num >> 1;
		num = num + last + (last << 5) + (last << 3) + (last << 2);
	}

	if (num == 89 || num == 0) {
		printf("����� ������ 89");
	}
	else {
		printf("����� �� ������ 89");
	}
}

void check_149(int num) {
	int last;
	while (num > 149) {
		last = num & 1;
		num = num >> 1;
		num = num + last + (last << 6) + (last << 3) + (last << 1);
	}

	if (num == 149 || num == 0) {
		printf("����� ������ 149");
	}
	else {
		printf("����� �� ������ 149");
	}
}

void check_131(int num) {
	int last;
	while (num > 131) {
		last = num & 1;
		num = num >> 1;
		num = num + last + (last << 6) + last;
	}

	if (num == 131 || num == 0) {
		printf("����� ������ 131");
	}
	else {
		printf("����� �� ������ 131");
	}
}

void check_151(int num) {
	int last;
	while (num > 151) {
		last = num & 1;
		num = num >> 1;
		num = num + last + (last << 6) + (last << 3) + (last << 1) + last;
	}

	if (num == 151 || num == 0) {
		printf("����� ������ 151");
	}
	else {
		printf("����� �� ������ 151");
	}
}

void check_223(int num) {
	int last;
	while (num > 223) {
		last = num & 1;
		num = num >> 1;
		num = num + last + (last << 6) + (last << 5) + (last << 3) + (last << 2) + (last << 1) + last;
	}

	if (num == 223 || num == 0) {
		printf("����� ������ 223");
	}
	else {
		printf("����� �� ������ 223");
	}
}

void check_197(int num) {
	int last;
	while (num > 197) {
		last = num & 1;
		num = num >> 1;
		num = num + last + (last << 6) + (last << 5) + (last << 1);
	}

	if (num == 197 || num == 0) {
		printf("����� ������ 197");
	}
	else {
		printf("����� �� ������ 197");
	}
}

void check_109(int num) {
	int last;
	while (num > 109) {
		last = num & 1;
		num = num >> 1;
		num = num + last + (last << 5) + (last << 4) + (last << 2) + (last << 1);
	}

	if (num == 109 || num == 0) {
		printf("����� ������ 109");
	}
	else {
		printf("����� �� ������ 109");
	}
}

void check_107(int num) {
	int last;
	while (num > 107) {
		last = num & 1;
		num = num >> 1;
		num = num + last + (last << 5) + (last << 4) + (last << 2) + last;
	}

	if (num == 107 || num == 0) {
		printf("����� ������ 107");
	}
	else {
		printf("����� �� ������ 107");
	}
}

void check_179(int num) {
	int last;
	while (num > 179) {
		last = num & 1;
		num = num >> 1;
		num = num + last + last + (last << 6) + (last << 4) + (last << 3);
	}

	if (num == 179 || num == 0) {
		printf("����� ������ 179");
	}
	else {
		printf("����� �� ������ 179");
	}
}

void check_113(int num) {
	int last;
	while (num > 113) {
		last = num & 1;
		num = num >> 1;
		num = num + last + last + (last << 5) + (last << 4) + (last << 3);
	}

	if (num == 113 || num == 0) {
		printf("����� ������ 113");
	}
	else {
		printf("����� �� ������ 113");
	}
}
