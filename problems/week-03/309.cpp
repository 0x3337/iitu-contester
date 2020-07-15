#include <iostream>
using namespace std;
int main() {
 	int a, b, c;

 	cin >> a >> b >> c;

 	if(c > 0 && b > 0 && b <=12 && a > 0) {
 	 	if(((c % 100 != 0) && (c % 4 == 0)) || (c % 400 == 0)) {
	 		if(b == 2) {
	 			if(a <= 29 && a > 0) {
	 				if(a == 29) {
	 					b++;
	 					a = 1;
	 				}
	 				else a++;
	 			}
	 		}
	 		else {
		 		if(b > 0 && b <= 12) {
		 			if(b == 1 && a > 0 && a <= 31) {
		 				if(a == 31) {
		 					b++;
		 					a = 1;
		 				}
		 				else a++;
		 			}
		 			else {
		 				if(b == 3 && a > 0 && a <= 31) {
			 				if(a == 31) {
			 					b++;
			 					a = 1;
			 				}
			 				else a++;
			 			}
			 			else goto l;
		 			}
		  		}
		  		else cout << "no";
		  	}
		}
		else {
			if(b == 1 && a > 0 && a <= 31) {
		 		if(a == 31) {
		 			b++;
		 			a = 1;
		 		}
		 		else a++;
			}
		 	else {
		 		if(b == 2 && a <= 28) {
		 			if(a == 28) {
			 			b++;
			 			a = 1;
			 		}
			 		else a++;
		 		}
		 		else {
			 		if(b == 3 && a > 0 && a <= 31) {
						if(a == 31) {
				 			b++;
				 			a = 1;
				 		}
				 		else a++;
			 		}
			 		else {
			 			l:
			 			if(b == 4 && a > 0 && a <= 30) {
				 			if(a == 30) {
					 			b++;
					 			a = 1;
					 		}
					 		else a++;
				 		}
				 		else {
				 			if(b == 5 && a > 0 && a <= 31) {
					 			if(a == 31) {
						 			b++;
						 			a = 1;
						 		}
						 		else a++;
					 		}
					 		else {
					 			if(b == 6 && a > 0 && a <= 30) {
							 		if(a == 30) {
							 			b++;
							 			a = 1;
							 		}
							 		else a++;
							 	}
							 	else {
							 		if(b == 7 && a > 0 && a <= 31) {
							 			if(a == 31) {
								 			b++;
								 			a = 1;
								 		}
								 		else a++;
							 		}
							 		else {
							 			if(b == 8 && a > 0 && a <= 31) {
											if(a == 31) {
									 			b++;
									 			a = 1;
									 		}
									 		else a++;
										}
										else {
											if(b == 9 && a > 0 && a <= 30) {
								 				if(a == 31) {
										 			b++;
										 			a = 1;
										 		}
										 		else a++;
								 			}
								 			else {
								 				if(b == 10 && a > 0 && a <= 31) {
										 			if(a == 31) {
											 			b++;
											 			a = 1;
											 		}
											 		else a++;
										 		}
										 		else {
										 			if(b == 11 && a > 0 && a <= 30) {
											 			if(a == 30) {
												 			b++;
												 			a = 1;
												 		}
												 		else a++;
											 		}
											 		else {
											 			if(b == 12 && a > 0 && a <= 31) {
															if(a == 31) {
													 			a = 1;
													 			b = 1;
													 			c++;
													 		}
													 		else a++;
											 			}
													}
										 		}
									 		}
								 		}
							 		}
								}
						 	}
					 	}	
				 	}
		 		}
		 	}
	  	}
 	}

 	cout << a << " " << b << " " << c;

	return 0;
}