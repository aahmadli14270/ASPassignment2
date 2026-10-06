# Endianness

Endianness is the way of multi-way value in computer memory, and there is 2 approaches at there - Big and Little Endian.

The concept emerged because engineers need to decide where to store those multi-byte values; Lowest Memory address, or Higest Memory address?

And since computers and industry shaped independently, These choices resulted in big-endian and little-endian based on different processor architectures and designs. For me, big endian seems more human intuitive, because it stores the bytes in the same way human reads them. Little endian emerged because engineers thought it is good for some low level operations which focuses on manipulating or working on least significant part.

But at the end, none of it really changes the value, it just how computers read them. And the real challange starts when systems developed by different endianness exchange binary data. If sender or receiver reads it in wrong order, value will be totally different. So, in reality, they are not really superior to each other considering daily operations, main point is about making these different working systems to communicate correctly in all channels including:

- network communication
- binary file processing
- embedded systems
- low-level programming
- and etc.
