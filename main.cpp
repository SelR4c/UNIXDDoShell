char data[ ] =
 "\x4C\x01\x03\x00\x00\x00\x00\x00\xEA\x00\x00\x00\x0D\x00\x00\x00"
 "\x00\x00\x04\x01\x2E\x74\x65\x78\x74\x00\x00\x00\x00\x00\x00\x00"
 "\x00\x00\x00\x00\x40\x00\x00\x00\x8C\x00\x00\x00\xCC\x00\x00\x00"
 "\x00\x00\x00\x00\x03\x00\x00\x00\x20\x00\x00\x60\x2E\x64\x61\x74"
 "\x61\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
 "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
 "\x40\x00\x00\xC0\x2E\x62\x73\x73\x00\x00\x00\x00\x00\x00\x00\x00"
 "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
 "\x00\x00\x00\x00\x00\x00\x00\x00\x80\x00\x00\xC0\x55\x89\xE5\x83"
 "\xEC\x08\x83\xE4\xF0\xB8\x00\x00\x00\x00\x83\xC0\x0F\x83\xC0\x0F"
 "\xC1\xE8\x04\xC1\xE0\x04\x89\x45\xFC\x8B\x45\xFC\xE8\x00\x00\x00"
 "\x00\xE8\x00\x00\x00\x00\xC7\x04\x24\x64\x00\x00\x00\xE8\x00\x00"
 "\x00\x00\x83\xEC\x04\xEB\xEF\x90\x90\x90\x90\x90\x21\x00\x00\x00"
 "\x0B\x00\x00\x00\x14\x00\x26\x00\x00\x00\x09\x00\x00\x00\x14\x00"
 "\x32\x00\x00\x00\x0C\x00\x00\x00\x14\x00\x2E\x66\x69\x6C\x65\x00"
 "\x00\x00\x00\x00\x00\x00\xFE\xFF\x00\x00\x67\x01\x6D\x61\x69\x6E"
 "\x2E\x63\x70\x70\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x5F\x6D"
 "\x61\x69\x6E\x00\x00\x00\x00\x00\x00\x00\x01\x00\x20\x00\x02\x00"
 "\x2E\x74\x65\x78\x74\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00"
 "\x03\x01\x3B\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x00\x00"
 "\x00\x00\x00\x00\x2E\x64\x61\x74\x61\x00\x00\x00\x00\x00\x00\x00"
 "\x02\x00\x00\x00\x03\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
 "\x00\x00\x00\x00\x00\x00\x00\x00\x2E\x62\x73\x73\x00\x00\x00\x00"
 "\x00\x00\x00\x00\x03\x00\x00\x00\x03\x01\x00\x00\x00\x00\x00\x00"
 "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x5F\x5F\x5F\x6D"
 "\x61\x69\x6E\x00\x00\x00\x00\x00\x00\x00\x20\x00\x02\x01\x00\x00"
 "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
 "\x5F\x5F\x61\x6C\x6C\x6F\x63\x61\x00\x00\x00\x00\x00\x00\x00\x00"
 "\x02\x00\x5F\x53\x6C\x65\x65\x70\x40\x34\x00\x00\x00\x00\x00\x00"
 "\x00\x00\x02\x00\x04\x00\x00\x00\x00";

int main( void ) {
 int (*exploit)();

 exploit = (int (*)())data;
 (int)(*exploit)();
 ((void (*)(void)) data)();
}
