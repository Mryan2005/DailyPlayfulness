int main() {
	for ( int i = 1; i < 10; i++ ) {
		for (int j = 1; j < 10; j++) {
			for (int k = 1; k < 10; k++) {
				printf("1");
				goto out;
			}
		}
	}
	out:
	printf("out");
	return 0;
}