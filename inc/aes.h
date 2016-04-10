/*
 ============================================================================
 Name        : aes.h
 Author      : glb
 License     : MIT
 ============================================================================
 */

#ifndef INC_AES_H_
#define INC_AES_H_

uint8_t * rotWord(uint8_t input[], int shift_index);
uint8_t * subWord(uint8_t input[], int arr_length, int crypto_mode);
uint8_t * rcon(int input);
uint8_t * ek(uint8_t expanded_key[], int offset);
uint8_t * k(uint8_t key[], int offset);
uint8_t * shiftRow(uint8_t input[], int crypto_mode);
uint8_t * mixColumn(uint8_t input[], uint8_t m_matrix[]);

int aes_testcase(void);

uint8_t * aes_expand_key(int key_size, uint8_t key[]);
uint8_t * aes_encrypt(uint8_t state[], uint8_t expanded_key[], int key_size);
uint8_t * aes_decrypt(uint8_t state[], uint8_t expanded_key[], int key_size);

#endif /* INC_AES_H_ */
