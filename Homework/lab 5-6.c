int prime( int p ) {
	int status,j = 0;
	for (int i = 2; i <= p/2; i++) {
		if (p % i == 0) {
			j= 1;
			break;
		}
	}
	if(j==1) {
		status = 0;
	} else if (p <= 1) {
		status = 0;
	} else {
		status = 1;
	}
	return status;
}
int PrimeSum( int m, int n ) {
	int y = 0;
	for (int i = m; i <= n; i++) {
		if(prime( i )) {
			y += i;
		}
	}
	return y;
}
