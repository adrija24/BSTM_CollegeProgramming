// package com.company;
class starpattern{
    public static void main(String[] args) {
        int count =0;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<i;j++)
            {
                count ++;
                System.out.print(count);
            }
            System.out.println();
        }
    }
}