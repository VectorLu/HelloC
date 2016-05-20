float function(float x);
float xc(float x1, float x2);
float root(float x1, float x2, float gizmo);



int main() {
	float x1, x2, fx1, fx2, x, gizmo;
	do {
		printf("Please input x1, x2, gizmo:\n");
		scanf_s("%f, %f, %f", &x1, &x2, &gizmo);
		fx1 = function(x1);
		fx2 = function(x2);
	} while (fx1*fx2 >= 0);

	x = root(x1, x2, gizmo);
	printf("A root is %f.", x);
	return 0;
}

float f(float x) {
	float z;

	z = ((x - 5.0)*x + 16.0)*x - 80.0;
	return z;
}

float xc(float x1, float x2) {
	float  z;

	z = (x1*f(x2) - x2*f(x1)) / (f(x2) - f(x1));
	return z;
}

float root(float x1, float x2, float gizmo) {
	float x, fx1, fx2, fx;

	fx1 = f(x1);
	do {

		x = xc(x1, x2);
		fx = f(x);

		if (fx*fx1 > 0) {
			fx1 = fx;
			x1 = x;
		}
		else {
			fx2 = fx;
			x2 = x;
			}
		}
		while (fabs(fx) >= gizmo);

		return x;

	}
