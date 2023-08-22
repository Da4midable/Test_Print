char *_itoa(int value, char *buffer, int radix)
{
        int i = 0;
        int n = abs(value);
        char *p = buffer;
        char *q = buffer;

        do
        {
                *p++ = (n % radix) + '0';
                n /= radix;
        } while (n);

        if (value < 0)
        {
                *p++ = '-';
        }

        *p = '\0';

        if (value == 0)
        {
                p--;
        }
        while (p > buffer)
        {
                char temp = *p;
                *p = *q;
                *q = temp;
                p--;
                q++;
        }
        return buffer;
}
