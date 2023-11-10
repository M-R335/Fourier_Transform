import org.apache.commons.math3.complex.Complex;
import org.apache.commons.math3.transform.DftNormalization;
import org.apache.commons.math3.transform.FastFourierTransformer;
import org.apache.commons.math3.transform.TransformType;

public class FourierTransformExample {
    public static void main(String[] args) {
        double[] input = {0.0, 1.0, 2.0, 3.0}; // small input to show working
        FastFourierTransformer transformer = new FastFourierTransformer(DftNormalization.STANDARD);
        try {
            Complex[] complex = transformer.transform(input, TransformType.FORWARD);
            for (Complex c : complex) {
                System.out.println(c);
            }
        } catch (IllegalArgumentException e) {
            System.out.println("The length of the data set must be a power of 2.");
        }
    }
}
