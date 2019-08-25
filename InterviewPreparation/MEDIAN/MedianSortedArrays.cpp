import java.util.*;

class Median{
    public double MedianOfDifferentSizedArrays(int[] a, int[] b) {
        //idea is to partition combined array into two equal parts
        int sz = a.length + b.length + 1; //size of combined array (+1 is to make sure left array has greater elements in case of odd sum)
        int start = 0, end = a.length;
        double median = 0;
        while (start <= end) {
            //traverse one of the arrays to apply binary search
            int partitionX = (start + end) / 2;
            int partitionY = sz / 2 - partitionX;
            int maxLeftX = (partitionX == 0) ? Integer.MIN_VALUE : a[partitionX - 1];
            int minRightX = (partitionX == a.length) ? Integer.MAX_VALUE : a[partitionX];
            int maxLeftY = (partitionY == 0) ? Integer.MIN_VALUE : b[partitionY - 1];
            int minRightY = (partitionY == b.length) ? Integer.MAX_VALUE : b[partitionY];
            //System.out.println(maxLeftX+" "+minRightX+" "+maxLeftY+" "+minRightY);
            //If the required criteria (for median) is satisfied
            if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
                if ((a.length + b.length) % 2 == 0)
                    median = (double) (Math.max(maxLeftX, maxLeftY) + Math.min(minRightX, minRightY)) / 2;
                else
                    median = (double) Math.max(maxLeftX, maxLeftY);
                break;
            }

            if (maxLeftX > minRightY)
                end = partitionX - 1;
            else if (maxLeftY > maxLeftX)
                start = partitionX + 1;

        }
        return median;
    }
}

class MedianSortedArrays{
    public static void main(String[] args){
        int[] a = new int[]{1,4,7,8,11,12};
        int[] b = new int[]{13};
        Median obj = new Median();
        if(a.length <= b.length)
            System.out.println(obj.MedianOfDifferentSizedArrays(a,b));
        else
            System.out.println(obj.MedianOfDifferentSizedArrays(b,a));
    }
}
