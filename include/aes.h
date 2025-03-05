#ifndef AES_H
#define AES_H

typedef enum
{
  AES_128 = 16,
  AES_192 = 24,
  AES_256 = 32
} AESKeyLength;

int aes_encrypt_file(const char *input_file, const char *output_file, const unsigned char *key, int key_size);
int aes_decrypt_file(const char *input_file, const char *output_file, const unsigned char *key, int key_size);

#endif