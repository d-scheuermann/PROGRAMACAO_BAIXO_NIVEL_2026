#include <stdio.h>

        void func1()
        {
            int vet[] = { 4, 9, 12 };
            int i, *ptr;
            ptr = vet;
            for(i =0; i<3; i++)
                printf("%d ", *ptr++);
        }

        void func2()
        {
            int vet[] = { 4, 9, 12 };
            int i, *ptr;
            ptr = vet;
            for(i =0; i<3; i++)
                printf("%d ", (*ptr)++);
        }

        void main()
        {
            func1();
            //func2();
        }
        